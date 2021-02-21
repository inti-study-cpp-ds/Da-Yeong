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
			cout << "학생 " << i << "의 id 입력 : ";
			cin >> id[i];
			cout << "학생 " << i << "의 grade 입력 : ";
			cin >> grade[i];
			cout << "학생 " << i << "의 name 입력 : ";
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
		cout << "평점 평균 : " << sum / size << endl;
	}

};

int main()
{

	return 0;
}