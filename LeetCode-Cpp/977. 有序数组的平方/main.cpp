#include<stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		vector<int>B(A.size(), 0);
		for (int i=0;i<A.size();i++)
		{
			B[i] = sqrt(A[i]);
		}
		sort(B.begin(), B.end());
		return B;
	}
};
int main()
{

	
	return 0;
}