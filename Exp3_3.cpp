#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char chara[200];
	int size;
	cout << "Enter characters: ";
	cin.getline(chara, 200);
	size = strlen(chara);
	for (int i = size; i >= 0; i--)
	{
		cout << chara[i];
	}
	cout << "\n\nArray size = " << size+1 << endl;
	system("Pause");
	return 0;
}
