#include <iostream>
using namespace std;

// Approach - 2
// Time Complacity - O(n)
// Space Complacity - O(1)

void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	// code
	int testCases;
	cin >> testCases;

	while (testCases--)
	{		
		int N;
		cin >> N;
		int arr[N];
		for (int i = 0; i < N; i++)
		{
			int item;
			cin >> item;
			arr[i] = item;
		}
		reverseArray(arr, 0, N - 1);
		printArray(arr, N);
	}
	return 0;
}
