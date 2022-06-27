#include <iostream>
using namespace std;

int main() {
    double milesTraveled;
    double hoursToFly;
    double hoursToDrive;

    cout << "Type a number: ";
    cin >> milesTraveled;

    //Plane flies 500 mph
    hoursToFly = milesTraveled / 500.0;

    //Car drives 60 MPH
    hoursToDrive = milesTraveled / 60;

    cout << milesTraveled << " miles would take" << endl << hoursToFly << " hours to fly or " << endl << hoursToDrive << " hours to drive. \n";
    return 0;
}