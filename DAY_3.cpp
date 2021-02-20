#include<iostream>

using namespace std;

class Machine {
private:
	int money_in, money_add, money_select;
	// 고객이 넣은 돈, 추가로 넣은 돈, 선택한 제품의 가격
	int type[4] = { 1000,1200,1500,1800 }; // 각각 제품 가격
	int select; // 선택한 제품 번호
	int use_c, use_m;

public:
	void money_put()
	{
		cout << "돈을 넣으세요." << endl;
		cin >> money_in;
		cout << endl;
	}

	void select_sort()
	{
		cout << "제품 번호를 고르세요." << endl;
		cout << "1. 삼다수 " << type[0] << "원" << endl;
		cout << "2. 코카콜라 " << type[1] << "원" << endl;
		cout << "3. 파워에이드 " << type[2] << "원" << endl;
		cout << "4. 스프라이트 " << type[3] << "원" << endl;
		do
		{
			cin >> select;
			cout << endl;
			if (select < 1 || select>4)
			{
				cout << "올바른 제품 번호를 입력해주세요" << endl;
			}
		} while (select < 1 || select > 4);
		money_select = type[select-1];
	}

	void check()
	{
		while (money_select > money_in)
		{
			cout << "돈이 부족합니다. 추가로 돈을 넣어주세요." << endl;
			cout << "부족한 돈 : " << money_select - money_in << "원" << endl;
			cout << endl;

			cout << "돈을 더 넣어주세요!" << endl;
			cin >> money_add;
			cout << endl;

			money_in += money_add;
		}
		cout << "이용해주셔서 감사합니다." << endl;
		cout << endl;
		money_in -= money_select;
	}

	void money_out()
	{
		cout << "거스름 돈 " << money_in << "원 입니다." << endl;
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
		cout << "자판기 이용을 원하면 1번, 원하지 않으면 2번을 눌러주세요." << endl;
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