#include<stdc++.h>
using namespace std;

class Solution {
public:
	bool isPerfectSquare(int num)
	{
		int mid = 0;
		if (num%2==0)
		{
			mid = num / 2;
		}
		else if (num%2!=0)
		{
			mid = num / 2 + 1;
		}
		for (int i=1;i<mid;i++)
		{
			if ((i*i)==num)
			{
				return true;
			}
		}
		return false;
	}
};
int main()
{

	
	return 0;
}