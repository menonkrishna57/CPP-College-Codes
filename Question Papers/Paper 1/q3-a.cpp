#include<iostream>
using namespace std;

// Define a struct to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    // Create an instance of Time struct for day 1
    Time day1;
    day1.hours = 8;
    day1.minutes = 0;
    day1.seconds = 0;

    // Create an instance of Time struct for day 2
    Time day2;
    // Check if day 1 time is more than 7hr 30 min
    if (day1.hours > 7 || (day1.hours == 7 && day1.minutes >= 30)) {
        // Set day 2 time to 8hrs
        day2.hours = 8;
        day2.minutes = 0;
        day2.seconds = 0;
    } else {
        // Set day 2 time to 0hrs
        day2.hours = 0;
        day2.minutes = 0;
        day2.seconds = 0;
    }

    // Print the time for day 1 and day 2
    cout << "Day 1: " << day1.hours << ":" << day1.minutes  << endl;
    cout << "Day 2: " << day2.hours << ":" << day2.minutes << endl;

    // Rest of the code...

    return 0;
}
