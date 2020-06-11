#include <iostream>
using namespace std;
// int plus_chicken(Some_Class a);
class Distance
{
private:
    int meter;

public:
    Distance() : meter(0) {}
    //friend function
    friend int addFive(Distance);
};

// friend function definition
int addFive(Distance d)
{
    //accessing private data from non-member function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "Distance: " << addFive(D);
    Some_Class b;
    plus_chicken(b);
    return 0;
}

class Some_Class
{
public:
    int us = 3;
};
int plus_chicken(Some_Class a)
{
    return a.us;
}
