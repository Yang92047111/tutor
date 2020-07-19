#include <iostream>
#include <string>
  
bool allCharactersSame(std::string s) 
{ 
    int n = s.length(); 
    for (int i = 1; i < n; i++) 
        if (s[i] != s[0]) 
            return false; 
  
    return true; 
} 
  
// Driver code 
int main() 
{ 
    std::string s = "aaa"; 
    if (allCharactersSame(s)) 
        std::cout << "Yes"; 
    else
        std::cout << "No"; 
  
    return 0; 
} 