#include<stdc++.h>
using namespace std;

class Solution {
public:
	int thirdMax(vector<int>& nums)
	{
		int count = 2;
		while (count)
		{
			int tmp = 0;
			for (int i=0;i<nums.size();i++)
			{
				if (tmp < nums[i])
					swap(tmp, nums[i]);
			}
		}
	}
};
int main()
{

	
	return 0;
}