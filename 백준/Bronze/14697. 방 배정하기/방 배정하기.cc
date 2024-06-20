#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int A = 0;
	int B = 0;
	int C = 0;
	int N = 0;
	cin >> A >> B >> C >> N;

	for (int a = 0; a <= 50; a++)
	{
		for (int b = 0; b <= 50; b++)
		{
			for (int c = 0; c <= 50; c++)
			{
				if (A * a + B * b + C * c == N)
				{
					cout << 1;
					return 0;
				}
			}
		}
	}

	cout << 0;


	return 0;
}