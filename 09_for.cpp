#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "Variable i = " << i << endl;
  }

  // The initialization step can be declared before the loop header.
  int a = 2;
  for (; a < 10; a++) {
    cout << "Variable a = " << a << endl;
  }

  // The update step can also be handled inside the loop body.
  int b = 3;
  for (; b < 10;) {
    cout << "Variable b = " << b << endl;
    b++;
  }

  // Infinite loop pattern, disabled for this runnable example.
  /*
  int d = 4;
  for (;;) {
      cout << "Variable d = " << d << endl;
      d++;
  }
  */

  // A for loop can update more than one variable.
  int g = 0, j = 0;
  for (; g != 10 && j != -5; g++, j--) {
    cout << "Variable g = " << g << ", Variable j = " << j << endl;
  }

  return 0;
}
