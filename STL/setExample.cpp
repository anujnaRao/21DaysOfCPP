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
    Set.insert(A(10));
    Set.emplace(20);
    return 0;
}