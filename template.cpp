// Use of template
#include <iostream>
using namespace std;
template <typename T1, typename T2>
T2 add(T1 a, T2 b) {
    return a+b;
}

int main() {
    cout << add(1, 1.8) << endl;
    cout << add(1.8, 1);
    return 0;
}