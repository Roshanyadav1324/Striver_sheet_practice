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

    vector<int> dumy(n+1,0);
    for(int i=0; i<n; i++)
    {
        dumy[arr[i]]++;
    }
    int a ; int b;
    for(int i=1; i<=n; i++)
    {
        if(dumy[i]>1)
        a = i;
        if(dumy[i]==0)
        b = i;
    }
    cout<<a<<" "<<b;
}