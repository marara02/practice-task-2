#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int x;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        a=a+1/(cos(pow(x,i)));
    }
  cout<<a;
}
