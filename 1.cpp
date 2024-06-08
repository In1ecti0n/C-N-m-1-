#include <bits/stdc++.h>
using namespace std;

vector<int>x;
int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex) {
    if (x[lowIndex] != lowIndex){
        return lowIndex;
    }
    return (x, lowIndex + 1, highIndex);

}


int main(){
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        if (s.empty()){
            cout<<0;
            continue;
        }
        string temp;
        istringstream ss(s);
        while(getline(ss, temp, ',')){
            x.push_back(stoi(temp));
        }
        cout<<findSmallestMissing(x, 0, x[x.size() - 1])<<endl;
        x.clear();
    }
}