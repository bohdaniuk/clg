#include <stdio.h>
#include <iostream>
#include <vector>
#define GOLDEN_RATIO 1.61803398875
using namespace std;

void insertionSort(vector<int>& v)
{
    int i, key, j;
    for (i = 1; i < v.size(); i++)
    {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int binarySearch(vector<int>& v, int elem)
{  
   int low = 0, high = v.size() - 1;

   while (low <= high)
   {
    
    int mid = low + static_cast<int>((high - low) / GOLDEN_RATIO);
    if (v[mid] == elem)
    { return mid; }

    if (v[mid] > elem)
    { high = mid - 1; }
    
    else
    { low = mid + 1; }
   } 
   cout << "Not found!" <<endl;
   return -1;
}

void displayArray(vector<int>& v)
{
  int i;
  for(i = 0;i < v.size(); i++)
  {cout << v[i] << " "<< endl;}
}

int main(int argc, char* argv[])
{
  vector<int> v = {11, 7, 5, 76, 573, 64, 78, 53, 90, 1, -53, -6
  };
  int elem;
  insertionSort(v);
  displayArray(v);
  cout<< "Searched element: ";
  cin>>elem;
  cout<< "Searched index: " << binarySearch(v, elem);
  getchar();
  return 0; 
}