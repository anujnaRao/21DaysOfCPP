/*
Follows Divide and Conquer
Time: B.C O(n)- 3 way split O(n log n) - simple split
      A.C O(n log n)
      W.C O(n^2)
Space: O(log n)
Values at the start of the array and the end of the array 
are compared and swapped along with the temp var loc
*/
#include <iostream>

using namespace std;

int partition(int a[], int beg, int end){
    int left = beg, loc = beg, right = end, flag = 0, temp;
    while( flag != 1){
        while( (a[loc] <= a[right]) && (loc != right))
            right--;
        if( loc == right )
            flag = 1;
        else if( a[loc] > a[right] ){
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }

        if( flag != 1 ){
            while( (a[loc] >= a[left]) && loc != left)
                left++;
            if( loc == left )
                flag = 1;
            else if( a[loc] < a[left] ){
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    } 
    return loc;
}

void quickSort(int a[], int beg, int end){
    int loc;
    if( beg < end ){
        loc = partition(a,beg,end);
        quickSort(a,beg,loc-1);
        quickSort(a,loc+1,end);
    }
}

int main(){
    int n, ar[n];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> ar[i];
    
    quickSort(ar,0,n-1);

    cout << "Sorted Elements are: \n";
    for(int i = 0; i < n ; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;
}