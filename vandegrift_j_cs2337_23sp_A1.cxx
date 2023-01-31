// Jacob Vandegrift
// 1120903

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int selectMenu() {
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

int main() {
    int EXIT = 0;
    int CHOICE = 1;

    while(CHOICE != EXIT) {
        CHOICE = selectMenu();
    }






    return 0;
}
