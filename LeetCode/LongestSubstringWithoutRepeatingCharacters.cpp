#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length;
		int longest = 0;
		vector<bool> data;
		data.reserve(128);

		for(auto it = s.begin(); it != s.end(); ++it)
		{
			auto tmp = it;
			length = 0;

			while (it != s.end() && data[*it] == false)
			{
				data[*it] = true;
				++it;
				++length;
			}

			if (length > longest)
				longest = length;

			it = tmp;
			length = 0;
			for(int i = 0; i < 128; ++i)
				data[i] = false;
			while (it != s.end() && data[*it] == false)
			{
				data[*it] = true;
				++it;
				++length;
			}

			if (length > longest)
				longest = length;

			it = tmp;
			for(int i = 0; i < 128; ++i)
				data[i] = false;
		}

		return longest;
    }
};


int main()
{
	Solution solution;

	cout << solution.lengthOfLongestSubstring("abcabcbb");
	cout << endl;
	cout << solution.lengthOfLongestSubstring("bbbbb");
	cout << endl;
	cout << solution.lengthOfLongestSubstring("pwwkew");
	cout << endl;
	cout << solution.lengthOfLongestSubstring("");
	cout << endl;
}
