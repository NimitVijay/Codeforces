
#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int>A(n);

    int ans = INT_MAX;
    int sum = 0;
    int idx = 1;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < k; i++){
        sum += A[i];
    }

    for(int i = k; i < n; i++){
        if(sum < ans) {
            ans = sum;
            idx = i + 1 - k;
        }
        sum -= A[i - k];
        sum += A[i];
    }

    if(sum < ans) {
        ans = sum;
        idx = n + 1 - k;
    }

    cout << idx << endl;

    return 0;
}