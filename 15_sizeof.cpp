#include <iostream>
using namespace std;

int main() {
    int arr[]{5,33};
    const size_t size = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < size; i++){
         cout << arr[i] << endl;
    }
}
