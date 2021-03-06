#include <iostream>

using namespace std;

template <class M> void add(M a){
    cout << "Function with only one parameter" << endl;
    cout << a << endl;
}

template <class M, class N> void add(M a, N b){
    cout << "Value from class M: " << a << endl;
    cout << "Value from class N: " << b << endl;
}

int main(){
    add(10);
    add(20, 30.5);
    return 0;
}

// If the functions are performing different operations then the generic function can not be overloaded
/* void fun(double a){ cout << a;}

void fun(int a){ if (a%2 == 0) cout << "even" ;}*/