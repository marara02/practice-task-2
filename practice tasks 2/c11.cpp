#include <iostream>
using namespace std;
int main ()
{
int a[4];
int count=0;
for(int i=0;i<=4;i++){
    cin>>a[i];
}
for(int i=0;i<=4;i++){
    if(a[i]==a[i+1] || a[i]==a[i+2] || a[i+1]==a[i+2]){
        count++;
    }
}
        cout<<count<<endl;
}
