
#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

vector<int> doubleString(vector<string>& A){
    int n = A.size();
    vector<int>v(n, 0);

    unordered_map<string,int>m;
    string temp;

    for(int i = 0; i < n; i++){
        m[A[i]] = i;
    }

    for(int i = 0; i < n; i++){
        string x = A[i];
        temp = "";
        for(int j = 0; j < x.size(); j++) {
            temp.push_back(A[i][j]);
            string rem = x.substr(j + 1, x.size() - j - 1);

            if(m.find(temp) != m.end() && m.find(rem) != m.end()){
                v[i] = 1;
                break;
            }
        }
    }

    return v;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<string>v;

        string s;

        for(int i = 0; i < n; i++){
            cin >> s;
            v.push_back(s);
        }

        vector<int> ans = doubleString(v);

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i];
        }
        cout << endl;
    }


    return 0;
}