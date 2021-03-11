#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		int c;
		cin >> c;
		cout << c;
	}
	else if (n > 1)
	{
		int f[n];
		for (int i = 0;i < n;i++) cin >> f[i];
		for (int i = 0;i < n - 1;i++)
		 for (int j = i + 1;j < n;j++)
		 	if (f[i] > f[j])
		 	{
		 		int sw = f[i];
		 		f[i] = f[j];
		 		f[j] = sw;
		 	}
		for (int i = 0;i < n;i++) cout << f[i] << " ";
	}
	return 0;
}
