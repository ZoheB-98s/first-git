#include <iostream>
using namespace std;


//ceated a new branch zoheb and testing
//after adding gitignore

int max(int x, int y)
{
	if (x > y)
	return x;
	else
	return y;
}

int main() {
	int a = 10, b = 20;

	int m = max(a, b);

	cout << "m is " << m;
	return 0;
}
