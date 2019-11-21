#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int n=5;
    int a[5],mn,mx,j,k;
    mn=10000;
    mx=-10000;
    for(int i=0;i<=5;i++){
        cin>>a[i];
    }
    for(int i=0;i<=5;i++){
    if(a[i]>mx){
        mx=a[i];
        j=i;
    }
    if(a[i]<mn){
        mn=a[i];
        k=i;
    }}
    swap(a[j],a[k]);
    for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";
    }
}
  