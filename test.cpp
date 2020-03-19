#include <iostream>
using namespace std;

class base {
public:
    base()=default;
};

class derived : public base {
    public:
    derived()=default;
    virtual void myfunc()
    {
        cout<<"derived myfunc \n";
    }
};

int main()
{
    base b;
    derived d;
    return 0;
}