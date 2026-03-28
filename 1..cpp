#include <iostream>
using namespace std;

int main() {
    int day;
    
    cout << "Введіть номер дня тижня (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Понеділок"; break;
        case 2: cout << "Вівторок"; break;
        case 3: cout << "Середа"; break;
        case 4: cout << "Четвер"; break;
        case 5: cout << "П'ятниця"; break;
        case 6: cout << "Субота"; break;
        case 7: cout << "Неділя"; break;
        default: cout << "Помилка";
    }

    return 0;
}