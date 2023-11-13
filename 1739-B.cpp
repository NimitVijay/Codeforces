#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
 
int main() {
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector<int>d(n);
        vector<int>a(n, 0);
        int ans = 0;
 
        for(int i = 0; i < n; i++){
            cin >> d[i];
        }
 
        a[0] = d[0];
 
        for(int i = 1; i < n; i++){
            int p = a[i - 1] + d[i];
            int q = a[i - 1] - d[i];
 
            if(p >= 0 && q >= 0 && p != q){
                ans = 1;
                break;
            }else if(p >= 0){
                a[i] = p;
            }else{
                a[i] = q;
            }
        }
 
        if(ans == 1){
            cout << -1 << endl;
        } else {
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
 
    }
 
	return 0;
}