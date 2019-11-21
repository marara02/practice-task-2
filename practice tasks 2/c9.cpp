#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cin>>a;
    b=(a-c*1000)/100;
    d=(a-c*1000-b*100)/10;
    e=(a-c*1000-b*100-d*10);
    if(c>b && b>d && d>e) cout<<"NO";
    else cout<<"YES";
}