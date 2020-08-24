#include <iostream>

using namespace std;

template <class M> M operate(M &a,M &b){
    M result = a * b;
    return result;
}

int main(){
    int i = 10, j = 21;
    float x = 2.5, y = 5.8;
    cout << "Operation on integer values: " << operate(i, j) << endl;
    cout << "Operation on float values:  "<< operate(x, y) << endl;
    return 0;
}