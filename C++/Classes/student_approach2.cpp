// C++ code for " Class concept "
// Author : Siddhant Deshmukh

#include <iostream>
using namespace std;

class student
{

    public:
    int roll_no;
    float math,phy,total;

    float marks(int roll_no, float math, float phy)
    {
        
        
        total = math + phy;
        cout << "Roll no " <<roll_no << " Total marks " << total;
        return total;

    }
};



int main()
{
    int r;
    float m,p;

	student s1;
    cout <<"Enter the roll no and marks"<<endl;
    cin >> r >> m >> p;
    s1.marks(r,m,p);

    
	return 0;
}
