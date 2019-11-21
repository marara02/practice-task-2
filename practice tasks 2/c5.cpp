#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n;
int a[3];
int count=0;
for(int i=0;i<=n;i++){
    cin>>a[i];
}
for (int i=0;i<=n;i++){
if(a[i]>0){
    count++;
    cout<<count;
}
}
}