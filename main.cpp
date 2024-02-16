#include <iostream>

int linear(const int arr[], int size, int target){
    for (int i=0; i<size; ++i){ //search through the entire list
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int binary(const int arr[], int left, int right, int target){
    while(left<=right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // return index
        }
        if (arr[mid] < target) {
            left = mid + 1; // throw away the left half
        } else {
            right = mid - 1; // throw away the right half
        }
    }
    return -1;
}

int main()
{
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 4;
    int linearResult = linear(arr, size, target);
    if (linearResult != -1)
    {
        std::cout << "Linear Search: Element found at index " << linearResult << std::endl;
    }
    else
    {
        std::cout << "Linear Search: Element not found in the array." << std::endl;
    }
    int binaryResult = binary(arr, 0, size - 1, target);
    if (binaryResult != -1)
    {
        std::cout << "Binary Search: Element found at index " << binaryResult << std::endl;
    }
    else
    {
        std::cout << "Binary Search: Element not found in the array." << std::endl;
    }
        return 0;
}