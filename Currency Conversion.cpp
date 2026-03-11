//Tromaine Toy
//Currency Conversion
//Converts any given number of US Dollars greater than 0 and converts it into one of four different currencies

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int dollars;
    int choice;
    double exchangeRate = 0;
    double convertedAmount;
    string currencyName;

    //Get user input for US Dollars
    cout << "Enter the number of American dollars to convert: ";
    cin >> dollars;

    if (dollars < 0) {
        cout << "You entered " << dollars << " American dollars. Dollars can't be less than or equal to zero." << endl;
        return 0; // Terminate program if invalid
    }

    // 2. Display Menu and get the choice from the user of which currency to convert to
    cout << "\n--- Currency Conversion Menu ---" << endl;
    cout << "1. Euro" << endl;
    cout << "2. Japanese yen" << endl;
    cout << "3. Mexican peso" << endl;
    cout << "4. British pound" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // 3. Switch structure for currency selection
    switch (choice) {
    case 1:
        exchangeRate = 0.757;
        currencyName = "Euro";
        break;
    case 2:
        exchangeRate = 80.92;
        currencyName = "Japanese yen";
        break;
    case 3:
        exchangeRate = 13.1544;
        currencyName = "Mexican peso";
        break;
    case 4:
        exchangeRate = .6178;
        currencyName = "British pounds";
        break;
    default:
        cout << "Invalid menu choice." << endl;
        return 0;
    }

    // 4. Calculation and Formatted Output
    convertedAmount = dollars * exchangeRate;

    // Formatting to 3 decimal places
    cout << fixed << setprecision(3);
    cout << "\n" << dollars << " American dollars equals " << convertedAmount << " " << currencyName << "." << endl;

    return 0;
}
