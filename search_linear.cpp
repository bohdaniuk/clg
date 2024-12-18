#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int elem, int n)
{  
    for (int i = 0; i < n - 1; i++)
    {
        int key = arr[i];
        if (elem == key)
        {
            return i;
        }   
    }    
}


int main(int argc, char* argv[])
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr)/sizeof(arr[0]);
  int elem;
  cout<< "Searched element: ";
  cin>>elem;
  cout<< "Searched index: " << linearSearch(arr, elem, n);
  return 0; 
}