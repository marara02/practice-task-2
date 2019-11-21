# include <iostream>
using namespace std;
int main ()
{
	int n;
	float pr = 10, sum = 10;
	cin >> n;
	for(int i = 0; i < 9; i++)
	{
		pr = pr + (pr * 0.1);
		sum = sum + pr;
	}
	cout << sum;
	return 0;
}
