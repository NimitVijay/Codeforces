#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
 
int main() {
    int n;
    cin >> n;
    vector<int>A(n);
 
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<int>v1, v2, v3;
 
    for(int i = 0; i < n; i++){
        if(A[i] < 0){
            v1.push_back(A[i]);
        }else if(A[i] > 0){
            v2.push_back(A[i]);
        }else{
            v3.push_back(A[i]);
        }
    }
 
    if(v1.size()%2 == 0){
        int a = v1.back();
        v1.pop_back();
        v3.push_back(a);
    }
 
    if(v2.size() == 0){
        int a = v1.back();
        v1.pop_back();
        int b = v1.back();
        v1.pop_back();
 
        v2.push_back(a);
        v2.push_back(b);
    }
 
    cout << v1.size() << " ";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
 
    cout << v2.size() << " ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
 
    cout << v3.size() << " ";
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;
 
    return 0;
}