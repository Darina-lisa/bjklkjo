#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Введіть число: ";
    cin >> n;
    
    if (n % 5 == 0 && n % 11 == 0) {
        cout << "Число ділиться на 5 і на 11 одночасно";
    } else {
        cout << "Число НЕ ділиться одночасно на 5 і на 11";
    }
    
    return 0;
}