// remove duplicates from array in-place

#include <iostream>
using namespace std;
#include <set>
#include <algorithm>

int main()
{
    int n; 
    cout << "enter no. of array elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "enter elements of array: \n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // cout << "the array: \n";
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << "\n";
    // }
    
    /*
    // brute solution - uses set and its property of only storing unique element
        set<int> s; // initializing set
        
        for(int i=0; i<n; i++) { // inserting each element from array into set, however due the property of set only uniques elements stored in set
            s.insert(arr[i]);
        }
        
        cout << "unique elements in array: \n"; // printing elements in set, i.e., unique elements of array
        for (auto it : s) { // auto is identifier
            cout << it << " ";
        }
        
        // for (auto it=s.begin(); it!=s.end(); ++it) { // ++it is more efficient but it++ also works
        //     cout << *it << " ";  
        // }
        
        // replacing the numbers in array with the unique elements from set
        int index = 0;
        for (auto it=s.begin(); it!=s.end(); it++) {
            arr[index] = *it;
            index++;
        }
        
        // printing length of set s which is no. of unique elements
        cout << "\nno. of unique elements: " << s.size();
    */
    
    /*
    // optimal solution -  uses two pointers to keep track of new unique element and the position it gets added to in array
        // works ONLY if the array is sorted because every time element at ith position will be different and when compared with jth element will be counted as unique
        sort(arr, arr+n);
        
        int count = 0; // pointer 1 is at the first postion array, arr[0]
        for (int j=1; j<n; j++) { // iterating through the entire array and checking if the no. at arr[0] is equal to the current position tracked by j, so arr[1]
            if (arr[j] != arr[count]) { // when this condition is true, this means we found an unique no. so we increment value of i in which we insert the number tracked by j
                count++;
                arr[count] = arr[j];
            }
        }  
        
        cout << "array after removing duplicates: \n";
        for (int i=0; i<=count; i++) {
            cout << arr[i] << "\n";
        }

        cout << "\nno. of unique elements: " << count+1;
    */
   
    return 0;
}