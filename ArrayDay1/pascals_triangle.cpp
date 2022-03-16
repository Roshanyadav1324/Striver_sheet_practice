#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l; //level
    cin>>l;
    vector<vector<int>> t(l); //triangle
    for(int i=0; i<l; i++)
    {
        t[i].resize(i+1);
        t[i][0] = t[i][i] = 1;

        for(int j=1; j<i; j++)
        {
            t[i][j] = t[i-1][j-1]+t[i-1][j];
        }
    }

    for(int i=0; i<l; i++)
    {
    for(int j=0; j<t[i].size(); j++)
    {
      cout<<t[i][j]<<" ";
    }
    cout<<endl;
    }
}