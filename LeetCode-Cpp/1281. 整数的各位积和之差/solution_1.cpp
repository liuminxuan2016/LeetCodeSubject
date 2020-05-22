#define _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include <vector>
#include <string>
using namespace std;
// https://leetcode-cn.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
	int subtractProductAndSum(int n)
	{
		int sum = 0;
		int pro = 1;
		char str[100000] = {'0'};
		string s;
		_itoa(n, str, 10);
		for (int i=0;i<100000;i++)
		{
			if (str[i]!='\0')
			{
				s += str[i];
			}
		}
		for (int j=0;j<s.size();j++)
		{
			if (s[j]=='9')
			{
				pro *= 9;
				sum += 9;
			}
			else if (s[j]=='8')
			{
				pro *= 8;
				sum += 8;
			}
			else if (s[j] == '7')
			{
				pro *= 7;
				sum += 7;
			}
			else if (s[j] == '6')
			{
				pro *= 6;
				sum += 6;
			}
			else if (s[j] == '5')
			{
				pro *= 5;
				sum += 5;
			}
			else if (s[j] == '4')
			{
				pro *= 4;
				sum += 4;
			}
			else if (s[j] == '3')
			{
				pro *= 3;
				sum += 3;
			}
			else if (s[j] == '2')
			{
				pro *= 2;
				sum += 2;
			}
			else if (s[j] == '1')
			{
				pro *= 1;
				sum += 1;
			}
			else if (s[j] == '0')
			{
				pro *= 0;
				sum += 0;
			}
		}
		return pro - sum;
	}
};
int main()
{

	Solution S;
	cout<<S.subtractProductAndSum(1111);
	return 0;
}