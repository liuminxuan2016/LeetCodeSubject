#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> printNumbers(int n)
	{
		int MaxNum = 1;
		vector<int>ans;
		for (int i=n;i>=0;i--)
		{
			MaxNum +=int(pow(9,i));
		}
		return ans;
	}
};
int main()
{

	Solution s;
	s.printNumbers(3);
	return 0;
}