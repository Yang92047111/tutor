#include <iostream>
#include <string>
  
// Function to calculate sum of all numbers present 
// in a string containing alphanumeric characters 
int findSum(std::string str) 
{ 
    // A temporary string 
    std::string temp = ""; 
  
    // holds sum of all numbers present in the string 
    int sum = 0; 
  
    // read each character in input string 
    for (char ch: str) 
    { 
        // if current character is a digit 
        if (isdigit(ch)) 
            temp += ch; 
  
        // if current character is an alphabet 
        else
        { 
            // increment sum by number found earlier 
            // (if any) 
            sum += atoi(temp.c_str()); 
  
            // reset temporary string to empty 
            temp = ""; 
        } 
    } 
  
    // atoi(temp.c_str()) takes care of trailing 
    // numbers 
    return sum + atoi(temp.c_str()); 
} 
  
// Driver code 
int main() 
{ 
    // input alphanumeric string 
    std::string str = "123abc"; 
  
    std::cout << findSum(str); 
  
    return 0; 
} 