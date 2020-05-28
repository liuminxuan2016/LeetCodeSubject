#include<stdc++.h>
using namespace std;
class Solution {
public:
	int twoSumLessThanK(vector<int>& A, int K)
	{
		vector<int>ans;
		int max = 0;
		 for (int i=0;i<A.size();i++)
		 {
			 for (int j=i+1;j<A.size();j++)
			 {
				 int sum = 0;
				 sum = A[i] + A[j];
			 	if (sum<K)
			 	{
					ans.push_back(sum);
			 	}
			 }
		 }
		if (ans.empty())
		{
			return -1;
		}
		else
		{
			for (int k=0;k<ans.size();k++)
			{
			int tmp = ans[k];
			if (max<tmp)
				{
					swap(max, tmp);
				}
			}
			return max;
		}
	}
};

int main()
{
	Solution S;
	vector<int>B{ 10,20,30 };
	cout<<S.twoSumLessThanK(B, 15);
	
	return 0;
}