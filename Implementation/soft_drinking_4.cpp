// Link: https://codeforces.com/problemset/problem/151/A

#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min((k * l)/ nl, min(c * d, p / np))/n << endl;
    return 0;
}