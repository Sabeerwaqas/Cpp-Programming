#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{

    // Learning some methods of <iomanip>

    int width = 10;

    // Before setw()

    // cout << "Before using setw()" << endl;
    // cout << "Sabeer" << "Waqas" << endl;
    // cout << "Nameer" << "Waqas" << endl;
    // cout << "Faiez" << "Waqas" << endl;
    // cout << "Farzan" << "Waqas" << endl;
    // cout << "" << endl;

    // After setw()

    // cout << "After using setw()" << endl;
    // cout << setw(width) << "Sabeer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Nameer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Faiez" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Farzan" << setw(width) << "Waqas" << endl;

    // cout << "Using setw() with left" << endl;

    // cout << left << endl;

    // cout << setw(width) << "Sabeer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Nameer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Faiez" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Farzan" << setw(width) << "Waqas" << endl;

    // cout << "Using setw() with right" << endl;

    // cout << right << endl;

    // cout << setw(width) << "Sabeer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Nameer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Faiez" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Farzan" << setw(width) << "Waqas" << endl;

    // Using setfill()

    // cout << setfill("-");

    // cout << setw(width) << "Sabeer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Nameer" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Faiez" << setw(width) << "Waqas" << endl;
    // cout << setw(width) << "Farzan" << setw(width) << "Waqas" << endl;

    // Using showpos;

    // int positiveOrNot = 5;
    // int negativeOrNot = -6;

    // cout << noshowpos << endl;

    // cout << "Without show pos" << endl;

    // cout << positiveOrNot << endl;
    // cout << negativeOrNot << endl;

    // Using showpos

    //  cout << showpos << endl;

    // cout << "With show pos" << endl;

    // cout << positiveOrNot << endl;
    // cout << negativeOrNot << endl;

    // int base_1 = 2;
    // int base_2 = 3;
    // int base_3 = 4;

    // cout << hex << base_1 << endl;
    // cout << dec << base_2 << endl;
    // cout << oct << base_3 << endl;

    /*

    Following are some other function of iomanip library

    showpoint


    */

    cout << "Using numeric limits" << endl;

    cout << "Limits short: " << numeric_limits<short>::max() << endl;
    cout << "Limits int: " << numeric_limits<int>::max() << endl;

    return 0;
}