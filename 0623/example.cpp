#include <ctime>
#include <iostream>
#include <string>

void getTime(std::string word)
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result)) << std::endl;
    std::cout << word << std::endl;
}
 
int main()
{
    std::string word = "Hellow world";
    getTime(word);
    return 0;
}




