#include<stdc++.h>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x)
	{
		string ret = to_string(x);
		for (int i=0,j=ret.length();i<ret.length(),j>=0;i++,j--)
		{
			if (ret[i] == ret[j])
				continue;
			else
				return false;
		}
		return true;
	}
};
int main()
{

	
	return 0;
}