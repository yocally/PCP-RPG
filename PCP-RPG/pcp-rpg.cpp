
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

namespace RPG
{
	::string re;
	bool isQuit = false;
	int menu = 1;
	namespace menus
	{
		void menuMain()
		{
			::cout << "PCP-RPG" << ::endl;
			::cout << ::endl;
			::cout << "[1]    New Game" << ::endl;
			::cout << "[2]    Load Game" << ::endl;
			::cout << "[3]    Options" << ::endl;
			::cout << "[4]    Credits" << ::endl;
			::cout << "[5]    Quit" << ::endl;
		}
		void checkMenu()
		{
			if (menu = 1)
			{
				menuMain();
			}
		}
	}
};

using namespace RPG;

int main()
{
	while (!::isQuit)
	{
		RPG::menus::checkMenu();
		std::getline(std::cin, ::re);
	}
}