// Link: https://codeforces.com/problemset/problem/486/B

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n, 0));
    vector<vector<int>> checkMat(m, vector<int>(n, 1));
    unordered_set<int> visRow, visCol;

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            cin >> mat[i][j];
    }

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(mat[i][j] == 0)
            {
                if(visRow.find(i) == visRow.end())
                {
                    visRow.insert(i);
                    for(int col = 0; col < n; col++)
                        checkMat[i][col] = 0;
                }
                if(visCol.find(j) == visCol.end())
                {
                    visCol.insert(j);
                    for(int row = 0; row < m; row++)
                        checkMat[row][j] = 0;
                }
            }
        }
    }

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(mat[i][j] == 0)
            {
                bool condition = false;
                for(int row = 0; row < m; row++)
                {
                    if(checkMat[row][j] == 1)
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                for(int col = 0; col < n; col++)
                {
                    if(checkMat[i][col] == 1)
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
            }
            else
            {
                bool condition = false;
                for(int row = 0; row < m; row++)
                    if(checkMat[row][j] == 1) condition = true;
                        
                for(int col = 0; col < n; col++)
                    if(checkMat[i][col] == 1) condition = true;
                        
                if(!condition)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            cout << checkMat[i][j] << " ";
        cout << endl;
    }

}
