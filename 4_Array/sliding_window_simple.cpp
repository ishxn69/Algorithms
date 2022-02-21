//A simple program to demonstrate the basic idea of sliding window technique
//Find max sum of K consecutive elements in a given array

#include <iostream>
using namespace std;

int maxKSum(int arr[], int n, int k)
{
    //first we calculate the maximum sum
    int curr_sum = 0;
    for(int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    
    int max_sum = curr_sum;
    
    for(int i = k; i < n; i++)
    {
        //we are adding next element and subtracting first element simultaneously
        //to get the sum of the next k consecutive elements.
        curr_sum += (arr[i] - arr[i - k]);
        
        //we dynamically evaluate and update the value of maximum sum
        max_sum = max(max_sum, curr_sum);
    }
    
    return max_sum;
}

int main() {
	int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
	cout << maxKSum(arr, n, k);
	return 0;
}
