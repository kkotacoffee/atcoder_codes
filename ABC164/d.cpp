#include <bits/stdc++.h>

using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    string S;
    cin >> S;
    long long int now=0,ans=0,ten=1;
    vector<int> amari(2019,0);

    for(int i=0;i<S.size();i++){
        now += ten*(S[S.size()-1-i]-'0');
        now %= 2019;
        amari[now]++;
        ten *= 10;
        ten %= 2019;
    }

    COMinit();

    for(int i=0;i<2019;i++){
        ans += COM(amari[i],2);
    }

    ans += amari[0];

    cout << ans << endl;
}