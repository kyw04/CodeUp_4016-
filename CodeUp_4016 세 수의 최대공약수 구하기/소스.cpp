#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b)
		return gcd(b, a % b);
	return a;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << gcd(gcd(a, b), c);
	return 0;
}