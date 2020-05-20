// 文件名：main
// 创建时间：2020/5/20 16:52:51
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
	int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
		int ret = 0;
		int len = startTime.size()-1;
		for (int i=0;i<len;i++)
		{
			if (startTime[i] <= queryTime && endTime[i] >= queryTime)
			{
				ret++;
			}
		}
		return ret;
	}
};



int main()
{

	return 0;
}