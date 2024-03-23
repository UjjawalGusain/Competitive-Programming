#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 4, 3, 2, 1, 0};
    long long x, res = 0, i = 0, tens = 1;
    cin >> x;
    if(x == 9)
        res = 9, x=0;
    while(x)
    {
        int digit = x%10;
        if(x/10 == 0 && digit == 9)
            res = 9 * tens + res;
        res = arr[digit] * tens + res;
        i++;
        x /= 10;
        tens *= 10;
    }

    cout << res;
    return 0;
}