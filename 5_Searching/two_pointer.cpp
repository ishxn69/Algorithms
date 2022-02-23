//A Simple Program to demonstrate the two pointer approach
//We find a pair in the sorted array that has the given sum X
#include <bits/stdc++.h>    //the standard template library
using namespace std;

bool isPresent(int arr[], int n, int sum)
{
    int low = 0, high = n-1;
    int mid;
    
    //code for two pointer approach
    while(low <= high)
    {
        if(arr[low] + arr[high] == sum)
          return true;
        else if(arr[low] + arr[high] > sum)
             high--;
        else low++;
    }
    
    return false;
}

int main()
{
    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 14;
    
    cout << isPresent(arr, n, sum);
}
