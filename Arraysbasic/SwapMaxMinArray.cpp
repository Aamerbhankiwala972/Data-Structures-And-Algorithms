#include <iostream>
#include <climits>
using namespace std;

// Function to swap the max and min numbers in an array
void swapMaxMin(int arr[], int size) {
    if (size == 0) return;  // empty array case

    int minIndex = 0, maxIndex = 0;

    // Find indices of min and max
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

// Driver code
int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    swapMaxMin(nums, size);

    cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
