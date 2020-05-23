#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3)
	{
		vector<int>ans;
		for (int i=0;i<arr1.size();i++)
		{
			for (int j=0;j<arr2.size();j++)
			{
				for (int k=0;k<arr3.size();k++)
				{
					if (arr1[i] == arr2[j] && arr1[i] == arr3[k])
					{
						ans.push_back(arr1[i]);
					}
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