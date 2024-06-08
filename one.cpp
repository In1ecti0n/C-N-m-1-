#include<bits/stdc++.h>
using namespace std;


int minSteps(int n, int dp[]){
    if(n==1)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int res = minSteps(n-1, dp);
    if(n%2==0)
        res = min(res, minSteps(n/2, dp));
    if(n%3==0)
        res = min(res, minSteps(n/3, dp));
    dp[n] = 1 + res;
    
    return dp[n];
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dp[n + 1];
        for (int i = 0;  i <= n; i++){
            dp[i] = -1;
        }
        cout<<minSteps(n, dp)<<endl;
    }
}