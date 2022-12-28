#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t m,n;
		m = nums1.size();
		n = nums2.size();
		size_t len = m + n;

		multimap<int, char> merge;
		for(auto it = nums1.begin(); it != nums1.end(); ++it)
			merge.insert(pair<int, char>(*it, 0));
		for(auto it = nums2.begin(); it != nums2.end(); ++it)
			merge.insert(pair<int, char>(*it, 0));
		
		if (len % 2)
		{
			len /= 2;
			auto it = merge.begin();
			while (len)
			{
				++it;
				--len;
			}
			return it->first;
		}
		len /= 2;
		auto sit = merge.begin();
		while (--len)
		{
			++sit;
		}

		int val = sit->first;
		++sit;

		return (val + sit->first) / 2.0;

    }
};

int main()
{
	Solution problem;

	vector<int> nums1, nums2;
	nums1.push_back(1);
	nums1.push_back(2);
	nums2.push_back(3);
	nums2.push_back(4);

	cout << problem.findMedianSortedArrays( nums1, nums2 ) << endl;
	return 0;
}