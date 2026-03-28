#include <iostream>

using namespace std;

int main() {
    double number;

    // Запит числа у користувача
    cout << "Введіть число: ";
    cin >> number;

    // Перевірка умов
    if (number > 0) {
        cout << "Число додатне." << endl;
    } 
    else if (number < 0) {
        cout << "Число від’ємне." << endl;
    } 
    else {
        cout << "Це нуль." << endl;
    }

    return 0;
}