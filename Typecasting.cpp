#include<iostream>
using namespace std;
int main()
{
    int a=99;
    char c = 'd';
    float f = 1.5;
    double d = 2.5;
    cout<<"Integer: " << a << endl;
    cout << "Character: " << c << endl; 
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Integer to Float: " << static_cast<float>(a) << endl;
    cout << "Integer to Double: " << static_cast<double>(a) << endl;
    cout << "Integer to Char: " << static_cast<char>(a) << endl;
    cout << "Float to Integer: " << static_cast<int>(f) << endl;
    cout << "Float to Double: " << static_cast<double>(f) << endl;
    cout << "Double to Float: " << static_cast<float>(d) << endl;
    cout << "Char to Integer: " << static_cast<int>(c) << endl;

    return 0;
    
}