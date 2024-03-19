#include<iostream>
using namespace std;

// Function to perform binary search recursively
int binarySearch(int arr[], int beg, int end, int x)
{
    // Base case: if end index is greater than or equal to begin index
    if (end >= beg) {
        int mid = end + (beg - end) / 2;

        // If element is present at middle index, return the index
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, search in the left half
        if (arr[mid] > x)
            return binarySearch(arr, beg, mid - 1, x);
            
        // Else search in the right half
        return binarySearch(arr, mid + 1, end, x);
    }
 
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout << "Enter array elements:" << endl;
	for (int i=0;i < n;i++)
	{
	   cin >> arr[i];
	}

    int x;
    cout << "Element to search: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1){
        cout <<  "Element not present in array" << endl;
    }
    else{
        cout << x << " is present at index " << result << endl;
    }
}

//Complexity of Binary Search

/*The runtime complexity of binary search depends on the maximum
  number of divisions possible during searching process. For a
  set of n elements, we can perform up to log₂n divisions. A
  binary search eliminates half the data afterfirst comparison,
  one quarter of the data after the second comparison  and so on.*/

// Thus, the time complexity of binary search is O(log₂n).