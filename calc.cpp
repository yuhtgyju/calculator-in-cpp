#include <iostream>
#include <math.h>

using namespace std;

double Num1;
double Num2;
int operation;
bool Exit;

int main() {
    while(true) {
        cout << "Basic Calculator\n";
        cout << "\nPick Num1\n*_>";
        cin >> Num1;
        cout << "\n\nPick Num2\n*_>";
        cin >> Num2;

        cout << "\n\nPick operation. (1 = +, 2 = -, 3 = *, 4 = /, 5 = ^)\n*_>";
        cin >> operation;
        cout << endl;
        cout << endl;
        if(operation == 1) {
            cout << Num1 + Num2;
        }
        else if(operation == 2) {
            cout << Num1 - Num2;
        }
        else if(operation == 3) {
            cout << Num1 * Num2;
        }
        else if(operation == 4) {
            cout << Num1 / Num2;
        }
        else if(operation == 5) {
            cout << pow(Num1, Num2);
        }
        cout << endl;
        cout << "\n\nDo you want to exit? 1 for yes 0 for no.\n*_>";
        cin >> Exit;
        cout << endl;
        cout << endl;
        if(Exit) {
            break;
        }
    }

}
