#include <iostream>
using namespace std;

class Test
{
private:
    bool huz = false;
    string chi = "Chicken ";

public:
    Test() : huz(true), chi("CHAMBELI")
    {
        cout << huz << "  " << chi << endl;
    }
    int cham(int a)
    {
        return a;
    };
    void operator!()
    {
        huz = !huz;
        chi = "ZARB ABD";
    };
    bool get_huz()
    {
        return huz;
    }
    string get_chi()
    {
        return chi;
    }
};
int main()
{
    Test ak;
    !ak;
    bool huz = ak.get_huz();
    cout << ak.cham(56) << endl;
    cout << ak.get_huz() << endl;
    cout << ak.get_chi() << endl;
    !ak;
    cout << ak.get_huz() << endl;
}
