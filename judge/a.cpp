#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int S,L,R;
    cin >> S >> L >> R;
    if(S<=R && L<=S){
        cout << S << endl;
    }else if(S<L){
        cout << L << endl;
    }else{
        cout << R << endl;
    }
}