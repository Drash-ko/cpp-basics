#include <iostream>
using namespace std;

int main() {
  // Пример цикла while
  int a = -5;

  while (a < 10) {
    cout << "Variable a = " << a << endl; // вывод текущего значения a
    a += 2;                               // увеличиваем a на 2 на каждой итерации
  }

  return 0;
}
