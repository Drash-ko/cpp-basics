#include <iostream>
using namespace std;

int main() {
  cout << "Start of the cycle" << endl;
  cout << "\nExample of break:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "variable i = " << i << endl;
    if (i == 5) {
      break; // завершает цикл полностью
    }
  }

  // Пример использования continue
  cout << "\nExample of continue:" << endl;
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue; // пропускает оставшуюся часть тела цикла и идет к следующей итерации
    }
    cout << "variable i = " << i << endl;
  }

  cout << "\nThe end of the cycle" << endl;

  return 0;
}
