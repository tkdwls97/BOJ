#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	int x = 0;
	int y = 0;

	cin >> N;

	vector<pair<int, int>> vec = {};

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}

	sort(vec.begin(), vec.end());

	int size = 0;
	int top = vec[0].second;
	int current = vec[0].first;

	for (int i = 1; i < N; ++i)
	{
		if (vec[i].second >= top)
		{
			size += (vec[i].first - current) * top;
			top = vec[i].second;
			current = vec[i].first;
		}
	}


	int currentY = vec[N - 1].second;
	current = vec[N - 1].first;

	for (int i = N - 2; i >= 0; i--)
	{
		if (vec[i].second >= currentY && currentY != top)
		{
			size += (current - vec[i].first) * currentY;
			currentY = vec[i].second;
			current = vec[i].first;
		}
	}

	cout << size + top;


	return 0;
}