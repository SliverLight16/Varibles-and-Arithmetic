#include <iostream>
using namespace std;
 
int main() {
   int milesTraveled;
   int hoursToDrive;
   cout << "Enter a number: ";
   cin >> milesTraveled;
   hoursToDrive = (milesTraveled / 60);
   cout << hoursToDrive;
   cout << ".0";   
   return 0;
}
