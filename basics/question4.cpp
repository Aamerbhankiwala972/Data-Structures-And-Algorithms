#include <iostream>
using namespace std;


int sumOfDigits(int num){

    int digitSum = 0;

    while (num > 0){
    int lastdigit = num % 10;// Extract the last digit
    num = num / 10; // remove the lastdigit 
    digitSum = digitSum + lastdigit; // adding the digitsum + lastdigit
    }

    return digitSum;
}

int main() {

    cout << "Sum = " << sumOfDigits(1234);

}