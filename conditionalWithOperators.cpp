#include <iostream>

using namespace std;

int main(){
    int a = 10, b = 10, c;
    if( c = (a-b))
        cout << "C is: " << c << endl;
    return 0; 
}
/* The output is nothing as condition fails and  if is false
This means return statement is executed 
if (0) exits the condition*/