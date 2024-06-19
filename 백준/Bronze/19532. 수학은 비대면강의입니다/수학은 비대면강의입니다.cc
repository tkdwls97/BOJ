#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	cin >> a >> b >> c >> d >> e >> f;


	for (int y = -999; y <= 999; y++)
	{
		for (int x = -999; x <= 999; x++)
		{
			int result1 = ((a * x) + (b * y));
			int result2 = ((d * x) + (e * y));

			if (result1 == c && result2 == f)
			{
				cout << x << " " << y;
				return 0;
			}
		}
	}


	return 0;
}