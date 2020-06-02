#include <stdio.h>
#include <iostream>
using namespace std;
// Hello World I am Learning C++

int main(int argc, char const *argv[])
{
    int num1 = 70;
    double num2 = 256.783;
    char ch = 'A';

    cout << num1 << endl;                // print integer
    cout << num2 << endl;                // print double
    cout << "character: " << ch << endl; // print char
    char a;
    int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num; // Need More Info on this

    cout << "Character: " << a << endl;
    cout << "Number: " << num;

    int hus = 4;
    double jis = 4.78;
    double pizz = (double)hus;
    int ajj = int(jis);
    cout << endl
         << hus << endl
         << jis << endl
         << pizz << endl
         << ajj << endl;
    return 0;
}