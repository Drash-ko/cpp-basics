#include <iostream>
#include <ctime>                // библиотека для time
using namespace std;

int main() {
    srand(time(NULL));          // инициализация генератора случайных чисел
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 50;
        // rand() % 100 → диапазон 0–99, +50 → итоговый диапазон 50–149
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}