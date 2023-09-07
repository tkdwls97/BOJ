#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int _a, int _b)
{
	return _a < _b;
}

int main()
{
	int arr[1000] = {};
	int num = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}


	sort(arr, arr + num, compare);

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << '\n';
	}



	return 0;
}