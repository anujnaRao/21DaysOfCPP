#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;


int main() {
    int n, ar[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    

    for(int i = n-1; i >= 0; i--)
        cout << ar[i] << " ";
        
    return 0;
}
