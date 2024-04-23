#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{

	int input = 0;
	int count = 0;

	cin >> input >> count;

	int result = 0;

	int price = 0;
	int num = 0;

	for (int i = 0; i < count; i++)
	{
		cin >> price >> num;

		result += price * num;

	}

	if (result == input)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	

	return 0;
}