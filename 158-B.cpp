
#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main() {
    int n;
    cin >> n;
    vector<int>A(n);
    vector<int>v(5, 0);

    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        if(A[i] == 1){
            v[1]++;
        }else if(A[i] == 2){
            v[2]++;
        }else if(A[i] == 3){
            v[3]++;
        }else if(A[i] == 4){
            v[4]++;
        }
    }

    ans += v[4];
    ans += v[3];
    ans += v[2]/2;

    v[1] = max(0, v[1] - v[3]);
    v[2] = v[2]%2;

    if(v[2] == 1){
        ans++;
        v[1] = max(0, v[1] - 2);
    }

    ans += (v[1] + 3)/4;
    cout << ans << endl;
    return 0;
}