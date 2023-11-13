#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

bool comp(vector<int>& A, vector<int> & B){
    return A[0] < B[0];
}

string canDefeat(int s, vector<vector<int> > &v){
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++){
        if(s <= v[i][0]) {
            return "NO";
        } else {
            s += v[i][1];
        }
    }

    return "YES";
}

int main() {
    int s, n;
    cin >> s >> n;
    vector<vector<int> >v(n, vector<int>(2, 0));

    for(int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1];
    }

    string ans = canDefeat(s, v);
    cout << ans << endl;

	return 0;
}
