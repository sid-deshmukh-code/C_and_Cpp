// C++ code for " Class concept "
// Author : Siddhant Deshmukh

#include <iostream>
using namespace std;

class rectangle
{
    float l,b,a;
    public:
        void getdata()
        {
            cout << "Enter values" << endl;
            cin >> l >> b;
        }
        void display();
};


void rectangle :: display()
{
    a = l*b;
    cout << "Area = " << a;

}


int main()
{
    rectangle r;
    r.getdata();
    r.display();
	return 0;
}
