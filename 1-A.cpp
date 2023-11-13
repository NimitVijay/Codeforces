#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    lld p = (n/a) + 1;
    lld q = (m/a) + 1;
    if(n%a == 0){
        p--;
    }

    if(m%a == 0){
        q--;
    }

    cout << p*q << endl;
	return 0;
}
