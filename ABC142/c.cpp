#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    unordered_map<int,int> mp(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        mp[A[i]-1] = i+1;
    }

    for(int i=0;i<N;i++){
        cout << mp[i];
        cout << " ";
    }
}