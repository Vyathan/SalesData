// Matt Brundage II
// 12/6/21
// SalesData.cpp

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototype
void displayArray(int salesTotals[4][4]);

int main()
{
    int sales[4][4];

    // Request input and store data
    for (int division = 0; division < 4; division += 1)
        for (int quarter = 0; quarter < 4; quarter += 1)
        {
            cout << "Division " << division + 1 << ", Quarter " << quarter + 1 << " Sales: ";
            cin >> sales[division][quarter];
        } // End for
        // End for

    // Display Array
    displayArray(sales);
    return 0;
} // End of main function

//*****Function Definitions*****
void displayArray(int salesTotals[4][4])
{
    cout << endl << "Array contents: " << endl;
    for (int division = 0; division < 4; division += 1)
    {
        cout << "Division " << division + 1 << ": " << endl;
        for (int quarter = 0; quarter < 4; quarter += 1)
            cout << "   Quarter " << quarter + 1 << ": " << salesTotals[division][quarter] << endl;
        // End for
    } // End for
} // End displayArray function