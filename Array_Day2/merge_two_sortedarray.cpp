#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    int arr[n], arr2[m];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr2[0])
        {
            swap(arr[i],arr2[0]);
            sort(arr2 , arr2+m);
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}