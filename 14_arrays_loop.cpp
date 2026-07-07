#include <iostream>
using namespace std;

int main() {
  const int SIZE = 5;
  int a[SIZE]{5, 12, 47, 58, 95};

  for (int i = 0; i < SIZE; i++) {
    a[i] = i;
  }

  for (int i = 0; i < SIZE; i++) {
    cout << a[i] << endl;
  }
}
