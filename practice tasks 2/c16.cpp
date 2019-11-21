#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,a,b,c;
    cin>>n;
    a=n/100;
    b=n%100;
    c=n%10;
    int m,d,f,g;
    cin>>m;
    d=m/100;
    f=m%100;
    g=m%10;
    cout<<a<<b<<d<<f;
}
