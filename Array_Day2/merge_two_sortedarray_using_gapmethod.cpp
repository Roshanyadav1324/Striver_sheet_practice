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
    int gap = ceil((floor)(n+m)/2);
    while(gap>0)
    {
        int i=0;
        int j=gap;
        while(j<(n+m))
        {
            if(j<n && arr[i]>arr[j])
            swap(arr[i],arr[j]);
            else if(j>=n && i<n   && arr[i]>arr2[j-n])
            swap(arr[i], arr2[j-n]);
            else if(j>=n && i>=n && arr2[i-n]>arr2[j-n])
            swap(arr2[i-n] , arr2[j-n]);

            j++;
            i++;
        }
        
        if(gap==1)
        gap=0;
        else
        {
            gap = ceil((floor)(gap)/2);
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
    