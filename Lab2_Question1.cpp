#include <iostream>
using namespace std;

int main() {
    int feet = 0, inches = 0;
    int total_inches = 0;
    int inches_over = 0;
    int male_weight = 0;
    int female_weight = 0;

    cout << "Welcome to Ideal Weight Calculation Program\n\n";

    cout << "Please enter your height, feet followed by inches (eg; 5 3): ";
    cin >> feet >> inches;

    total_inches = feet * 12 + inches;
    inches_over = total_inches - 60;

    female_weight = 100 + 5 * inches_over;
    male_weight   = 106 + 6 * inches_over;

    cout << "\nIf you are a male, your ideal weight should be "
         << male_weight << " pounds.\n\n";

    cout << "If you are a female, your ideal weight should be "
         << female_weight << " pounds.\n";

    return 0;
}