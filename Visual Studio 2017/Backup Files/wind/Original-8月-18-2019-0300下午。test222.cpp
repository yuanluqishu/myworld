
#include <iostream>
#include <stack>
#include <cstring>
#include <algorithm>
using namespace std;

void main() {

	// 请在这里补充代码，完成本关任务
	/********* Begin *********/
	stack<char>s1, s2;
	//// int sum=0;
	char s[50] = { 0 };
	//char x = getchar();
	//s[0] = x;
	//int i = 1;
	//while (x)
	//{
	//	cin >> x;
	//	s[i] = x;
	//	i++;
	//}
	int k = 0;
	//sizeof(s);
	for (int i = k - 1; i >= 0; i--)
	{
		char c = s[k];
		if (c >= '0'&&c <= '9')s2.push(c);
		else if (c == '(')
		{
			while (s1.top() != ')')
			{
				s2.push(s1.top());
				s1.pop();
			}
			s1.pop();
		}
		else
		{
			while (c != 0)
			{
				if (s1.empty() || s1.top() == ')')
				{
					s1.push(c);
					c = 0;
				}
				else if (s1.top() <= c)
				{
					s1.push(c);
					c = 0;
				}
				else
				{
					s2.push(s1.top());
					s1.pop();

				}
			}
		}

	}
	while (!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}

	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();

	}
	/********* End *********/

	
}
