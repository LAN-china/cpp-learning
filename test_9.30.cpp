#include <iostream>
using namespace std;
#include <string>

#define DAYS 7
int main()

{
    cout << "int:" << sizeof(int) << endl;
    cout << "short:" << sizeof(short) << endl;
    cout << "long:" << sizeof(long) << endl;
    cout << "long long:" << sizeof(long long) << endl;
    cout << "float:" << sizeof(float) << endl;
    cout << "double:" << sizeof(double) << endl;
    cout << "char:" << sizeof(char) << endl;
    cout << "bool" << sizeof(bool) << endl;

    cout << DAYS << endl;
    cout << "DAYS:" << DAYS << endl;
      short s=32767;
    s=s+1;
    cout <<s<<endl;
    unsigned short u=65535;
    u=u+1;
    cout <<u<<endl;
    float f=3.1415926f;
    double d=3.1415926535;
    cout <<f<<endl;
    cout <<d<<endl;
    cout <<1/3.0<<endl;
    char c='a';
    cout <<c<<endl;
    cout <<(int)c<<endl;
    

    return 0;
}