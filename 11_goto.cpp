#include <iostream>
using namespace std;

int main() {
  // пример использования goto
  cout << "one" << endl;
  cout << "two" << endl;

  goto link; // прыгаем на метку link, пропуская следующий код

  cout << "three" << endl; // этот вывод пропускается
  cout << "four" << endl;  // этот тоже

link:
  cout << "five" << endl; // выполнение продолжается здесь

  return 0;
}
