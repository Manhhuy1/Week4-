#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cin >> k >> n;
	int a[n];
	for (int i = 0;i < n;i++) cin >> a[i];
	if (k < a[0] || k > a[n - 1]) 
	{
		cout << "Not found";
		return 1;
	}
	else 
	{
		int begin = 0,end = n - 1;
		int pos = -1;
		while (true)
		{
			
			if (pos == (begin + end)/2) break;
			pos = (begin + end)/2;
			if (k == a[pos]) break;
			else if (k < a[pos]) end = pos;
			else if (k > a[pos]) begin = pos;
		}
		if (k == a[pos]) 
		{
			begin = pos;
			end = pos;
			while (a[begin - 1] == k) begin--;
			while (a[end + 1] == k) end++;
			for (int i = begin;i <= end;i++) cout << i << " ";				
		}
		else cout << "Not found";
	}
	return 0;
}
