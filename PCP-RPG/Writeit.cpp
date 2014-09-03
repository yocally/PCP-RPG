#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

using namespace std;

//Variables


//Reterns


//External Variables


//External declarations


//Character information
namespace charinfo {
	::string nameIn;
	::string GMIn;
	int LVLIn;
	int HPIn;
	int GPIn;
	int STRIn;
	int DEXIn;
	int INTIn;
	int CHRIn;
	int WILIn;
	int WISIn;
	int REPIn;
	int POTIn;
	int LuckIn;
}

void initFolders() {
	system("mkdir Saves");
	system("mkdir Gamemode");
	system("mkdir Menu");
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