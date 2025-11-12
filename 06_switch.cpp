#include <iostream>
using namespace std;

int main() {
    // Пример использования оператора switch
    int a;
    cout << "Write a number: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "You wrote number 1" << endl;
            break;
        case 2:
            cout << "You wrote number 2" << endl;
            break;
        default:
            cout << "I don't know this number" << endl;
    }

    return 0;
}
