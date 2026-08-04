#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    bool b = true;
    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;
    float f = 1.0f;
    double d = 1.0;
    long double ld = 1.0;

    cout << "char size: " << sizeof(c) << " bytes, value: " << (int)c << endl;
    c += 25;
    cout << "char after +25: " << (int)c << endl;
    cout << "bool size: " << sizeof(b) << " bytes" << endl;
    cout << "short size: " << sizeof(s) << " bytes" << endl;
    cout << "int size: " << sizeof(i) << " bytes" << endl;
    cout << "long size: " << sizeof(l) << " bytes" << endl;
    cout << "long long size: " << sizeof(ll) << " bytes" << endl;
    cout << "float size: " << sizeof(f) << " bytes" << endl;
    cout << "double size: " << sizeof(d) << " bytes" << endl;
    cout << "long double size: " << sizeof(ld) << " bytes" << endl;

   
}
