#include <iostream>
using namespace std;

// Function to print unique values in an array
void printUnique(int arr[], int size) {
    cout << "Unique values in the array: ";

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if arr[i] appears anywhere else in the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Driver code
int main() {
    int nums[] = {5, 15, 22, 5, -15, 24, 22};
    int size = sizeof(nums) / sizeof(nums[0]);

    printUnique(nums, size);

    return 0;
}
