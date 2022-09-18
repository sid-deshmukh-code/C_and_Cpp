// C++ code for " Class concept "
// Author : Siddhant Deshmukh

#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;
    float math,phy,total;
public:
    void getdata()
    {
        cout <<"Enter the roll no and marks"<<endl;
        cin >> roll_no >> math >> phy;

    }

    void display()
    {
        total = math + phy;
        cout << "Roll no " <<roll_no << " Total marks " << total;

    }
};



int main()
{


	student s1;
    s1.getdata();
    s1.display();

    
	return 0;
}
