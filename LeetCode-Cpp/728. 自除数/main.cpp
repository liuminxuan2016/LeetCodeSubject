#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right)
	{
		vector<int>ans;
		
		for (int i = left; i <= right; i++)
		{
			int m = i;
			int flag = 0;
			int sig = 0;
			while (m)
			{
				flag++;
				int ret = m % 10;
				m /= 10;
				if (ret==0)
				{
					break;
				}
				else if (i%ret==0)
				{
					sig++;
				}
				else
				{
					sig--;
				}
			}
			if (flag==sig)
			{
				ans.push_back(i);
			}
		}
		return ans;
	}
};
int main()
{
	Solution S;
	vector<int>ans = S.selfDividingNumbers(1, 22);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i]<<" ";
	
	return 0;
}