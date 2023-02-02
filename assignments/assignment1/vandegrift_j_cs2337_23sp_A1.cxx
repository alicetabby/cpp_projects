// Jacob Vandegrift
// 1120903

#include <iostream>
#include <iomanip>
using namespace std;

const double JPY_RATE = 130.43;
const double MXN_RATE = 18.77;
const double INR_RATE = 81.59;
const double GBP_RATE = 0.81;

int selection_menu() {
    int CHOICE;
    cout << "Available currencies to convert from US Dollar (USD)" << endl;
    cout << "  [1] Japanese Yen (JPY)" << endl;
    cout << "  [2] Mexican Peso (MXN)" << endl;
    cout << "  [3] Indian Rupee (INR)" << endl;
    cout << "  [4] British Pound Steriling (GBP)" << endl;
    cout << "  [0] Quit" << endl;
    cout << "Select an option (0 to 4): " << ends;
    cin >> CHOICE;
    return CHOICE;
}

double amount_entry() {
    double AMOUNT;

    cout << "Enter USD amount: " << ends;
    cin >> AMOUNT;

    return AMOUNT;
}

void total_calculator(double AMOUNT) {
    if(AMOUNT <= 100)
        AMOUNT += 4.99;
    else if(AMOUNT <= 1000)
        AMOUNT += 8.99;
    else
        AMOUNT += 17.99;

    cout << fixed << setprecision(2);
    cout << "Amount due: " << AMOUNT << " USD" << endl;
}

void conversion_calculator(int CHOICE, double AMOUNT) {
    const int JPY = 1;
    const int MXN = 2;
    const int INR = 3;
    const int GBP = 4;
    double AMOUNT_RECEIVED;
    
    cout << fixed << setprecision(2);
    if(CHOICE == JPY) {
        AMOUNT_RECEIVED = AMOUNT * JPY_RATE;
        cout << "Amount received: " << AMOUNT_RECEIVED << " JPY" << endl;
    }
    else if(CHOICE == MXN) {
        AMOUNT_RECEIVED = AMOUNT * MXN_RATE;
        cout << "Amount received: " << AMOUNT_RECEIVED << " MXN" << endl;
    }
    else if(CHOICE == INR) {
        AMOUNT_RECEIVED = AMOUNT * INR_RATE;
        cout << "Amount received: " << AMOUNT_RECEIVED << " INR" << endl;
    }
    else if(CHOICE == GBP) {
        AMOUNT_RECEIVED = AMOUNT * GBP_RATE;
        cout << "Amount received: " << AMOUNT_RECEIVED << " GBP" << endl;
    }
}

int main() {
    int EXIT = 0;
    int CHOICE = 1;
    double AMOUNT;

    while(CHOICE != EXIT) {
        CHOICE = selection_menu();
        if(CHOICE == EXIT)
            return 0;
        AMOUNT = amount_entry();
        cout << endl;
        total_calculator(AMOUNT);
        conversion_calculator(CHOICE, AMOUNT);
        cout << endl;
    }

    return 0;
}
