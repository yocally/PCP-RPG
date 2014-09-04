#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

using namespace std;

//Variables

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

//Reterns


//External Variables


//External declarations


void makefolder(string folder) {
	string temp = "mkdir " + folder;
		system(temp.c_str());
}

void initFolders() {
	makefolder("Saves");
	makefolder("Gamemodes");
	makefolder("Menus");
	::cout << "Folder Init completed\n";
}

void menus(string folder, string mmenus) {
	string menuout;
	ifstream menu;
	menu.open(folder + "\\" + mmenus + ".pcpm");
	if (menu.is_open())
	{
		while (getline(menu, menuout))
		{
			cout << menuout <<endl;
		}
		cout << "			   Input:";
	}
	else cout << "installed wrong";
	menu.close();
}

void wrouts(::string name, ::string GM) {
	ofstream main("Saves\\" + name + "\\main.pcps");
	ofstream stats("Saves\\" + name + "\\stats.pcps");
	ofstream location("Saves\\" + name + "\\location.pcps");
	ofstream condtion("Saves\\" + name + "\\condtion.pcps");
	ofstream quests("Saves\\" + name + "\\quests.pcps");
	ofstream inventory("Saves\\" + name + "\\inventory.pcps");
	if (main.is_open()) {
		main << "Name:" << name << "\n";
		main << "Gamemode:" << GM << "\n";
		main.close();
	}
	else ::cerr << "Unable to open main file";
}
void wrins(::string name, ::string GM) {
	ifstream main;
	main.open("Saves\\" + name + "\\main.pcps");
	main >> name >> GM;
	name.erase(0, 5);
	GM.erase(0, 9);
	main.close();

}

void save() {
	wrouts(charinfo::nameIn, charinfo::GMIn);
}
void newSave() {
	::cout << "		      Save::Name:";
	getline(cin, charinfo::nameIn);
	::cout << "		  Gamemode::Name:";
	getline(cin, charinfo::GMIn);
	makefolder("Saves\\" + charinfo::nameIn);
	save();
}
void load() {
	::cout << "		      Load::Name:";
	getline(cin, charinfo::nameIn);
	wrins(charinfo::nameIn, charinfo::GMIn);
}