#include <iostream>
using namespace std;

void print_arr(char *arr, int i){
    if (i >= 4)
        return;
    cout << *(arr + i) << ' ';
    print_arr(arr,++i);
    
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd'};
    char *ptr = arr;

    print_arr(ptr, 0);

    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << *(arr+i) << ' ';
    }
}
