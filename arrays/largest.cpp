// largest element in an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "enter no. of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int largest=arr[0];
    
    for(int i=0; i<n; i++) {
        if(arr[i]>largest) {
            largest = arr[i];
        }
    }
    
    cout << "largest no. in array: " << largest;

    return 0;
}