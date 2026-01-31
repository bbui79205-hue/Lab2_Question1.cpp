#include <iostream>
using namespace std;

int main() {
  int feet = 0, inches = 0;
  int total_inches = 0;
  int inches_over = 0;
  int male_weight = 0;
  int female_weight = 0;

     cout <<"Welcome to Ideal Weight Calculator Program\n\n";
     cout <<"Please enter height, feet followed by inches (eg: 5 3): ";
     cin >> feet >> inches;

     total_inches = feet * 12 + inches;
     inches_over = total_inches - 60;

     female_weight = 100 + inches_over * 5;
     male_weight   = 106 + inches_over * 6;

     cout << "\nIf you are a male, your ideal weight is: "
          << male_weight << " pounds\n\n";
     cout << "If you are a female, your ideal weight is: "
          << female_weight << " pounds.\n";

     return 0;
}