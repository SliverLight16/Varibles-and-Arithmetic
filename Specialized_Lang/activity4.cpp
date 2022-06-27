#include <iostream>
using namespace std;
 
int main() {
int userAgeYears;
int userAgeDays;
int userAgeMinutes;
cout << "Enter a number: ";
cin >> userAgeYears;
userAgeDays = userAgeYears * 365;
userAgeDays = userAgeDays + (userAgeYears / 4);
cout << "You are ";
cout << userAgeDays;
cout << " days old.\n";
userAgeMinutes = userAgeDays * 24 * 60;
cout << "You are ";
cout << userAgeMinutes;
cout << " minutes old. \n";
 
   return 0;
}