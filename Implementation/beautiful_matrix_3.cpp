// Link: https://codeforces.com/problemset/problem/263/A

#include<iostream>
using namespace std;

int main()
{
    int a, row, col;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin >> a;
            if(a == 1)
                row = i, col = j;
        }
    }
    cout << abs(row - 2) + abs(col - 2) << endl;
    return 0;
}