#include <iostream>
using namespace std;
int main ()
{
 int a,x,y,z;
 cin>>a;
 x=a/100;
 y=a/10%10;
 z=a%10;
 int b,c,d,m;
 cin>>b;
 c=b/100;
 d=b/10%10;
 m=b%10;
 cout<<x<<y<<z<<c<<d<<m;
 return 0;
}