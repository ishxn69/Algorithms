#include <iostream>
using namespace std;

//algorithm
int insert(int arr[], int x, int n, int cap, int pos)
{
    if(n==cap) //if array is of max capacity
    return n;
    
    int idx = pos - 1; //index is always position - 1
    
    for(int i = n-1; i >= idx; i--) //from the last element to and including element at our position.
    {
        arr[i+1] = arr[i]; //shift by 1 to the next memory location.
    }
    
    arr[idx] = x; //add x to the idx index. (At position we had specified)
    
    return n + 1; //sets size of array by 1 more for storing more elements.
}

int main() {
	int arr[5], cap = 5, n = 3; //we have created an array of size 5
	
	//We add n=3 elements
	arr[0] = 4; 
	arr[1] = 6;
	arr[2] = 7;
	
	//we print array before the insertion.
	cout << "before array " <<endl;
	
	for(int i=0; i < n; i++)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;
	
	n = insert(arr, 3, 3, 5, 2); //size of array increased for storing inserted element.
	
	//we print the array after the insertion.
	cout << "after insert " << endl;
	for(int i=0; i < n; i++)
	{
	    cout << arr[i] << " ";
	}
	return 0;
}
