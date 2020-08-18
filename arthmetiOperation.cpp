#include <iostream>

using namespace std;

void add(float x, float y){
    cout << "Sum is: " << x + y << endl;
}

void sub(float x, float y){
    cout << "Sub is: " << x - y << endl;
    if ( (x- y) == 0)
        cout << "True" << endl;
    cout << ((x- y) == 0) << endl;
}

float mul(float x, float y){
    return x * y;
}

float div(float x, float y){
    return x/y;
}
int main(){
    float x, y, pro, quo;
    cout << "Enter the Values of x and y" << endl;
    cin >> x >> y;
    cout << "Arithmetic Operations " << endl;
    add(x,y);
    sub(x,y);
    pro = mul(x,y);
    quo = div(x,y);
    cout << "Product is: " << pro << endl;
    cout << "Quotent is: " << quo << endl;
    return 0;
}