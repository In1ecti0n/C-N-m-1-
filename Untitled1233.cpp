#include <bits/stdc++.h>
using namespace std;

vector<string> s1 = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> s2 = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> s3 = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
vector<string> s4 = {"thousand", "million", "billion", "trillion", "quadrillion"};

string numberToWords(int n) {
    if (n == 0){
        return "zero";
    }
    if (n < 10){
        return s1[n - 1];
    }
    if (n < 20){
        return s2[n - 11];
    }
    if (n < 100){
        if  ( n % 10 == 0){
            return s3[(n / 10) - 1];
        }else{
            return s3[n / 10 ] + " " + s1[n % 10];  
        }
    }
    if (n < 1000){
        if (n % 10 == 0){
            return s1[n / 100] + " hundred";
        }else{
            return s1[n / 100] + " hundred and" + numberToWords(n % 100);
        }
    }else{
        for (int i = 0; i < 17; i++){
            long long temp = pow(1000, i + 1);
            if ( n < temp){
                return numberToWords(n / temp) + " " + s4[i];
            }else{
                return numberToWords(n / temp) + " " + s4[i] + " and " + numberToWords( n % temp);
            }
        }

    }

}

int main(){
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<numberToWords(n)<<endl;
    }
}