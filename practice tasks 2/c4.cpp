#include <iostream>
using namespace std;
int main ()
{
int a,b,c;
cin>>a>>b>>c;
if(a<5 && b<5 || a<5 && c<5|| b<5 && c<5){
    cout<<"Yahoo";
}
else{
    cout<<"NOPE";
}
return 0;
}