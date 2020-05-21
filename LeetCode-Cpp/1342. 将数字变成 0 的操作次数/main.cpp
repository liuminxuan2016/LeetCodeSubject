#include<iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
	int numberOfSteps(int num) {
		int ans = 0;
		while(num)
		{
			if (num%2==0)
			{
				num /= 2;
				ans++;
			}
			else if(num%2!=0)
			{
				num -= 1;
				ans++;
			}
		}
		return ans;
	}
};

int main()
{

	
	return 0;
}