/*
Follows min heap or the max heap technique
The root node is deleted and stored in an array
Time Complexity: O(n log n)
Space Complexity: O(1)
*/
#include <iostream>

using namespace std;

void heapify(int ar[], int size, int i){
    int temp;
    int largest = i;
    int right = 2*i + 2, left = 2*i + 1;

    if( left < size && ar[left] > ar[largest])
        largest = left;
    if( right < size && ar[right] > ar[largest])
        largest = right;
    
    if(largest != i){
        temp = ar[largest];
        ar[largest] = ar[i];
        ar[i] = temp;
        heapify(ar,size,largest);
    }
}

void heapSort(int ar[], int size){
    int temp;
    for(int i = size/2 -1; i >= 0; i--)
        heapify(ar,size,i);
    for(int i = size -1; i >= 0; i--){
        temp = ar[0];
        ar[0] = ar[i];
        ar[i] = temp;
        heapify(ar,i,0);
    }
}

int main(){
    int n,a[n];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    heapSort(a,n);

    cout << "Sorted Elements: \n";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}