/*
Improvisation os insertion sort
Comparision is done of elements within 
gap of several elements
Time Complexity: Omega(n log n) B.C
Theta(n log n^2)A.C
O(n log(n)^2) W.C
Space: O(1)
*/
#include <bits/stdc++.h>

using namespace std;

void shellsort(int arr[], int num)    
{    
    int i, j, k, tmp;    
    for (i = num / 2; i > 0; i = i / 2)    
    {    
        for (j = i; j < num; j++)    
        {    
            for(k = j - i; k >= 0; k = k - i)    
            {    
                if (arr[k+i] >= arr[k])    
                    break;    
                else    
                {    
                    tmp = arr[k];    
                    arr[k] = arr[k+i];    
                    arr[k+i] = tmp;    
                }    
            }    
        }    
    }    
}    
int main()    
{    
    int arr[30];    
    int k,  num;    
    cout << "Enter total no. of elements : ";    
    cin >> num;    
    cout << "Enter numbers: \n";    
    
    for (k =  0 ; k < num; k++)    
    {    
        cin >> arr[k];    
    }    
    shellsort(arr, num);    
   cout << " Sorted array is:\n ";    
    for (k = 0; k < num; k++)    
        cout<< arr[k] << " ";
    cout << endl;    
    return 0;    
}    