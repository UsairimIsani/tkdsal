#include <iostream>
using namespace std;
// int plus_chicken(Some_Class a);
class Fastfood
{

public:
    int price = 0;
    virtual int getPrice()
    {
        return this->price;
    };
};

class Burger : public Fastfood
{
public:
    int price = 1;

    int getPrice() override
    {
        this->FastFood::getPrice();
        return this->price;
    };
};
int main()
{
    Fastfood *f = new Fastfood();
    Fastfood g;
    cout << g.getPrice()
         << endl;
    cout << f->getPrice()
         << endl;
}