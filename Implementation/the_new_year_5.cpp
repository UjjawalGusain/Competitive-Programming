// Link: https://codeforces.com/problemset/problem/723/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    cout << (x[1] - x[0]) + (x[2] - x[1]) << endl;
    return 0;
}