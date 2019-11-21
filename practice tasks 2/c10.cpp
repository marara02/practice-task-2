#include <iostream>
using namespace std;
int main()
{
    int n, m, a[10];
    n = 3;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1, j = 0; j < i; i--, j++){
        int r = a[i];
        a[i] = a[j];
        a[j] = r;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}