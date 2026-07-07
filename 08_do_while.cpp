#include <iostream>
using namespace std;

int main() {
  int a = 6;

  do {
    cout << "Variable a = " << a << endl;
    a++;
  } while (a < 5); // Condition is checked after the first iteration.

  return 0;
}
