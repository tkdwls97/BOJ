#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cin >> num1 >> num2 >> num3;

	int result = (num2 + num3) / 60;
	if (result > 0)
	{
		num2 = (num2 + num3) % 60;

		while (result != 0)
		{
			++num1;
			if (num1 == 24)
			{
				num1 = 0;
			}
			--result;
		}
		cout << num1 << " " << num2;
	}
	else
	{
		num2 += num3;
		cout << num1 << " " << num2;
	}


	return 0;
}