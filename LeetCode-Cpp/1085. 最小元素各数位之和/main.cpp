#include<stdc++.h>
using namespace std;

class Solution {
public:
	int sumOfDigits(vector<int>& A) {
		int sum = 0;
		for (int i=0;i<A.size();i++)
		{
			for (int j=i+1;j<A.size();j++)
			{
				if (A[i]>A[j])
				{
					int tmp = 0;
					tmp = A[i];
					A[i] = A[j];
					A[j] = tmp;
				}
			}
			
		}
		while (A[0])
		{
			int ans = A[0] % 10;
			A[0] /= 10;
			sum += ans;
		}
		return sum % 2 == 0 ? 1 : 0;
	}
};

int main()
{
	vector<int>arr{ 5,3,4,2,1 ,7,5,4,5,2,65};
	Solution S;
	S.sumOfDigits(arr);
	return 0;
}