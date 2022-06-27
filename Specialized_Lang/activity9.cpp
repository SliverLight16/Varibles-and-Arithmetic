#include <iostream>
using namespace std;

int main() {
    int salaryPerYear; 
    int daysPerYear;
    int salaryPerDay;

    cout << "Type a number: ";
    cin >> salaryPerYear >> daysPerYear;

    //If daysPerYear is 0, then divide by 0 causes program termination
    salaryPerDay = salaryPerYear / daysPerYear;

    cout << "Salary per day is " << salaryPerDay;
    return 0;
}