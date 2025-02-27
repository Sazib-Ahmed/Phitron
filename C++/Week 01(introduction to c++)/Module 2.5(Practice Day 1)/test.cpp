#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr[7] << endl;  // ERROR: Accessing an out-of-bounds index (valid indices: 0-4)

    return 0;
}
