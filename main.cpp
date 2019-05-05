/*
Author: Ford Tennis
Date: 7 July 2018
Sources: https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
Sources: http://berndt-schwerdtfeger.de/wp-content/uploads/pdf/cal.pdf
Description: For any year entered, displays day of week that Jan 1 occurs.
*/

#include <iostream>                 

using namespace std;                

int main ()			   
{
    int year, day = 0;                       
 
    cout << "What year?: ";   			                    
    cin >> year;                                                    
    day = ((5*(year%4) + 4*(year%100) + 6*(year%400)) % 7);         
    cout << "New Year's Day of " << year << " fell on day " << day << " of the week. " << endl; 
    return 0;
}
