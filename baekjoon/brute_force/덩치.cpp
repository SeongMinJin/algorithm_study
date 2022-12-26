#include <iostream>
#include <vector>
#include <map>


int main()
{


	int num, weight, tall;
	std::vector<std::pair<int, int>> order;

	std::cin >> num;
	order.reserve(50);

	while (num)
	{
		std::cin >> weight >> tall;
		order.push_back(std::pair<int, int>(weight, tall));
		--num;
	}

	for (auto it = order.begin(); it != order.end(); ++it)
	{
		int rank = 1;
		for(auto jt = order.begin(); jt != order.end(); ++jt)
		{
			if ((*jt).first > (*it).first && (*jt).second > (*it).second)
			{
				++rank;
			}
		}
		std::cout << rank;
		if (it != order.end() - 1)
			std::cout << " ";
	}

	
	return 0;

}