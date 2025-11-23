#include <bits/stdc++.h>
using namespace std;

struct Node {
    long long val;
    Node *left = nullptr, *right = nullptr;
};

struct Info {
    bool isBST;
    long long sum;
    long long minVal;
    long long maxVal;
    long long best;
};

long long answer = LLONG_MIN;

Info dfs(Node* node) {
    if (!node) {
        return {true, 0, LLONG_MAX, LLONG_MIN, LLONG_MIN};
    }

    Info L = dfs(node->left);
    Info R = dfs(node->right);

    answer = max({answer, L.best, R.best, node->val});

    bool valid = L.isBST && R.isBST && (node->left  == nullptr || node->val > L.maxVal) && (node->right == nullptr || node->val < R.minVal);

    if (valid) {
        long long total = node->val + L.sum + R.sum;
        answer = max(answer, total);

        long long mn = node->val, mx = node->val;
        if (node->left)  mn = min(mn, L.minVal), mx = max(mx, L.maxVal);
        if (node->right) mn = min(mn, R.minVal), mx = max(mx, R.maxVal);

        return {true, total, mn, mx, answer};
    }

    return {false, 0, 0, 0, answer};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<long long> a;
    long long x;
    while (ss >> x) a.push_back(x);

    if (a.empty() || a[0] < 0) {
        cout << "0\n";
        return 0;
    }

    Node* root = new Node{a[0]};
    queue<Node*> q{{root}};
    for (size_t i = 1; i < a.size() && !q.empty();) {
        Node* cur = q.front(); q.pop();

        if (i < a.size() && a[i] >= 0) {
            cur->left = new Node{a[i]};
            q.push(cur->left);
        }
        ++i;

        if (i < a.size() && a[i] >= 0) {
            cur->right = new Node{a[i]};
            q.push(cur->right);
        }
        ++i;
    }

    dfs(root);
    cout << (answer == LLONG_MIN ? 0 : answer) << "\n";
}