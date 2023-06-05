#include <iostream>

using namespace std;
int hours;
int rate;
int otHours;

int otPay;
int regPay;

int main() {

    cout << "How many hours did you work this week.\n";
    cin >> hours;
    cout << "What is your hourly rate.\n";
    cin >> rate;

    cout << "You made " << hours * rate << " dollars this week\n";

    cout << "Awesome.\n";
    cout << "How many overtime hours did your work.\n";
    cin >> otHours;

   cout << "Your overtime pay is " <<  rate  << "and your reg pay is " << hours * rate;



    return 0;
}
