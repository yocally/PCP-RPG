
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

namespace RPG
{
	::string re;
	bool isQuit = false;
};

using namespace RPG;

int main()
{
	while (!::isQuit)
	{
		std::getline(std::cin, ::re);
		if (::re == "quit")
		{
			::isQuit = true;
			break;
		}
		std::cout << ::re << std::endl;
	}
}