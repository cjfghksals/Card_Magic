#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;
vector<vector<int>> card;

vector<int> v1{ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63 };
vector<int> v2{ 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
vector<int> v3{ 2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 34, 35, 38, 39, 42, 43, 46, 47, 50, 51, 54, 55, 58, 59, 62, 63 };
vector<int> v4{ 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
vector<int> v5{ 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47, 52, 53, 54, 55, 60, 61, 62, 63 };
vector<int> v6{ 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31, 40, 41, 42, 43, 44, 45, 46, 47, 56, 57, 58, 59, 60, 61, 62, 63 };

void make_vector(void)
{
	card.push_back(v1);
	card.push_back(v2);
	card.push_back(v3);
	card.push_back(v4);
	card.push_back(v5);
	card.push_back(v6);
}

void show_card(void)
{
	make_vector();
	int result = 0;
	char c = ' ';
	cout << "1 ~ 63������ ���� �� ������ ��� ���� �ϳ��� �������ּ���." << endl;
	system("pause");
	system("cls");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 1; j < 33; j++)
		{
			cout << card[i][j-1]<<"\t";
			if (j % 4 == 0)
			{
				cout << endl;
			}	
		}
		cout << "\n�����ص� ���ڰ� �ִٸ� Y, ���ٸ� �ƹ� Ű�� �Է����ּ���" << endl;
		c = _getch();
		if (c == 'y' || c == 'Y')
		{
			result += card[i][0];
		}
		system("cls");

	}
	cout << "����� ������ ���ڴ� " << result << " �Դϴ�." << endl;
}

void Start(void)
{
	//ī�� �� ���ڴ� 32���� ���ԵǾ��ִ�.
	char start = ' ';
	while (1)
	{
		cout << "������ �����Ͻðڽ��ϱ�? (Y/N)" << endl;
		start = _getch();
		if (start == 'Y' || start == 'y')
		{
			system("cls");
			show_card();
		}
		else if (start == 'N' || start == 'n')
		{
			break;
		}
		else
		{
			cout << "�߸� �Է��ϼ̽��ϴ�."<<endl;
			system("pause");
			system("cls");
		}
	}
	
}



int main(void)
{
	Start();
	
	return 0;
}