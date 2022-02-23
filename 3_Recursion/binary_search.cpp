//An Implementation of Binary Search to demonstrate Recursion
#include <iostream>
using namespace std;

int bSearch(int arr[], int low, int high, int x)
{
    //if low and high cross each other
    if(low > high)
        return -1;
    
    int mid = (low + high)/2;
    
    //if middle element is the answer
    if(arr[mid] == x)
        return mid;
    
    //if x is less than the middle element
    else if(arr[mid] > x)
        return bSearch(arr, low, mid - 1, x);
    
    //if x is greater than the middle element
    else
        return bSearch(arr, mid + 1, high, x);
}

int main() {
	int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7;

	int x = 20;
	
	cout<<bSearch(arr, 0, n - 1, x);
	return 0;
}
