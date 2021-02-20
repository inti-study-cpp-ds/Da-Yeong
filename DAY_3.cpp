#include<iostream>

using namespace std;

class Machine {
private:
	int money_in, money_add, money_select;
	// ���� ���� ��, �߰��� ���� ��, ������ ��ǰ�� ����
	int type[4] = { 1000,1200,1500,1800 }; // ���� ��ǰ ����
	int select; // ������ ��ǰ ��ȣ
	int use_c, use_m;

public:
	void money_put()
	{
		cout << "���� ��������." << endl;
		cin >> money_in;
		cout << endl;
	}

	void select_sort()
	{
		cout << "��ǰ ��ȣ�� ������." << endl;
		cout << "1. ��ټ� " << type[0] << "��" << endl;
		cout << "2. ��ī�ݶ� " << type[1] << "��" << endl;
		cout << "3. �Ŀ����̵� " << type[2] << "��" << endl;
		cout << "4. ��������Ʈ " << type[3] << "��" << endl;
		do
		{
			cin >> select;
			cout << endl;
			if (select < 1 || select>4)
			{
				cout << "�ùٸ� ��ǰ ��ȣ�� �Է����ּ���" << endl;
			}
		} while (select < 1 || select > 4);
		money_select = type[select-1];
	}

	void check()
	{
		while (money_select > money_in)
		{
			cout << "���� �����մϴ�. �߰��� ���� �־��ּ���." << endl;
			cout << "������ �� : " << money_select - money_in << "��" << endl;
			cout << endl;

			cout << "���� �� �־��ּ���!" << endl;
			cin >> money_add;
			cout << endl;

			money_in += money_add;
		}
		cout << "�̿����ּż� �����մϴ�." << endl;
		cout << endl;
		money_in -= money_select;
	}

	void money_out()
	{
		cout << "�Ž��� �� " << money_in << "�� �Դϴ�." << endl;
		cout << endl;
		money_in = 0;
	}
};

int main()
{
	Machine machine;
	while (1)
	{
		int c;
		cout << "���Ǳ� �̿��� ���ϸ� 1��, ������ ������ 2���� �����ּ���." << endl;
		cin >> c;
		cout << endl;
		if (c == 2)
		{
			break;
		}
		machine.money_put();
		machine.select_sort();
		machine.check();
		machine.money_out();
	}

	return 0;
}