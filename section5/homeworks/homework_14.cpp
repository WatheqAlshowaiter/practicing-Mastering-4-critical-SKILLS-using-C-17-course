#include <iostream>
using namespace std;

int main()
{
    //     Assume a year is 12 months, but each month is 30 days
    // ○ That is a year has 12 * 30 = 360 days
    // ● Read an integer: whole number of days of someone age. Print 3 numbers
    //  ○ Total years total months
    // ● Inputs ⇒ Outputs
    // remaining days
    // each 360 days a year
    // each 30 days a month
    // just days infant!
    // 391 = 360 + 30 + 1 = 1 year, 1 month, 1 day 61 = 2*30 + 1
    // 200 = 30*6 + 20
    // 1000 = 2*360 + 9*30 + 10
    int allDays;
    cin >> allDays;

    int years = allDays / 360;
    allDays = allDays % 360;

    int months = allDays / 30;
    allDays = allDays % 30;

    // int months = 12 / allDays;
    // allDays %= allDays;

    // int days = 30 / allDays;

    cout << years << " " << months << " " << allDays;

    return 0;
}
