#include <iostream>
using namespace std;

int main() {
  cout << "one" << endl;
  cout << "two" << endl;

  goto link;

  cout << "three" << endl;
  cout << "four" << endl;

link:
  cout << "five" << endl;

  return 0;
}
