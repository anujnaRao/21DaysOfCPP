/*
Time Complexity: O(n^2) B.C and W.C
O(n) A.C
Space: O(1)
*/
#include <iostream>

using namespace std;

int main(){
    int n, ar[n], temp;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> ar[i];
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(ar[j] < ar[i]){
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }

    cout << "Sorted Elements are: ";
    for(int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}