#include <iostream>
#include<math.h>
using namespace std;
bool check(int n) {
    while (n > 0) {
        int temp = n % 10;
        if (temp % 2 == 1)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    do {
        cout << "Nhap vao gia tri(n>=0): ";
        cin >> n;
    } while (n < 0);
    if (check(n) == true)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}