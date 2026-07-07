#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 50;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}
