#include <bits/stdc++.h>
using namespace std;

bool primenumber (int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i ==0){
            return false; 
        }
    }
    return true;
}


int uocso(int n){
    int temp;
    for (int i = n -1; i > 0; i--){
        if (n % i == 0 && primenumber(i)){
            temp = i;
            break;
        }
    }
    cout<<temp;
    return 0;
}

int main (){
    int n; cin>>n;
    uocso(n);
    return 0;
}