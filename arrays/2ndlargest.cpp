// find the second largest element in an array

#include <iostream>
using namespace std;
#include <limits.h>

int main()
{
    int n;
    
    cout << "enter the no. of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int largest = arr[0], seccond_largest = INT_MIN;
    
    for(int i=0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "largest no. in array: " << largest;
    
    
    /*
    // brute solution - find max no., iterate backwards given its not equal to max element
        // sorting
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
        
        cout << "\nsorted array: ";
        for(int i=0; i<n; i++) {
            cout << "\n" << arr[i];
        }
        
        // checking for second largest
        // cout << "\nsecond largest no.: " << arr[n-2]; //doesn't work as we are assuming each element is distinct e.g. ....7,7 X
        for(int i=n-1; i>=0; i--) {
            if(arr[i] != largest && arr[i] > seccond_largest) {
                seccond_largest = arr[i];
            }
        }
    */
        
    /*
    // better solution - 2 passes, in first pass find max element, in second pass
        // second pass
        // sec_largest = arr[0]
        for(int i=0; i<n; i++) { 
            // similar to finding max number but include condition that it not not equal to the max
            if(arr[i] != largest && arr[i] > seccond_largest) {
                seccond_largest = arr[i];
            }
        }
    */
      
    // /*  
    // optimal solution - one pass only, keep track of second largest and max, replace the second largest with max number if max changes
        for(int i=0; i<n; i++) {
            if (arr[i] > largest) {
                seccond_largest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > seccond_largest) { 
                seccond_largest = arr[i];
            } // why this else if condition? we are only updating second largest if we get a new biggest. what if allthough largest hasnt updated but as we iterate there are numbers larger than previous second larger
        }
    // */
    
    
    if (seccond_largest == INT_MIN) {
        cout << "\nall elements same so no second largest";
    } else {
        cout << "\nsecond largest: " << seccond_largest;
    }
    
    return 0;
}