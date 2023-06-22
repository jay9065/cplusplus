#include <iostream>
using namespace std; 
int main()
{
    float days, years, weeks;

    days = 365; 
    years = days/365; 
    weeks = days/7;
    days = days;

    cout<<"\nYears: "<< years;
    cout<<"\nWeeks: "<<weeks;
    cout<<"\nDays:  "<<days;

    return 0;
}