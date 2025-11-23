#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long essence[n], drain[n];
    for (long long i = 0; i < n; i++) {
        cin >> essence[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> drain[i];
    }
    
    long long limit = 0;
    long long balance = 0;
    long long begin = 0;
    
    for (long long i = 0; i < n; i++) {
        limit += essence[i] - drain[i];
        if (limit < 0) {
            balance += limit;
            limit = 0;
            begin = i + 1;
        }
    }
    
    if (limit + balance >= 0) {
        cout << begin + 1 << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}