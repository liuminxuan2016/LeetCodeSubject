#include<stdc++.h>
using namespace std;


class Solution {
public:
	bool isArmstrong(int N) {
		int tmp = N;
		int sum = 0;
		
		string s = to_string(N);
		int index = s.length();
		while (tmp)
		{
			int curNum = tmp % 10;
			tmp /= 10;
			int ret = 1;
			for (int i = 0; i < index; i++)
			{
				ret *= curNum;
			}
			sum += ret;
		}
		if (sum == N)
			return true;
		return false;
	}
};
int main()
{
	Solution S;
	S.isArmstrong(153);
	
	return 0;
}