// chcking if the array is sorted

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "enter no. of elements: ";
    cin >> n;
    
    int arr[n];
    bool is_sorted = true;

    
    cout << "enter array no.: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i=1; i<n; i++) {
        if (arr[i] < arr[i-1]) { // if array is sorted then current element is greater than previous; so condition if current element is less than previous should not be accepted, hence breaking 
            is_sorted = false;
            break;
        }
    }
    
    if (is_sorted)
        cout << "array is sorted";
    else 
        cout << "array is not sortd";
    
    return 0;
}