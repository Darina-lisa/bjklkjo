#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Введіть номер місяця (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 день";
            break;

        case 4: case 6: case 9: case 11:
            cout << "30 днів";
            break;

        case 2:
            cout << "28 днів";
            break;

        default:
            cout << "Помилка";
    }

    return 0;
}