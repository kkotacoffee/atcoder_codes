//引数nまでの素数列挙
//prime 素数格納
//is_prime 各数字が素数かどうかを格納

int prime[MAX_N];
bool is_prime[MAX_N+1];

int sieve(int n){
    int p=0;
    for(int i=0;i<=n;i++){
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for(int i=0;i<=n;i++){
        if(is_prime[i]){
            prime[p++] = i;
            for(int j=2*i;j<=n;j+=i;){
                is_prime[j] = false;
            }
        }
    }
    return p;
}