#include <iostream>
#include <set>


int main()
{
	int N, M;
	int same = 0;
	std::string str;
	std::set<std::string> mySet;
	std::cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> str;
		mySet.insert(str);
	}
	for (int i = 0; i < M; ++i)
	{
		std::cin >> str;
		if (mySet.find(str) != mySet.end())
			++same;
	}

	std::cout << same;
	return 0;

}
