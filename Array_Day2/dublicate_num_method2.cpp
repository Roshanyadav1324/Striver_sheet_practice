#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x; 
        cin>>x;
        arr.push_back(x);
    }

    vector<int> dumy(n,0);
    for(int i=0; i<n; i++)
    {
        dumy[arr[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(dumy[i]>1)
        cout<<i<<endl;
    }
}