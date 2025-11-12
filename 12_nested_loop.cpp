#include <iostream>
using namespace std;

int main() {
  for (int a = 1; a <= 5; a++) {
    cout << "First loop № " << a << endl;

    for (int b = 1; b <= 3; b++) {
      cout << "\tSecond loop № " << b << endl;
    }
  }
}