#include<stdc++.h>
using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{
		int count = 0;
		int max = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 1)
			{
				count++;
			}
			else
			{
				if (max < count)
					max = count;
				count = 0;
			}
		}
		return max;
	}
};
int main()
{

	Solution S;
	vector<int>nums{1,0,1 };
	int a= S.findMaxConsecutiveOnes(nums);
	cout << a;
	return 0;
}