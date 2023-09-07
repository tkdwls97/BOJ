#include <iostream>

using namespace std;

int main()
{

	int count = 0;
	cin >> count;

	float arr[1000] = {};
	float result = 0.0f;
	float max = 0.0f;
	float min = 1000.0f;
	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < count; i++)
	{
		arr[i] = arr[i] / max * 100;
		result += arr[i];
	}

	cout << result / count;

	return 0;
}