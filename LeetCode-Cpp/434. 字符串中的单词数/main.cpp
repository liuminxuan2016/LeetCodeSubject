#include<stdc++.h>
using namespace std;

class Solution {
public:
	int countSegments(string s)
	{
		int count = 0;
		for (int i=0;i<s.length();i++)
		{
			if (!(65 <= s[i] <= 90 || 97 <= s[i] <= 122))
				return 0;
			if (s[i] == ' ')
				count++;
		}
		count += 1;
		return count;
	}
};
int main()
{

	
	return 0;
}