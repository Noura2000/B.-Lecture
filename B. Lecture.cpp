#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string, string>mp;
	string a, b,s;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		mp.insert(make_pair(a, b));
	}
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		auto it = mp.find(s)->second;
		int len1 = s.size();
		int len2 = it.size();
		if (len1 <= len2)
			cout << s << " ";
		else
			cout << it << " ";
	}


	return 0;
}