#include <iostream>
  
// function for sort array 
void sortit(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
      arr[i]=i+1; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 10, 7, 9, 2, 8, 3, 5, 4, 6, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // for sort an array 
    sortit(arr, n); 
  
    // for print all the element in sorted way 
    for (int i = 0; i < n; i++)  
        std::cout << arr[i] << " ";     
} 