#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+c==b || a+b==c || b+c==a){
		cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}
