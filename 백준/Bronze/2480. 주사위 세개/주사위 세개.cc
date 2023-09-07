#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num1 == num3)
	{
		cout << 10000 + num1 * 1000;
	}
	else if (num1 != num2 && num1 != num3 && num2 != num3)
	{
		if (num1 > num2 && num1 > num3)
		{
			cout << num1 * 100;
		}
		else if (num1 < num2 && num2 > num3)
		{
			cout << num2 * 100;
		}
		else
		{
			cout << num3 * 100;
		}

	}
	else
	{
		if (num1 == num2)
		{
			cout << 1000 + num1 * 100;
		}
		else if (num1 == num3)
		{
			cout << 1000 + num1 * 100;
		}
		else
		{
			cout << 1000 + num2 * 100;
		}
	}


	return 0;
}