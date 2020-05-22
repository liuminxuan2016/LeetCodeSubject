#include<iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
	int subtractProductAndSum(int n) {
		int pro = 1;
		int sum = 0;
		while (n)
		{
			int m = n % 10;
			n /= 10;
			pro *= m;
			sum += m;
		}
		return pro - sum;
	}
};

int main()
{

	return 0;
}