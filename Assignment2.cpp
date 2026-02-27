#include <iostream>
using namespace std;

int main() 
{


   int sales_1, sales_2, sales_3, sales_4, sales_5;

   cout<<"Enter today's sale for Store 1: \n";
   cin>>sales_1;
   cout<<"Enter today's sale for Store 2: \n";
   cin>>sales_2;
   cout<<"Enter today's sale for Store 3: \n";
   cin>>sales_3;
   cout<<"Enter today's sale for Store 4: \n";
   cin>>sales_4;
   cout<<"Enter today's sale for Store 5: \n";
   cin>>sales_5;
   cout << "Sales Bar Chart:\n";
   cout << "Each * = $100\n";

   cout << "Store 1: ";
    for (int count = 0; count < (sales_1/100); count++) 
    {
      cout<<"*";
      } 
      cout<< endl;
   cout << "Store 2: "; 
   for (int count = 0; count < (sales_2/100); count++) {
      cout<<"*";
   } 
   cout << endl;
   cout << "Store 3: ";
   for (int count = 0; count < (sales_3/100); count++) {
      cout<<"*";
   }
   cout << endl;
   cout << "Store 4: ";
   for (int count = 0; count < (sales_4/100); count++) {
      cout<<"*";
   } 
   cout << endl;
   cout << "Store 5: ";
   for (int count = 0; count < (sales_5/100); count++ ) {
      cout<<"*";
   }
   cout << endl;
   




   return 0;
}
