#include <iostream>

int main()
{
    int a = 21;
    int b = 10;
    int c ;

    if( a == b )
    {
        std::cout << "Line 1 - a equal b" << std::endl ;
    }
    else
    {
        std::cout << "Line 1 - a not equal to b" << std::endl ;
    }
    if ( a < b )
    {
        std::cout << "Line 2 - a Less than b" << std::endl ;
    }
    else
    {
        std::cout << "Line 2 - a not less than b" << std::endl ;
    }
    if ( a > b )
    {
        std::cout << "Line 3 - a more than the b" << std::endl ;
    }
    else
    {
        std::cout << "Line 3 - a no greater than b" << std::endl ;
    }

    a = 5;
    b = 20;
    if ( a <= b )
    {
        std::cout << "Line 4 - a less than or equal to b" << std::endl ;
    }
    if ( b >= a )
    {
        std::cout << "Line 5 - b greater than or equal to a" << std::endl ;
    }

    return 0;
}