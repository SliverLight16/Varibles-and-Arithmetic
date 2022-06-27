#include <iostream>
using namespace std;
 
int main() {
int downPayment;
int paymentPerMonth;
int numMonths;
int totalCost;
cout << "Enter a number: ";
cin >> downPayment;
cout << "Enter a number: ";
cin >> paymentPerMonth;
cout << "Enter a number: ";
cin >> numMonths;
totalCost = downPayment + (paymentPerMonth * numMonths);
cout << "Total cost: ";
cout << totalCost;
return 0;
}