#include <set>
#include <vector>
#include <iostream>



int main()
{
	int count;
	int num;
	std::vector<bool> myCard;
	std::vector<int> testCard;

	myCard.reserve(20000000);
	testCard.reserve(500000);

	std::cin >> count;
	while (count)
	{
		std::cin >> num;
		num += 10000000;
		myCard[num] = true;
		--count;
	}


	std::cin >> count;
	while (count)
	{
		std::cin >> num;
		testCard.push_back(num);
		--count;
	}


	for(auto it = testCard.begin(); it != testCard.end(); ++it)
	{
		if (myCard[*it + 10000000])
			std::cout << 1;
		else
			std::cout << 0;

		if (*it != testCard.back())
			std::cout << " ";
	}
	return 0;
}