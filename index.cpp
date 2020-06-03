// #include <stdio.h>
// #include <iostream>
// using namespace std;
// // Hello World I am Learning C++

// int main(int argc, char const *argv[])
// {
//     int num1 = 70;
//     double num2 = 256.783;
//     char ch = 'A';

//     cout << num1 << endl;                // print integer
//     cout << num2 << endl;                // print double
//     cout << "character: " << ch << endl; // print char
//     char a;
//     int num;

//     cout << "Enter a character and an integer: ";
//     cin >> a >> num; // Need More Info on this

//     cout << "Character: " << a << endl;
//     cout << "Number: " << num;

//     int hus = 4;
//     double jis = 4.78;
//     double pizz = (double)hus;
//     int ajj = int(jis);
//     cout << endl
//          << hus << endl
//          << jis << endl
//          << pizz << endl
//          << ajj << endl;
//     for (int i = 0; i < 40; i++)
//     {
//         printf(" %d", i);
//     }
//     do
//     {
//         printf("\nHEllow Woerld\n");
//     } while (2 > 3);

//     return 0;
// }
#include <iostream>
using namespace std;

int factorial(int);
int &faluda();
int some_value = 34;
int &faluda()
{
    return some_value;
}

int main()

{
    int n;
    // cout << "Enter a number to find factorial: ";
    // cin >> n;
    cout
        // << "Factorial of " << n << " = " << factorial(n) << endl
        << endl
        << endl;
    // cout << "Hello " << endl;
    // faluda() = 56;
    // cout << some_value << endl;
    int arrray[4][2] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arrray[i][j] << endl;
            /* code */
        }
    }

    cout << arrray[0][0] << endl;
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
