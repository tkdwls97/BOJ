#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0;
	int B = 0;
	cin >> A >> B;


	for (int x = -1000; x <= 1000; x++)
	{
		int result = ((x * x) + (2 * A * x) + B);
		if (0 == result)
		{
			cout << x << " ";
		}
	}


	return 0;
}