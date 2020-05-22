#include<iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
	int findNumbers(vector<int>& nums) {
		int ans = 0;
		string ret;
		for (int i=0;i<nums.size();i++)
		{
			ret = to_string(nums[i]);
			if (ret.size() % 2 == 0)
				ans++;
		}
		return ans;
	}
};

int main()
{

	
	return 0;
}