#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << ((a % c) + (b % c)) % c << '\n';
	cout << (a * b) % c << '\n';
	cout << ((a % c) * (b % c)) % c << '\n';
}