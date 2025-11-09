#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int rows,cols;
    cin>>rows>>cols;
    int totalSquares = rows*cols;
    int totaldomino = totalSquares/2;
    cout<<totaldomino;

    return 0;
}