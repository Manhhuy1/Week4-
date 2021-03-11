#include <iostream>
#include <string>
using namespace std;
void rev(string print,char a[],int length,int n)
{
	for (int i = 0;i < n;i++)
	 {
	 	print += a[i];
	 	if (length == 2 || length == 3) cout << print << " ";
	 	if (length <= 2) rev(print,a,length + 1,n);
	 	print.erase(print.length() - 1);
	 }
}
using namespace std;
int main()
{
	string s;
	cin >> s;
	char a[s.length()];
	for (int i = 0;i < s.length();i++) a[i] = s[i];
	string print;
	rev(print,a,1,s.length());
	return 0;
}
