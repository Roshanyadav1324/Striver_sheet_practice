#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum = sum+arr[j];
            if(sum>max)
            {
                max=sum;
                l=i;
                r=j;
            }
        }
    }

    cout<<"Index are "<<l<<" "<<r<<endl;
    cout<<"Maximum Sum = "<<max;

}