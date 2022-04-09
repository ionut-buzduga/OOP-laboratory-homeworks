#include <iostream>
#include <cmath>
using namespace std;

int f(float n, bool isRoundedTo100)
{
	if (isRoundedTo100 == false)
		return round(n);
	else
	{
		int t = round(n);
		if (t % 100 < 50)
			while (t % 100)
				t--;
		else
			while (t % 100)
				t++;

		return t;
	}

}

int main()
{
	float n;
	cout << "Give n:";
	cin >> n;
	cout << f(n,true);

	return 0;
}