#include <iostream>
using namespace std;
int main ()
{
int n=4;
int a[4];
int sim=1;
for(int i=1;i<=4;i++){
    cin>>a[i];
}
for(int i=1;i<=4;i++){
    if(a[1]==a[4] && a[2]==a[3]){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
}