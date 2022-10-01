
#include <iostream>
using namespace std;

/*
@author: chenjingru
@description: 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

*/
int main()
{
	int nums[10];
	int target;
	//input an array of intergers.
	cout << "Please key in an array of integers:" << endl;
	int len = 0;
	int a;
	char c;
	while (cin >> nums[len++]) {
		if (c = getchar() == '\n') break;
	}
	
	//input target.
	cout << "Please key in a target number:" << endl;
	cin >> target;


	int arr[2];
	int result;
	for (int i = 0; i < len; i++)
	{
		for (int j = i+1; j < len; j++)
		{
			result = nums[i] + nums[j];
			if (target == result) {
				arr[0] = i;
				arr[1] = j;
				cout << "[" << i << "," << j << "]" << endl;
			}

		}
	}

	return 0;
}
