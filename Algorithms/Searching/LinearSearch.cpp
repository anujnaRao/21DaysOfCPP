/* Time Complexity: B.C - O(1), A.C and W.C - O(n)
   Space Complexity: W.C - O(n)
   Sequential access of array
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ar[n],flag = 0, ele;
    
    cin >> n; //Size of array

    for(int i = 0; i < n; i++)
        cin >> ar[i]; //array elements
    
    cin >> ele; // Search element
    
    for(int i = 0; i < n; i++){
        if( ar[i] == ele){
            flag = i+1;
            break;
        }
        else
        {
            flag =0;
        }
    }
    if( flag != 0)
        cout << "Element is found in position: " << flag << endl;
    else
        cout << "The element is not found in the list \n";
    return 0;
}
