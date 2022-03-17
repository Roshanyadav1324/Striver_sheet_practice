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

    int slow = arr[0];
    int fast = arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(slow!=fast);
    fast = arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    cout<<slow;
}