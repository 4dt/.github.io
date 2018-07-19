# This is the New Year's Day Calendar program (NydCal.cpp) for CS161 assigned in week 2 as "Assignment 2"
This program calculates and displays on which day of the week (displayed as "day n", where n = 0,...,6) the 1st of January in a given year falls. It then outputs a fixed set of dialog sentences with the user's input for those variables.
Author: Ford Tennis
Date: 7 July 2018
Sources: https://www.free-online-calculator-use.com/leap-year-calculator.html (For verification)
Sources: https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
Sources: http://berndt-schwerdtfeger.de/wp-content/uploads/pdf/cal.pdf

#include <iostream>                 // Standard I/O preprocessor directive
#include <string>		    // Compound data type directive

using namespace std;                // ANSI C++ 1998 standard library identifier container

int main ()			    // Global function heading for program entry point
{
    int year;                       // Variable declarations for user input
    int day;
    cout << "Welcome to Ford's New Year's Day Calculator " << endl; // Welcome header
    cout << "What year?: ";   			                    // Initial user input prompt
    cin >> year;                                                    
    day = ((5*(year%4) + 4*(year%100) + 6*(year%400)) % 7);         // Variable assignment to formula
    cout << "New Year's Day of " << year << " fell on day " << day << " of the week. " << endl; // Output statement with result
    cout << "Thank you for using Ford's New Year's Day Calculator " << endl;                    // End of program footer
    return 0;
}
```
