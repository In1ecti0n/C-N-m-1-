#include<bits/stdc++.h>

using namespace std;

void DemChuSo(int a, int b){
	int dem[100];
	if (a > b) swap(a, b);
	memset(dem, 0, 100);
	for(int i = a; i <= b; i++){
		if (i < 10) dem[i]++;
		else{
			int so = i;
			while(so != 0){
				int so_cuoi = so % 10;
				dem[so_cuoi]++;
				so /= 10;
			}
		}
	}
	for (int i = 0; i < 10; i++) cout << dem[i] << " ";
	cout << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		DemChuSo(a, b);
	}
	return 0;
}