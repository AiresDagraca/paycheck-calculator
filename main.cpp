#include <iostream>

using namespace std;

int main() {

    int hours;
    int rate;
    int otHours;

    double x = 1.5;

   int otPay = rate * x;
    int regPay;


    cout << "How many hours did you work this week.\n";
    cin >> hours;
    cout << "What is your hourly pay rate.\n";
    cin >> rate;

    cout << "You made " << hours * rate << " dollars this week\n";

    cout << "Awesome.\n";
    cout << "How many overtime hours did your work.\n";
    cin >> otHours;

   cout << "Your overtime pay is " <<  otHours * otPay  << " and your reg pay is " << hours * rate;



    return 0;
}
