#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
		int cnt = 0;
		int size = s.size();
		int pivot = size;
		int innerPivot;
		int innerSize;
		int tmpSize;
		int i, j, num;
		std::string str;
		string::iterator head, tail, tmpHead, tmpTail;
		str.reserve(1024);

		while(pivot)
		{
			cnt = size - pivot;
			innerPivot = cnt;
			num = 0;
			while(num <= cnt)
			{
				head = s.begin();
				tail = s.end();
				i = 0;
				j = 0;
				while(i < num)
				{
					++head;
					++i;
				}
				while(j < innerPivot)
				{
					--tail;
					++j;
				}

				if (*head == *(tail - 1))
				{

				}
				--innerPivot;
				++num;
			}
			--pivot;
		}
		str.push_back(s.front());
		return str;
    }

	bool isPalindrome(string s)
	{
		auto head = s.begin();
		auto tail = s.end();
		int size = s.size();
		--tail;

		if (size % 2)
		{
			while (head != tail)
			{
				if (*head != *tail)
					return false;
				++head;
				--tail;
			}
		}
		else
		{
			size /= 2;
			while (size)
			{
				if (*head != *tail)
					return false;
				++head;
				--tail;
				--size;
			}
		}
		return true;
	}
};





int main()
{
	Solution sol;


	cout << sol.longestPalindrome("abbac");
	// cout << sol.longestPalindrome("qkajbumzdzkiplmbcpnhbzweoevrvbptpozhtrfntszvnwbdahvkykmezrwruhvvslngruvwqebudtfxgpbmwefczwrecpqjegxkqknpobzkemmtruidulnxgntjxcmxtwmlxhzmbqfqylwvzjyojhfawwuupiipvxjiyxkqvsxbhgzzegfkdihizvjoxzrmeorikzsdyphbujaqmykrfblneqmwwxsoonzsgvligqxrrumspylfvquklbanjhkudlprwoycpxdsueokruoofyubirbhbyfuvgllijywuqmkcsfjttbnmelrylivkefllepgxnoeummujbaoyvryukyoumvuxezegpwgmwsupjuaarvbtbfmisrifjadqjypmzipvjysgakvjhfeaqwpsqijvqibshctuabwqqsjwotjopahoaptmxkwerkjkmwiodgblhtnhykzjuaoluoyokroxuvqtkpggfanzabgjejdfsgybhxbscubdpufywbxgutheskuhixasnksoayjngvhfoxxclykfobrwxjwgefarzczvptlfrgrtrjcemaeihpukhbeoezgvrwxgyhpkkfvmfvquwtswkdwqqgrgasopladdnteulqofmjhewpghkibbrewnhdllfppctgkfkoedoiwqocnpvfviochrokrgrzthrvyhqfsrzyyvqwkhuzsrkfaympcdodkwaojnghzytkhf");
}