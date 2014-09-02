
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Character information
namespace charinfo {
	::string nameIn;
	int HP;
	int GP;
	::string GMIn;
}
//External declarations
void initFolders();
void wrouts(::string name, int HP, int GP, ::string GM);
void wrins(::string name, int HP, int GP, ::string GM);

namespace RPG
{
	::string re;
	bool isQuit = false;
	int menu = 1;

	void cls() {
		system("CLS");
	}

	namespace salo {

		void save() {
			wrouts(charinfo::nameIn, charinfo::HP, charinfo::GP, charinfo::GMIn);
		}
		void newSave() {
			::cout << "		      Save::Name:";
			getline(cin, charinfo::nameIn);
			charinfo::HP = 1000;
			charinfo::GP = 0;
			::cout << "		  Gamemode::Name:";
			getline(cin, charinfo::GMIn);
			save();
		}
		void load() {
			::cout << "		      Load::Name:";
			getline(cin, charinfo::nameIn);
			wrins(charinfo::nameIn, charinfo::HP, charinfo::GP, charinfo::GMIn);
		}
	}

	namespace menus {

		void indent(int i) {
			//Function for creating indentations
			for (int x = 0; x < i; ++x) {
				::cout << ::endl;
			}
		}

		namespace screens {

			void menumain() {
				::cout << +"		 ___  ___  ___           ___   ___  ___    " << ::endl;
				::cout << +"		| _ ||  _|| _ |  _____  | _ | | _ ||  _|   " << ::endl;
				::cout << +"		|  _|| |_ |  _| |_____| |   \\ |  _|| |_\\ " << ::endl;
				::cout << +"		|_|  |___||_|           |_|\\_\\|_|  |____|" << ::endl;
				indent(1);
				::cout << "				[N]ew Game" << ::endl;
				::cout << "				[L]oad Game" << ::endl;
				::cout << "				[O]ptions" << ::endl;
				::cout << "				[H]elp and Credits" << ::endl;
				::cout << "				[Q]uit" << ::endl;
				indent(12);					 //
				::cout << "			   Input:";
			}

			void helpcred() {
				::cout << +"		 ___  ___   ___  ___  ___  ___  ___    " << ::endl;
				::cout << +"		|  _|| _ | | __|| _ \\|   ||   |(  _|  " << ::endl;
				::cout << +"		| |_ |   \\ | _| ||_|| | |  | |  \\ \\ " << ::endl;
				::cout << +"		|___||_|\\_\\|___||___/|___| |_| |___) " << ::endl;
				indent(1);
				::cout << "		Created by: David (Diditch) Maring and (Yo) Cally Sibben" << ::endl;
				::cout << "		Game Mechanic Ideas by: Jesse (Fresty B.) Peterman" << ::endl;
				::cout << "		Thing by: Matthew (SaberJet) Carnahan" << ::endl;
				indent(2);
				::cout << "		type CTF into Gamemode to start the default gamemode" << ::endl;
				indent(10);					 //
				::cout << "			        [B]ack";
				indent(1);					 //
				::cout << "			   Input:";
			}
		}

		void checkmenu() {
			if (menu == 1) {
				screens::menumain();
			}
			if (menu == 2) {
				screens::helpcred();
			}
		}

		void checkArgs() {
			if (menu == 1) {
				if (re == "n") {
					salo::newSave();
				}
				if (re == "l") {
					salo::load();
				}
				if (re == "o") {

				}
				if (re == "h") {
					menu = 2;
				}
				if (re == "q") {
					isQuit = true;
				}
			}
			if (menu == 2) {
				if (re == "b") {
					menu = 1;
				}
			}
		}
	}
};

using namespace RPG;

int main() {
	initFolders();
	while (!::isQuit) {
		::cls();
		::menus::checkmenu();
		::getline(::cin, ::re);
		::menus::checkArgs();
	}
}