#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits)
	{
		vector<int>ans;
		string s;
		for (int i=0;i<digits.size();i++)
		{
			s += to_string(digits[i]);
		}
		istringstream is(s);   
		int num;
		is >> num;
		num += 1;
		while(num)
		{
			int j = num % 10;
			num /= 10;
			ans.push_back(j);
		}
		vector<int>ret;
		for (int i=ans.size();i>=0;i--)
		{
			ret.push_back(ans[i]);
		}
		return ret;
	}
};
int main()
{

	
	return 0;
}