#include<iostream>
using namespace std;

int main()
{
	int i,n;
	float sum=0;
	cin>>n;

	for(i=1;i<=n;i++)
		sum += 1.0/i;

	cout<<"Sum : "<<sum;

	
	return 0;
}
