#include <bits/stdc++.h>
using namespace std;
string armstrong(int n)
{
	string number = to_string(n);

	n = number.length();
	long long output = 0;
	for (char i : number)
		output = output + (long)pow((i - '0'), n);

	if (output == stoll(number))
		return ("1");
	else
		return ("0");
}
int main(){
    int a; cin>>a;
    int mang[100];
    for (int i = 0; i < a; i++){
        cin>>mang[i];
    }
    for (int i = 0; i < a; i++){
        cout<<armstrong(mang[i])<<endl;
    }
    return 0;
}


