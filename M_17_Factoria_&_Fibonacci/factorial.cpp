#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0){
        return 1;
    }
    int fact = fun(n-1);
    return fact * n;  
}

int main()
{
    int n; cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}