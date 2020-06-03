using namespace std;
#include <iostream>
int main()
{

    int **p, *q, s;
    p = &q;
    q = &s;
    s = 3;
    cout << **p << " " << *q << " " << s << " " << endl;
    cout << p << " " << q << " " << s << " " << endl;
    cout << *p << " " << *q << " " << &s << " " << endl;

    return 0;
}