/*
The smallest element in the array is selected and
it is placed in its position the remaining array is shifted.
Swapping takes place along with replacement.
Time complexity : B.C omega(n)
A.C theta(n^2)
W.C O(n^2)
Space O(1)
*/

#include <iostream>

using namespace std;

int smallest(int a[], int n, int i)  
{  
    int small, pos;  
    small = a[i];  
    pos = i;  
    for(int j = i + 1; j < n; j++)  
    {  
        if( a[j] < small)  
        {  
            small = a[j];  
            pos = j;  
        }  
    }  
    return pos;  
}

int main ()  
{  
    int  n, pos, temp, ar[n];  
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    for(int i = 0; i < n; i++)  
    {  
        pos = smallest(ar,n,i);  
        temp = ar[i];  
        ar[i]=ar[pos];  
        ar[pos] = temp;  
    }  
    cout << "Sorted elements...\n";  
    for(int i = 0; i < n; i++)  
    {  
        cout << ar[i] << " ";  
    }  
    cout << endl;
    return 0;  
}    