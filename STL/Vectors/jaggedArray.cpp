#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// The concept of jagged array is present in Java
// It is a dynamic array, which can be implemented
// in C++ using vectors
// When a vector is used inside a vector 
// It works as jagged array

int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
        
    return 0;
}
