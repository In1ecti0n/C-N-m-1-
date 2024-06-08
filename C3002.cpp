#include <bits/stdc++.h>
using namespace std;

vector<int>x;
int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex) {
    int a = lowIndex;
    int b = highIndex;
    if (x[a] != a){
        return a;
    }
    return findSmallestMissing(x, a + 1, b);

}


int main(){
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        if (s == " "){
            cout<<'0'<<endl;
        }else{
            string temp;
            istringstream ss(s);
            while(getline(ss, temp, ',')){
                x.push_back(stoi(temp));
            }
            cout<<findSmallestMissing(x, 0, x[x.size() - 1])<<endl;
            x.clear();
        }
    }
}


