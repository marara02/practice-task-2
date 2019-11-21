#include <iostream>
using namespace std;
int main ()
{
    int n,m=5;
    cin>>n;
    int a[100][8];
    for(int i=0;i<n;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<8;j++){
            a[i][j]='0';
        }
            cout<<'0'<<" ";
    }
}