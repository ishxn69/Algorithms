//Iterative implementation of Binary Search
#include <iostream>
using namespace std;


int bSearch(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

    //if the element is present in the middle
	if(arr[mid] == x)
		return mid;

    //if the middle element is greater than element
	else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);
    
    //if the element is greater than middle element.
	else
		return bSearch(arr, mid + 1, high, x);
}

int main() {
    
     int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7;

	int x = 20;
	
	cout<<bSearch(arr, 0, n - 1, x);
	return 0;
}
