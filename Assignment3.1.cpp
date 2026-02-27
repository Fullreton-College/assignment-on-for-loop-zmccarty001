// I submitted the sales on the other assignment, this one is the two integers assignment
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int first_Int, second_Int;
    int increment = 5;

    cout<<"Enter first integer: \n";
    cin>>first_Int;
    cout<<"Enter second integer: \n";
    cin>>second_Int;

    cout<<first_Int<<" ";

    if (first_Int < second_Int) {
    for (int count = 0; first_Int <= second_Int; count++) {
        cout<< (first_Int += increment)<<" ";
    }

    
    return 0;
}
}