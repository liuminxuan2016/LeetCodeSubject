#include<stdc++.h>
using namespace std;

class Solution {
public:
	bool checkPerfectNumber(int num)
	{
		int sum = 0;
		for (int i=1;i<=num/2;i++)
		{
			if (num%i==0)
			{
				sum += i;
			}
		}
		if (sum == num)
			return true;
		else
			return false;
		
	}
};
int main()
{

	Solution S;
	cout<<S.checkPerfectNumber(28);
	return 0;
}