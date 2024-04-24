#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

	int num;
	cin >> num;
	int ans = 0;
	while (num >= 0)
	{
		if (num % 5 == 0)
		{	
			ans += (num / 5);
			cout << ans << endl;
			return 0;
		}
		num -= 3;	
		ans++;	
	}

	cout << -1 << endl;

	return 0;
}