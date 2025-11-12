#include <iostream>
using namespace std;

/*
    Logical and arithmetic operators in C++:

    Comparison:
    >  - greater than
    >= - greater than or equal
    <= - less than or equal
    == - equal
    != - not equal
    %  - remainder of division

    Logical:
    && - AND
    || - OR
    !  - NOT (inverts condition)
*/

int main() {
    // Пример инверсии условия (!)
    int a = 5, b = 5;
    cout << "!(a == b) = " << !(a == b) << "  // 0, потому что a == b" << endl;

    // Пример логического И (AND)
    int c = 3, d = 4;
    cout << "(!(a == b) && (c < d)) = " 
         << (!(a == b) && (c < d)) 
         << "  // 0, одно из условий false" << endl;

    // Пример логического ИЛИ (OR)
    cout << "(!(a == b) || (c < d)) = " 
         << (!(a == b) || (c < d)) 
         << "  // 1, одно из условий true" << endl;

    return 0;
}
