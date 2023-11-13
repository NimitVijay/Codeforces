#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int indexOfShortestNum(vector<int>&A, int x){
    int n = A.size();
    int l = 0, h = n - 1, ans = -1;

    while(l <= h){
        int m = l + (h - l)/2;
        if(A[m] <= x){
            ans = m;
            l = m + 1;
        } else{
            h = m - 1;
        }
    }

    return ans + 1;
}

int main() {
    int n, q;
    cin >> n;

    vector<int>A(n);
    vector<int>B;
    int ans = 0;

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> q;

    vector<int>v(q);

    sort(A.begin(), A.end());

    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        B.push_back(t);
    }

    for(int i = 0; i < q; i++){
        int p = indexOfShortestNum(A, B[i]);
        v[i] = p;
    }

    for(int i = 0; i < q; i++){
        cout << v[i] << endl;
    }

	return 0;
}
