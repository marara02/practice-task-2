#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int day,month,year;
    cin>>day>>month>>year;
    if(day>30 || month>12){
        cout<<day<<" "<<month<<" "<<year<<" "<<"-NO";
    }
    if(month==2 && day>28){
        cout<<day<<" "<<month<<" "<<year<<" "<<"-NO";
    }
    if(day<=30 && month<=12){
    cout<<day<<" "<<month<<" "<<year<<" "<<"-YES";
    }
    return 0;
}