#include <iostream>

using namespace std;
const int prov = 3;
const int days = 7;
int i, j;
int main()
{
	int temperature[prov][days];
	cout << "Enter temperature of Province A, Province B and Province C for a week." << endl;
	{
		for (j = 0; j < days; j++)
		{
			cout << "Province A, Day " << j + 1 << " : ";
			cin >> temperature[0][j];
		}
		for (j = 0; j < days; j++)
		{
			cout << "Province B, Day " << j + 1 << " : ";
			cin >> temperature[1][j];
		}
		for (j = 0; j < days; j++)
		{
			cout << "Province C, Day " << j + 1 << " : ";
			cin >> temperature[2][j];
		}
	}
	cout << "\nDisplaying Values : " << endl;
	{
		for (j = 0; j < days; j++)
		{
			cout << "Province A, Day " << j + 1 << " = " << temperature[0][j] << endl; 
		}
		for (j = 0; j < days; j++)
		{
			cout << "Province B, Day " << j + 1 << " = " << temperature[1][j] << endl;
		}
		for (j = 0; j < days; j++)
		{
			cout << "Province C, Day " << j + 1 << " = " << temperature[2][j] << endl;
		}
	}
	system("Pause");
	return 0;
}