#include <iostream>
using namespace std;

int main() {
  int a = 6;

  do {
    cout << "Variable a = " << a << endl; // вывод текущего значения a
    a++;                                  // увеличиваем a на 1
  } while (a < 5);                        // проверка условия после первой итерации

  return 0;
}
