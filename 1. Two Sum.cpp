// Date: 26/06/25
// Leetcode: https://leetcode.cn/problems/two-sum/description/
// Keywords: Two Sum, Hash Table, Unordered Map
// Idea:
// - Use an unordered_map to store the numbers and their indices as we iterate through the array.
// - Remember that the problem indicates that there is exactly two numbers that add up to the target.
// - For each number, check if the complement (target - current number) exists in the map.
// - If it does, we return the indices of the two numbers directly
// - If it doesn't, we insert the current number and its index into the map for future reference.
// Complexity:
// - Time: O(n), where n is the length of the input array.
// - Space: O(n) for storing the numbers and their indices in the unordered_map.

#include "HashTable.h"

vector<int> HashTable::_1_two_sum::main(vector<int>& nums, int target)
{
	unordered_map<int, int> map; // �洢���ֺ�������
	for (int i = 0; i < nums.size(); i++)
	{
		unordered_map<int, int>::iterator iter = map.find(target - nums[i]);
		if (iter != map.end())
		{
			return vector<int>{iter->second, i};
		}
		map.insert(pair<int, int>(nums[i], i));
	}
	return {};
}