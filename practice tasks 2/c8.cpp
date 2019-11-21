#include <iostream>
using namespace std;
int main ()
{
    int day1,month1,year1;
    int day2,month2,year2;
    cin>>day1>>month1>>year1;
    cin>>day2>>month2>>year2;
    if(year1>year2) cout<<"YEP";
    else if (month1>month2) cout<<"YEP";
    else if (day1>day2) cout<<"YEP";
    else{
        cout<<"NOPE";
    }
}