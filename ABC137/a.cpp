#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,K;
    cin >> A >> B;
    K = max(A+B,A-B);
    cout << max(K,A*B) << endl;
}