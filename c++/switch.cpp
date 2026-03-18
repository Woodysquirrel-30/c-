#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "enter a number between 1 to 7" << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "MONDAY";
        break;
    case 2:
        cout << "TUESDAY";
        break;
    case 3:
        cout << "WEDNESDAY";
        break;
    case 4:
        cout << "THURSDAY";
        break;
    case 5:
        cout << "FRIDAY";
        break;
    case 6:
        cout << "SATERDAY";
        break;
    case 7:
        cout << "SUNDAY";
        break;
    }
    return 0;
}
