#include <iostream>

using namespace std;

int main() {

   int regWorkHours = 40;
   double yourPayRate;
  // double overtimePayRate = 1.5 * yourPayRate;
   double totalHours;

   cout << "How many hours did you work this week?\n";
   cin >> totalHours;
   cout << "What is your hourly pay rate?\n";
   cin >> yourPayRate;

    if (totalHours <= regWorkHours){
    cout << "Your total pay is " << totalHours * yourPayRate;

    }
 else {
     double overTimeHours = regWorkHours - totalHours;
     double regSum = regWorkHours * yourPayRate;
     double otSum = -1.5 * yourPayRate * overTimeHours;

     cout << "Your reg pay is " << regSum << " and your overtime pay is " << otSum  << "\n";
     cout << "For a grand total of " << regSum + otSum;
 }



    return 0;
}
