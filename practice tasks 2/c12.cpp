#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int n,a,b,c,d,e,f;
cin>>n;
a=n/10000;
b=n/1000%10;
c=n/100%10;
d=n%100/10;
f=n%10;
if(a%2!=0){
    a=0;
}
if(b%2!=0){
b=0;
}
if(c%2!=0){
    c=0;
}
    if(d%2!=0){
        d=0;
    }
    if(f%2!=0){
        f=0;
    }
    cout<<a<<b<<c<<d<<f;
}
