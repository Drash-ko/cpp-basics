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
    int a = 5, b = 5;
    cout << "!(a == b) = " << !(a == b)
         << "  // 0 because a == b" << endl;

    int c = 3, d = 4;
    cout << "(!(a == b) && (c < d)) = "
         << (!(a == b) && (c < d))
         << "  // 0 because one condition is false" << endl;

    cout << "(!(a == b) || (c < d)) = "
         << (!(a == b) || (c < d))
         << "  // 1 because one condition is true" << endl;

    return 0;
}
