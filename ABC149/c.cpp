#include <bits/stdc++.h>

using namespace std;

bool sosuu(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int X;
    cin >> X;
    for(int i=X;;i++){
        if(sosuu(i)){
            cout << i << endl;
            return 0;
        }
    }
}