#include <bits/stdc++.h>
using namespace std;

long long test(long long n){
    long long a = pow(10, 12);
    bool prime[a];
    for (long long i = 0; i < a; i++){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (long long i = 2; i < sqrt(a); i++){
        if (prime[i] == true){
            for (long long j = i*i; j < a; j += i){
                prime[j] = false;
            }
        }
    }
    for (long long i = n + 1; i < a; i++){
        if (prime[i] == true){
            for (long long j = 2; j < i/2; j++){
                if (prime[j] == true && prime[i - j] == true){
                    return i;
                }
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin>>n;
        cout<<test(n)<<endl;
    }
}