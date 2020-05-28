#include<stdc++.h>
using namespace std;
class Solution {
public:
	bool checkIfExist(vector<int>& arr)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = 0; j < arr.size(); j++)
			{
				if (arr[i]==arr[j]*arr[j])
				{
					return true;
				}
			}
		}
		return false;
	}
};

int main()
{

	
	return 0;
}