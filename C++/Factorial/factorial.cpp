// C++ code for " Factorial "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;

int main()  
{  
    int num, count, fact = 1;  
  
    cout << "Enter a number to find its Factorial\n";  
    cin >> num;  
  
    for(count = 1; count <= num; count++)  
    {  
        fact = fact * count;  
    }  
  
     
    cout << "Factorial of " << num << " is " << fact;
  
    return 0;  
}  
