#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int X;
    cin >> X;
    if((X%100)<=5*(X/100)){
        cout << "1" << endl; 
    }else{
        cout << "0" << endl;
    }
}