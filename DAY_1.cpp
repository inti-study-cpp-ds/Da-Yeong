#include<iostream>

using namespace std;

int main()
{
	for (int i = 2; i < 10; i++)
	{
		cout << i << "´Ü" << endl;
		for (int j = 1; j < 10; j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	return 0;
}