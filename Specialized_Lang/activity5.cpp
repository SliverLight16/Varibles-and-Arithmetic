#include <iostream>
using namespace std;

int main() {
    int userAgeYears;
    int userAgeDays;
    int userAgeMinutes;
    int avgBeatsPerMinute;
    int totalHeartbeats;

    cout << "Type a number: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;
    userAgeDays = userAgeDays + (userAgeYears/4);

    cout << "You are " << userAgeDays << " days old.\n";

    userAgeMinutes = userAgeDays * 24 * 60;

    cout << "You are " << userAgeMinutes << " minutes old.\n";

    avgBeatsPerMinute = 72;
    totalHeartbeats = avgBeatsPerMinute * userAgeMinutes;

    cout << "Your heart has beat " << totalHeartbeats << " times.";
    return 0;

}