#include <iostream>
using namespace std;

void print_arr(char *arr){
    for (int i = 0; i < 4; i++) {
        cout << *(arr+i) << ' ';
    }


}

int main() {
    char arr[] = {'a', 'b', 'c', 'd'};
    char *ptr = arr;
    print_arr(ptr);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << *(arr+i) << ' ';
    }
}
