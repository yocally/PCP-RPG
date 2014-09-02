#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>

using namespace std;



void initFolders() {
	system("mkdir Saves");
	::cout << "Folder Init completed\n";
}

void wrouts(::string name, int HP, int GP, ::string GM) {
	ofstream wrout("Saves\\" + name + ".pcps");
	if (wrout.is_open()) {
		wrout << "Name:" << name << "\n";
		wrout << "HP:" << HP << "\n";
		wrout << "GP:" << GP << "\n";
		wrout << "Gamemode:" << GM << "\n";
		wrout.close();
	}
	else ::cerr << "Unable to open file";
}
void wrins(::string name, int HP, int GP,::string GM) {
	ifstream wrin;
	wrin.open("Saves\\" + name + ".pcps");
	wrin >> name >> HP >> GP >> GM;
	name.erase(0, 5);
	GM.erase(0, 9);
	wrin.close();
}