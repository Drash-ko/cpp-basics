#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;
  int a[SIZE]{5, 12, 47, 58, 95};

  // изменение элементов массива
  for (int i = 0; i < SIZE; i++) {
    a[i] = i;
  }

  // вывод элементов массива
  for (int i = 0; i < SIZE; i++) {
    cout << a[i] << endl;
    ;
  }
}