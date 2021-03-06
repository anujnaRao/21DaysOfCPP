/*
Follows Divide and Conquer Technique
The list should be sorted
Time Complexity: B.C - O(1) A.C and W.C - O(log n)
Space Complexity: W.C - O(1)
*/

// Iterative Method
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int ar[], int low, int high, int ele){
    int mid;
    while( high >= low){
        mid = (low + high) /2;
        if( ar[mid] == ele){
             return mid; 
        }
        else if( ar[mid] > ele){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n, ar[n], flag = 0, low, high, ele, pos;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    cin >> ele;
    pos = binarySearch(ar, 0,n-1, ele);
    if( pos != -1)
        cout << "The element is found in position: " << pos << endl;
    else
        cout << "The given element is not found in the list";
    return 0;
}