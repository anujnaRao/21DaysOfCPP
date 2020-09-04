/*
Time Complexity: Omega(n) B.C 
W.C Theta(n^2)
O(n^2) A.C
Space: O(1)
*/
#include <iostream>

using namespace std;

int main(){
    int n, ar[n], temp, j;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    
    for(int i = 1; i < n; i++){
        temp = ar[i];
        j = i- 1;
        while( j >= 0 && temp <= ar[j]){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = temp;
    }

    for(int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}