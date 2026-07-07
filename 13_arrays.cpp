#include <iostream>
using namespace std;

int main() {
  int a[4];
  a[0] = 5;
  a[1] = 7;
  a[2] = 10;
  a[3] = 33;
  cout << a[0] << endl;

  int b[10]{1, 2, 3};
  cout << b[0] << endl;

  int c[]{3, 6, 5};
  cout << c[1] << endl;
}
