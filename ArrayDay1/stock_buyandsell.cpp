#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
  int maxPro = 0;
  int minPrice = INT_MAX;
  for (int i = 0; i < n; i++) {
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }

    cout<<maxPro;
}