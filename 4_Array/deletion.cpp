#include <iostream>
using namespace std;

//algorithm
int deleteEle(int arr[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
            break;
    }
    
    if(arr[n-1] == x) //optimized code for handling end element deletion in constant time
    {
        return n-1;
    }
    
    if(i==n)
        return n;
    
    for(int j = i; j < n-1; j++) //we use the variable i again
    {
        arr[j] = arr[j+1]; //copying the previous elements of the array
    }
    
    return n - 1;
    
}

int main() {
    int arr[] = {3, 8, 12, 5, 6}, x = 6, n = 5;

       cout<<"Before Deletion"<<endl;

       for(int i=0; i < n; i++)
       {
       	cout<<arr[i]<<" ";
       }

       cout<<endl;

     
       n = deleteEle(arr, n, x);

       cout<<"After Deletion"<<endl;

       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       
	return 0;
}
