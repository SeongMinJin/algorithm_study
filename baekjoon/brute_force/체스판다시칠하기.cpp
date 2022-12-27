#include <iostream>
#include <vector>


int main()
{

	int width = 0, height = 0;
	char chessMap[51][51];

	std::cin >> height >> width;
	// chessMap.reserve(height);
	for(int i = 0; i < height; ++i)
		std::cin >> chessMap[i];



	width -= 8;
	height -= 8;

	int cnt = 0;
	int minCnt = 2147483647;


	for(int i = 0; i <= height; ++i)
	{
		for(int j = 0; j <= width; ++j)
		{
			// 왼쪽 위가 WHITE인 경우.
			for(int y = 0; y < 8; ++y)
			{
				for(int x = 0; x < 8; ++x)
				{
					if ((x + y) % 2 == 0)
					{
						if (chessMap[y + i][x + j] == 'B')
							++cnt;
					}
					else
					{
						if (chessMap[y + i][x + j] == 'W')
							++cnt;
					}
				}
			}

			minCnt = cnt < minCnt ? cnt : minCnt;
			cnt = 0;

			// 왼쪽 위가 BLACK인 경우.
			for(int y = 0; y < 8; ++y)
			{
				for(int x = 0; x < 8; ++x)
				{
					if ((x + y) % 2 == 0)
					{
						if (chessMap[y + i][x + j] == 'W')
							++cnt;
					}
					else
					{
						if (chessMap[y + i][x + j] == 'B')
							++cnt;
					}
				}
			}
			minCnt = cnt < minCnt ? cnt : minCnt;
			cnt = 0;
		}
	}

	std::cout << minCnt;

	return 0;
}