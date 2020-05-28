#include<stdc++.h>
using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		for (int i=0;i<nums.size();i++)
		{
			for (int j=i+1;j<nums.size();j++)
			{
				if (nums[i] == nums[j])
					return nums[i];
			}
		}
		return 0;
	}
};
int main()
{

	
	return 0;
}