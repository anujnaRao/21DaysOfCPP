#include <iostream>
#include <set>

using namespace std;

class A{
    public:
    int x;
    A(int x = 0): x{x} {cout << "Constructor" << endl; };
    A(const A& rhs) {x = rhs.x; cout << "Copy" << endl; }
};

int main(){
    set<A> Set;
    Set.insert(A(10)); // The insert staement takes the object and the value
    Set.emplace(20); // The emplace creates the object and gives the value, without additional creation of the object
    return 0;
}
