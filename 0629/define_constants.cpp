#include <iostream>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main()
{
    int first_area;  

    first_area = LENGTH * WIDTH;

    std::cout << "======== Use #define ========" << std::endl;
    std::cout << first_area << std::endl;
    std::cout << NEWLINE << std::endl;

    const int  length = 10;
    const int  width  = 5;
    const char newline = '\n';
    int second_area; 

    second_area = length * width;

    std::cout << "======== Use const ========" << std::endl;
    std::cout << second_area;
    std::cout << newline;

    return 0;
}