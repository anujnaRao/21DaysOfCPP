#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, ar[n];
    cin >> n;
    for(int i = 0; i < n;i++)
        cin >> ar[i];
    int val = ar[0];
    
    for(int i = 1; i < n; i++){
        if( ar[i] > val){
           val = ar[i];
        }
    }
    cout << "Max value is: \n" << val;
}