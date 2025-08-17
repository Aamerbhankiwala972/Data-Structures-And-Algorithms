#include<iostream>
using namespace std;

void CalculateSumAndProduct(int arr[], int size, long long &sum, long long &product) {
    sum = 0;
    product = 1;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }

}

int main() {
    int arr[] = {5, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    long long sum;
    long long product;

    CalculateSumAndProduct(arr, size, sum, product);

    cout << "Sum of Array elements = " << sum << endl;
    cout << "Product of Array elements = " << product << endl;

    return 0;

}