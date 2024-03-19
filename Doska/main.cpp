#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	for (int i = 8; i != 0; i--)
	{
		
		for (int j = 8; j != 0; j--)
		{
			if (j == 8)
			{
				cout << 'a' << i << "  ";
			}
			else if (j == 7)
			{
				cout << 'b' << i << "  ";
			}
			else if (j == 6)
			{
				cout << 'c' << i << "  ";
			}
			else if (j == 5)
			{
				cout << 'd' << i << "  ";
			}
			else if (j == 4)
			{
				cout << 'e' << i << "  ";
			}
			else if (j == 3)
			{
				cout << 'f' << i << "  ";
			}
			else if (j == 2)
			{
				cout << 'g' << i << "  ";
			}
			else if (j == 1)
			{
				cout << 'h' << i << "  ";
			}
			
		}
		cout << "\n\n";
	}
}