#include <iostream>
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   c = a + b;
   std::cout << "Line 1 - c is :  " << c << std::endl;
   c = a - b;
   std::cout << "Line 2 - c is :  " << c << std::endl;
   c = a * b;
   std::cout << "Line 3 - c is :  " << c << std::endl;
   c = a / b;
   std::cout << "Line 4 - c is : " << c << std::endl;
   c = a % b;
   std::cout << "Line 5 - c is : " << c <<std::endl;
   c = a++; 
   std::cout << "Line 6 - c is : " << c << std::endl;
   c = a--; 
   std::cout << "Line 7 - c is : " << c << std::endl;
   
   return 0;
}