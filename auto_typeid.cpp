// Use of auto keyword for type deduction
#include <iostream>
using namespace std;

class Base {
};

int main() {
    auto x = 10;
    auto y = 10.0;
    auto z = Base();
    auto zz = new Base();
    
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    cout<<typeid(zz).name()<<endl;
    return 0;
}