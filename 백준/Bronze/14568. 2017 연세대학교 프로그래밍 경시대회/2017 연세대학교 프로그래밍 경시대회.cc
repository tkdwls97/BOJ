#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	int result = 0;
	cin >> N;

	if (N < 6)
	{
		cout << result;
		return 0;
	}

	for (int A = 2; A <= N; A += 2)
	{
		for (int B = 1; B <= N; B++)
		{
			for (int C = 3; C <= N; C++)
			{
				if (A + B + C == N && A % 2 == 0 && B + 2 <= C)
				{
					++result;
				}
			}
		}

	}

	cout << result;

	return 0;
}