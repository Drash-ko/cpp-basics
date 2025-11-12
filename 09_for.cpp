#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "Variable i = " << i << endl;
  }

  // Цикл без инициализации в заголовке
  int a = 2;
  for (; a < 10; a++) {
    cout << "Variable a = " << a << endl;
  }

  // Цикл без инициализации и шага в заголовке
  int b = 3;
  for (; b < 10;) {
    cout << "Variable b = " << b << endl;
    b++;
  }

  // Пример бесконечного цикла (закомментирован)
  /*
  int d = 4;
  for (;;) {
      cout << "Variable d = " << d << endl;
      d++;
  }
  */

  // Цикл с двумя переменными
  int g = 0, j = 0;
  for (; g != 10 && j != -5; g++, j--) {
    cout << "Variable g = " << g << ", Variable j = " << j << endl;
  }

  return 0;
}
