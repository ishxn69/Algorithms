#include <iostream>
using namespace std;

int search(int arr[], int length, int x)
{
  for(int i=0; i < length; i++)
  {
    if(arr[i] == x)
      return i;
  }
  
  return -1;
}

int main()
{
  int arr[] = {1,2,3,4,5};
  int length = 5;
  cout << search(arr, length, 3);
}
