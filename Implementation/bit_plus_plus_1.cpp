// Link: https://codeforces.com/problemset/problem/282/A

#include<iostream>
using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s == "X++" || s == "++X")
            res++;
        else
            res--;
    }
    cout << res;
    return 0;
}