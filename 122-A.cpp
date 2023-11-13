#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

bool luckyNum(int n){
    while(n != 0){
        int rem = n%10;
        if(rem != 4 && rem != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

string isLucky(int n){
    for(int i = 1; i <= n; i++){
        if(n%i == 0 && luckyNum(i)){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;

    string ans = isLucky(n);
    cout << ans << endl;

	return 0;
}
