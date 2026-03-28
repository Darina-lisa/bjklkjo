#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    cout << "Введіть перше число: ";
    cin >> a;
    
    cout << "Введіть друге число: ";
    cin >> b;
    
    if (a > b) {
        cout << "Максимальне число: " << a;
    } else {
        cout << "Максимальне число: " << b;
    }
    
    return 0;
}