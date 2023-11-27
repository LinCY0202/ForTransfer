#include <iostream>
#include <fstream>
using namespace std;

int main() {
    long long int n;

    while (cin >> n) {
        if (n <= 0)
            break;
        else if (!(n % 7))
            cout << "Hello World!" << endl;
        else if ((n % 7) & 1) {
            cout << "Hello World!" << endl;
            cout << "Hello World!" << endl;
            
        } else {
            cout << "Hello World!" << endl;
            cout << "Hello World!" << endl;
            cout << "Hello World!" << endl;
        }
        cout << endl;
    }

    return 0;
}

