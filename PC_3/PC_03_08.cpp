/* Write a program that asks the user for the number of males and the number of females registered in a class. 
The program should compute and report what percentage of the students are males and what percentage are females. 
Display the output with two decimal points. 
If you remembered to convert the decimal result of each calculation to percent form when you displayed it, 
the two values should add up to 100.00 percent. */

#include "iomanip"
#include "iostream"
using namespace std;

int main()
{
    // VARIABLES
    double female, male, total, fePerc, mPerc;
    
    // PROMPT USER TO INPUT # OF FEMALES AND MALES REGISTERED
    cout << "Please enter the number of female students: ";
    cin >> female;
    cout << "Please enter the number of male students: ";
    cin >> male;
    
    // COMPUTE % OF MALE VS. FEMALE
    total = female + male;
    fePerc = (female / total) * 100;
    mPerc = (male / total) * 100;
    
    // DISPLAY RESULTS
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe class consists of " << fePerc << "% female, and " << mPerc << "% male" << endl;
    cout << "\n";
}
