#include <iostream>
using namespace std;

int main() {
    int arr[]{5,33};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){                   // sizeof получает размер массива arr и делит его на размер нулевого элемента массива
         cout << arr[i] << endl;
    }
}