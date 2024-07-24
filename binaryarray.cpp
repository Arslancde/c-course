#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int target = 10; // Element to search for
    int left = 0, right = n - 1;
    bool found = false; // To track if the element is found

    // Binary search using loops
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate middle index
        
        if (arr[mid] == target) { // If element is present at mid
            cout << "Element is present at index " << mid << endl;
            found = true;
            break;
        }
        
        if (arr[mid] < target) // If target is greater, ignore left half
            left = mid + 1;
        else // If target is smaller, ignore right half
            right = mid - 1;
    }
    
    if (!found) // If element is not found
        cout << "Element is not present in array" << endl;
    
    return 0;
}
