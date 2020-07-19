#include <iostream>
#include <string>
#define MAX 100002 
  
// Return the number of substring divisible by 6 
// and starting at index i in s[] and previous sum 
// of digits modulo 3 is m. 
int f(int i, int m, char s[], int memoize[][3]) 
{ 
    // End of the string. 
    if (i == strlen(s)) 
        return 0; 
  
    // If already calculated, return the 
    // stored value. 
    if (memoize[i][m] != -1) 
        return memoize[i][m]; 
  
    // Converting into integer. 
    int x = s[i] - '0'; 
  
    // Increment result by 1, if current digit 
    // is divisible by 2 and sum of digits is 
    // divisible by 3. 
    // And recur for next index with new modulo. 
    int ans = ((x+m)%3 == 0 && x%2 == 0) + 
              f(i+1, (m+x)%3, s, memoize); 
  
    return memoize[i][m] = ans; 
} 
  
// Returns substrings divisible by 6. 
int countDivBy6(char s[]) 
{ 
    int n = strlen(s); 
  
    // For storing the value of all states. 
    int memoize[n+1][3]; 
    memset(memoize, -1, sizeof memoize); 
  
    int ans = 0; 
    for (int i = 0; i < strlen(s); i++) 
    { 
        // If string contain 0, increment count by 1. 
        if (s[i] == '0') 
            ans++; 
  
        // Else calculate using recursive function. 
        // Pass previous sum modulo 3 as 0. 
        else
            ans += f(i, 0, s, memoize); 
    } 
  
    return ans; 
} 
  
// Driven Program 
int main() 
{ 
    char s[] = "4806"; 
  
    std::cout << countDivBy6(s) << std::endl; 
  
    return 0; 
} 