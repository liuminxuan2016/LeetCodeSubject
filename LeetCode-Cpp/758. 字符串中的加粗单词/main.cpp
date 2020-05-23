#include<stdc++.h>
using namespace std;

class Solution {
public:
	string boldWords(vector<string>& words, string S)
	{
		string ans;
		for (int i=0;i<S.length();i++)
		{
			for (int j=0;j<words.size();j++)
			{
				for (int k=0;k<words[j].size();k++)
				{
					if (words[j][k]==S[i])
					{
						ans += "<b>";
						ans += words[j][k];
						ans += "</b>";
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