#include<iostream>

using namespace std;

template <typename T, size_t N>
class array
{
private:
	int id[5];
	double grade[5];
	string name[5];

public:
	T save(N size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "�л� " << i << "�� id �Է� : ";
			cin >> id[i];
			cout << "�л� " << i << "�� grade �Է� : ";
			cin >> grade[i];
			cout << "�л� " << i << "�� name �Է� : ";
			cin >> name[i];
		}
	}

	T average(N size)
	{
		T sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += grade[i];
		}
	}

	T print(N size)
	{
		cout << "���� ��� : " << sum / size << endl;
	}

};

int main()
{

	return 0;
}