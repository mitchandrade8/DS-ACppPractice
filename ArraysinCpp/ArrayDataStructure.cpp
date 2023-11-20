
#include <iostream>

using namespace std;

int main() {

    // total, average, inTwoYears

    // MARK: - First Version: Hard Coded:
    // float month1 = 100;
    // float month2 = 220;
    // float month3 = 300;
    // float month4 = 0;
    // float month5 = 200;
    // float month6 = 250;

    // Array 
    float monthsArray[12]; // = { 100, 220, 300, 0, 200, 250} ;

    // MARK: - Allow the user to enter the amount for each month:
    // cout << "Enter amount: ";
    // cin >> monthsArray[0];
    // cin >> monthsArray[1];
    // cin >> monthsArray[2];
    // cin >> monthsArray[3];
    // cin >> monthsArray[4];
    // cin >> monthsArray[5];

    // MARK: - Using a for loop:
    for (int i = 0; i <= 11; i++) {
        cout << "Please enter amount for month " << i+1 << ": ";
        cin >> monthsArray[i];
    }


    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5] 
        + monthsArray[6] + monthsArray[7] + monthsArray[8] + monthsArray[9] + monthsArray[10] + monthsArray[11] ;

    float average = total/12;

    float inTwoYears = average * 24;

    cout << "total = " << total << endl;
    cout << "average = " << average << endl;
    cout << "inTwoYears = " << inTwoYears << endl;
    
    return 0;

}
