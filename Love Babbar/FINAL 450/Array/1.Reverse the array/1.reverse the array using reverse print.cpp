#include <iostream>
using namespace std;

// Approach -1
// Time Complacity - O(n)
// Space Complacity - O(1)

void reverseArray(int arr[], int n)
{
	for (int i = n - 1; i >= 0; i--)
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
		reverseArray(arr, N);
	}
	return 0;
}
