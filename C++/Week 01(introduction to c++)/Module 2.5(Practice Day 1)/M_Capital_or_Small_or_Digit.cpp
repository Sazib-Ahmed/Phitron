#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    if (x >= 48 && x <=57) {
        cout << "IS DIGIT" << endl;    
    }
    else if (x >= 65 && x <=90) {
        cout << "ALPHA\nIS CAPITAL"<< endl;    
    }
    else if (x >= 97 && x <=122) {
        cout << "ALPHA\nIS SMALL"<< endl;    
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    // Check if x is a digit (ASCII 48 to 57)
    if (x >= '0' && x <= '9') {
        cout << "IS DIGIT" << endl;
    } 
    // Check if x is an uppercase letter (ASCII 65 to 90)
    else if (x >= 'A' && x <= 'Z') {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    // Check if x is a lowercase letter (ASCII 97 to 122)
    else if (x >= 'a' && x <= 'z') {
        cout << "ALPHA\nIS SMALL" << endl;
    }

    return 0;
}

*/