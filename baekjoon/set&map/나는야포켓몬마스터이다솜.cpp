#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <cstdlib>

int main()
{
	int N, M;
	std::map<std::string, int> mapData;
	std::vector<std::pair<std::string, int> > vectorData;
	std::string str;
	std::pair<std::string, int> tmpPair;


	std::cin >> N >> M;
	++N;

	vectorData.reserve(N);
	for(int i = 1; i < N; ++i)
	{
		std::cin >> str;
		tmpPair = std::make_pair(str, i);
		mapData.insert(tmpPair);
		vectorData.push_back(tmpPair);
	}

	for(int i = 0; i < M; ++i)
	{
		std::cin >> str;
		try
		{
			N = std::stoi(str);
			std::cout << vectorData[N].first;
		}
		catch(...)
		{
			std::cout << mapData.find(str)->second;
		}
		std::cout << "\n";
	}
	return 0;
}