#include <iostream>

using namespace std;
int arr[10], n = 10, i, largest, smallest;
double total = 0;
double ave = 0;

int main()
{
	cout << "This array only takes 10 elements " << endl;

	cout << "Enter the elements of the array: ";

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		total += arr[i];
		ave = total / 10;
	}
	
	largest = arr[0];
		for (i = 0; i < n; i++)
		{
			if (largest < arr[i])
				largest = arr[i];
		}

	smallest = arr[0];
		for (i = 0; i < n; i++)
		{
			if (smallest > arr[i] )
				smallest = arr[i];
		}

		cout << "The largest integer is " << largest << endl;
		cout << "The smallest integer is " << smallest << endl;
		cout << "The total of all integers is " << total << endl;
		cout << "The average of all integers is " << ave << endl;

	system("Pause");
	return 0;
}