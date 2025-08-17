#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    int s = a + b;
    return s;
}

// Minimum of 2 number 

int min(int a, int  b) {
    if ( a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    //int num1, num2;

    int result = min(5, 10);
    cout << "The min is: " << result << endl;

    return 0;
}


