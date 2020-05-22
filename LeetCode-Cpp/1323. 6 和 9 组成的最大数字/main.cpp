#include<stdc++.h>
using namespace std;

class Solution {
public:
	int maximum69Number(int num) {
		string ret;
		int ans = 0;
		ret = to_string(num);
		for (int i=0;i<ret.size();i++)
		{
			if (ret[i] == '6')
			{
				ret[i] = '9';
				break;
			}
				
			
		}
		stringstream ss;
		ss.str(ret);
		ss >> ans;
		return ans;
	}
};
int main()
{

	
	return 0;
}