#include <bits/stdc++.h>
using namespace std;

int a = pow(10, 12);

void duyetprime(int a, bool isprime[]){
	for (int i = 0; i < a; i++){
		isprime[i] = true;
	}
	isprime[0] = false;
	isprime[1] = false;
	for (int i = 2; i < sqrt(a); i++){
		if (isprime[i] == true){
			for (int j = i * i; j < a; j += i ){
				isprime[j] = false;
			}
		}
	}
}

int test(long long n, bool isprime[]){
	int a = pow(10, 12);
	for (int i = n + 1; i < a; i++){
		if(isprime[i] == true){
			return i;
		}
	}
}



int main(){
	int t; cin >> t;
	while(t--){
		long long n;
		bool isprime[a];
		cin>> n;
		test(n, isprime);
		cout<<endl;
	}
}