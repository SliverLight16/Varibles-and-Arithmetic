#include <iostream>
using namespace std;

int main() {
    int userAgeYears;
    int userAgeDays;

    cout << "Type a number: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;

    cout << "You are " << userAgeDays << " days old." << endl;
    return 0;
}