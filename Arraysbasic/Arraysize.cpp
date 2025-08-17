#include<iostream>
#include<climits>
using namespace std;

int main() {
   int nums[] = {5, 15, 22, 1, -15, 24};
   int size = 6;

   int smallest = INT_MAX;  
   int largest = INT_MIN;
   int smallest_index = -1;
   int largest_index = -1;

   for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallest_index = i;
        }
   }

   for(int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
            largest_index = i;
        }
   }

   cout << "Samllest index = " << smallest << ", Smallest_index = " << smallest_index << endl;
   cout << "Largest index = " << largest << ", Largest_index = " << largest_index << endl;
}