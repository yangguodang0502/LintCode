/*
365 二进制中有多少个1

计算在一个 32 位的整数的二进制表式中有多少个 1.

样例
给定 32 (100000)，返回 1

给定 5 (101)，返回 2

给定 1023 (111111111)，返回 9
*/

class Solution {
public:
	/**
	* @param num: an integer
	* @return: an integer, the number of ones in num
	*/
	int countOnes(int num) {
		// write your code here
		int count = 0;
		while (num)
		{
			++count;
			num = num & (num - 1);
		}//while

		return count;
	}

	int countOnes1(int num)
	{
		int count = 0;
		unsigned int flag = 1;
		while (flag != 0)
		{
			if (num & flag)
			{
				++count;
			}
			flag <<= 1;
		}
	}
};