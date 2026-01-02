#include <iostream>
using namespace std;
int main()
{
    double amount;
    int choice;
    const double USD_TO_PKR = 280.0;
    const double USD_TO_INR = 83.5;
    const double USD_TO_EUR = 0.92;

    cout << "Enter amount in USD: ";
    cin >> amount;

    cout << "\nChoose target currency:\n";
    cout << "1. Pakistani Rupee (PKR)\n";
    cout << "2. Indian Rupee (INR)\n";
    cout << "3. Euro (EUR)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
	 {
        case 1:
            cout << amount << " USD = " << amount * USD_TO_PKR << " PKR\n";
            break;
        case 2:
            cout << amount << " USD = " << amount * USD_TO_INR << " INR\n";
            break;
        case 3:
            cout << amount << " USD = " << amount * USD_TO_EUR << " EUR\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
   
}
