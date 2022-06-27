#include <iostream>
using namespace std;
 
int main() {
   double gasVolume;
   double oilVolume;
   double mixRatio;

   cout << "Enter a number: ";
   cin >> gasVolume;

   cout << "Enter a number: ";
   cin >> oilVolume;

   mixRatio = gasVolume / oilVolume;

   cout << "Gas to oil mix ratio is ";
   cout << mixRatio;
   cout << ":1\n";
   return 0;
}