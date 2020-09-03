/*
This is a modification in the binary search.
Time complexity is O(log n)
The array is taken for search as sub arrays
The size of the sub array gets double everytime i*2 
The array with low and high is then passed to
Binary search function
low value is usually i/2 as the element is not
present in the values before that
*/
#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int, int, int); 
  
// Returns position of first occurrence of x in array 
int exponentialSearch(int arr[], int n, int x) 
{ 
    // If x is present at firt location itself 
    if (arr[0] == x) 
        return 0; 
  
    // Find range for binary search by 
    // repeated doubling 
    int i = 1; 
    while (i < n && arr[i] <= x) 
        i = i*2; 
  
    return binarySearch(arr, i/2, min(i, n), x); 
} 
  
// A recursive binary search function. 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) 
    { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x); 
   
        return binarySearch(arr, mid+1, r, x); 
    } 
  
    return -1; 
} 
  
// Driver code 
int main(void) 
{ 
   int n, x, arr[n];
    // {2, 3, 4, 10, 40}
   cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cin >> x;
   int result = exponentialSearch(arr, n, x); 
   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", 
                                                    result); 
   return 0; 
} 