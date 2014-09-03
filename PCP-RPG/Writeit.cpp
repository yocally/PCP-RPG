#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

using namespace std;

//Character information
namespace charinfo {
	::string nameIn;
	::string GMIn;
	int LVLIn;
	int HP;
	int GP;
}

void initFolders() {
	system("mkdir Saves");
	::cout << "Folder Init completed\n";
}

void wrouts(::string name, ::string GM) {
	ofstream wrout("Saves\\" + name + ".pcps");
	if (wrout.is_open()) {
		wrout << "Name:" << name << "\n";
		wrout << "Gamemode:" << GM << "\n";
		wrout.close();
	}
	else ::cerr << "Unable to open file";
}
void wrins(::string name, ::string GM) {
	ifstream wrin;
	wrin.open("Saves\\" + name + ".pcps");
	wrin >> name >> GM;
	name.erase(0, 5);
	GM.erase(0, 9);
	wrin.close();
}

void save() {
	wrouts(charinfo::nameIn, charinfo::GMIn);
}
void newSave() {
	::cout << "		      Save::Name:";
	getline(cin, charinfo::nameIn);
	::cout << "		  Gamemode::Name:";
	getline(cin, charinfo::GMIn);
	save();
}
void load() {
	::cout << "		      Load::Name:";
	getline(cin, charinfo::nameIn);
	wrins(charinfo::nameIn, charinfo::GMIn);
}