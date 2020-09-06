/*
Follows Divide and Conquere Rule
Time Complexity: O(n log n) for all
Space Complexity: O(n)
Helpfull when list is small
Array divided into sub arrays, untill the smallest sub array
It is merged or conquered with sorting
*/
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int beg, int mid, int end){
    int i = beg, index = beg, j = mid+1, temp[100],k;
    while( i <= mid && j <= end){
        if( a[i] < a[j] ){
            temp[index] = a[i];
            i += 1;
        }
        else{
            temp[index] = a[j];
            j += 1;
        }
        index++;
    }
    if( i > mid){
        while( j <= end ){
            temp[index] = a[j];
            index++; j++;
        }
    }
    else{
        while(i <= mid){
            temp[index] = a[i];
            index++; i++;
        }
    }
    k = beg;
    while( k < index){
        a[k] = temp[k];
        k++;
    }
}

void mergeSort(int a[], int beg, int end){
    int mid;
    if( beg < end){
        mid = (beg + end)/2;
        mergeSort(a,beg,mid); // Left Partition
        mergeSort(a,mid+1,end); // Right Partition
        merge(a,beg,mid,end); //Conquere 
    }
}

int main(){
    int n, ar[n];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> ar[i];
    
    mergeSort(ar,0,n-1);

    cout << "Sorted Elements are: \n";
    for(int i = 0; i < n; i++)
        cout << ar[i] << " " ;
    cout << endl;

    return 0;
}