#include <iostream>

using namespace std;

void funcDemo(){
    cout << "Checking function" << endl;
}

int main(){
    cout << "Main function";
    cout << endl;
    funcDemo(); //Function calling
    cout << "After function";
    cout << endl;
}