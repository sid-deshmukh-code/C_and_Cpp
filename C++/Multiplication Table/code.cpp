// C++ code for " Multiplication table "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;


int main()
{

    int i, table;

    cout << "Enter a number to print its multiplication table: ";


    cin >> table;

    for (i=1;i<=10;i++){

    cout << table << " x " << i << " = " << table * i << endl;

    }

        
        return 0;


}
