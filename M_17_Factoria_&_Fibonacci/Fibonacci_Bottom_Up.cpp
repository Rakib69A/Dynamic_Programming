#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    a[0] = 0;
    a[1] = 1;
    long long ans;
    for(int i=2;i<=n;i++){
        a[i] = a[i-1] + a[i-2];
    }
    cout<<a[n]<<endl;
    return 0;
}