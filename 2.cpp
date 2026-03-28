#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    cout << "Введіть пароль: ";
    cin >> password;

    if (password == "1234") {
        cout << "Доступ дозволено";
    } else {
        cout << "Помилка";
    }

    return 0;
}