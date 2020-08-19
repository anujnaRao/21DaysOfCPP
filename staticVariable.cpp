#include <iostream>

using namespace std;

void callFun(){
    static int i = 0;
    int j = 0;
    i++;
    j++;
    cout << i << " " << j << endl; //Static value changes but not the int value
}

int main(){
    callFun();
    callFun();
    return 0;
}