
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    int arr[50];
    int p = 0;
    for (int i = 0; i < a; i ++){
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++){
        int temp = arr[i];
        while (arr[i]> 0){
            int rem = arr[i] % 10;
            p = (p) + (rem*rem*rem);
            arr[i] /= 10;
        }
        if (temp == p){
            cout<<1<<endl;
        }else {
            cout<<0<<endl;
        }
    }
    return 0;
}
