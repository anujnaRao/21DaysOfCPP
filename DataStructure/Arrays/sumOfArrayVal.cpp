#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


    int main(){

        int n, ar[n], sum = 0;
        vector<int> v{10, 20, 30};

        // cout << "Enter the value of n \n";
        // cin >> n;
        // cout << "Enter the array elements: \n";
        // for(int i=0;i<n;i++)
        //     cin >> ar[i]; 
// Using the basic array addition with for loop  
//     cout << "Sum is: \n";
//     for(int i=0;i<n;i++){
//         sum+= ar[i];
//     }
//      cout << sum;

// Using numeric header from STL
    // cout << "Sum is: \n" << accumulate(ar, ar+n, sum);

// Using vector header from STL
     cout << "Sum is: \n" << accumulate(v.begin(), v.end(), sum);

}