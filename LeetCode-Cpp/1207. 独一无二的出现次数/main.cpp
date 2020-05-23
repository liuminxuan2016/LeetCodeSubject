#include<stdc++.h>
using namespace std;

class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr)
	{
		vector<int>ans(arr.size(), 0);
		for (int i=-1000;i<1000;i++)
		{
			for (int j=0;j<arr.size();j++)
			{
				if (arr[j]==i)
				{
					ans[j]++;
				}
			}
		}
		for (int k=0;k<ans.size();k++)
		{
			for (int m=k+1;m<ans.size();m++)
			{
				if (ans[k] == ans[m])
					return false;
			}
		}
		return true;
	}
};
int main()
{
	Solution S;
	vector<int>arr{ 1,1,2,2,3,3 };
	S.uniqueOccurrences(arr);
	
	return 0;
}