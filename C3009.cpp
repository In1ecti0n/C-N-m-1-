#include <bits/stdc++.h>
using namespace std;
// Giai thua so lon
// thay vi chia cho 10 thi chia cho 100 thi nhanh hon
void giaithua(long long n){
    if (n == 0 || n == 1){
        cout<<1;
        return;
    }
    long long arr[100000];
    arr[0] = 1;
    long long kichthuoc = 1;
    long long phandu = 0;
    for (long long i = 2; i <= n; i++){
        for (long long j = 0; j < kichthuoc; j++){
            long long ghivao = (arr[j] * i) + phandu;
            arr[j] = ghivao % 10;
            phandu = ghivao / 10;
        }
        while (phandu > 0){
            arr[kichthuoc] = phandu % 10;
            kichthuoc++;
            phandu /= 10;
        }
    }
    for (long long i = kichthuoc - 1; i >= 0; i--){
        cout<<arr[i];
    }
}


int main(){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        giaithua(n);  
        cout<<endl;
    }
}