#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool test (ll n){
    ll sum = 1;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i ==0){
            if (i != sqrt(n)){
                sum = sum + i +n/i;
            }else{
                sum = sum + i;
            }
        }
    }
    return sum == n;
}


int main(){
    int a, i, arr[100]; cin>>a;
    while(a--){
        cin>>arr[i];
		i++;
    }
    for (int c = 0; c < i; c++){
		if (test(arr[c])){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
	}

    return 0;
}