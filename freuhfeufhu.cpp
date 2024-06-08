 #include <bits/stdc++.h>
using namespace std;

string test(queue<string> master, int k){
    string x;
    stack<string> temp;
    queue<string> slave;
    for (int i = 0; i < k; i++){
        temp.push(master.front());
        master.pop();
    }
    /*
    while(!master.empty() && k != 0){
        
        k--;
    }
    */
    while(!temp.empty()){
        slave.push(temp.top());
        temp.pop();
    }
    while(!master.empty()){
        slave.push(master.front());
        master.pop();
    }
    while(!slave.empty()){
        x = slave.front() + ',' + x;
        slave.pop();
    }
    x.pop_back();
    return x;
}

int main(){
    int t; cin >> t;
    while(t--){
        queue<string> master;
        int k;
        string s, temp;
        cin>>s;
        cin>>k;
        istringstream ss(s);
        while(getline(ss, temp, ',' )){
            master.push(temp);
        }
        cout<< test(master, k)<<endl;
    }
}