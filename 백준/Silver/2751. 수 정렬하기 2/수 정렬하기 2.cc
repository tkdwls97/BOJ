#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int size = 0;
	vector<int> arrVec = {};

	cin >> size;

	int input = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> input;
		arrVec.push_back(input);
	}

	sort(arrVec.begin(), arrVec.end());

	for (int i = 0; i < size; i++)
	{
		cout << arrVec[i] << "\n";
	}

	return 0;
}