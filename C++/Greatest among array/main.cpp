// C++ Boilercode for " Greatest among n numbers "
// Author : Siddhant Deshmukh


#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
	int arr[n], x, great, y;
    for (x=0;x<n;x++){
        cin >> arr[x];
    }
    great = arr[0];
    for(y=0;y<n;y++){
        if(great<arr[y]){
            great = arr[y];
        }
    }
    cout<<"\n\nis the greatest among the entered values"<<great;


    
	return 0;
}
