#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Введіть оцінку (0-100): ";
    cin >> score;

    int grade;

    // Переведення в 1–5
    if (score >= 90) grade = 5;
    else if (score >= 75) grade = 4;
    else if (score >= 60) grade = 3;
    else if (score >= 0) grade = 2;
    else {
        cout << "Помилка";
        return 0;
    }

    // Вивід коментаря
    switch (grade) {
        case 5: cout << "Відмінно"; break;
        case 4: cout << "Добре"; break;
        case 3: cout << "Не погано"; break;
        case 2: cout << "Погано"; break;
        default: cout << "Помилка";
    }

    return 0;
}