#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums)
	{
		vector<int>ans;
		
			for (int i=0;i<nums.size();i++)
			{
				for (int j=0;j<nums.size();j++)
				{
					if (nums[i]==j)
					{
						continue;
					}
					else
					{
						ans.push_back(j);
					}
				}
			}
			return ans;
	}
};
int main()
{

	
	return 0;
}