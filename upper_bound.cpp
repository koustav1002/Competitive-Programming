#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x;cin>>x;
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)>>1;
        if(a[mid]<=x) low=mid+1;
        else high=mid;
    }
    if(a[high]>x) cout<<a[high]<<endl;
    else cout<<-1<<endl;
    return 0;
}
