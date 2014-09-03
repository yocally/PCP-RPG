#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

//Variables
int menu = 1;

//Reterns


//External Variables
::string rRe();


//External declarations
void initFolders();
void newSave();
void load();
void quit();
void menus(string folder, string menus);

void indent(int i) {
	//Function for creating indentations
	for (int x = 0; x < i; ++x) {
		::cout << ::endl;
	}
}

void checkmenu() {
	if (menu == 1) {
		menus("Menus", "Mainmenu");;
	}
	if (menu == 2) {
		menus("Menus", "Credits");;
	}
}

void checkArgs() {
	if (menu == 1) {
		if (rRe() == "n") {
			newSave();
		}
		if (rRe() == "l") {
			load();
		}
		if (rRe() == "o") {

		}
		if (rRe() == "h") {
			menu = 2;
		}
		if (rRe() == "q") {
			quit();
		}
	}
	if (menu == 2) {
		if (rRe() == "b") {
			menu = 1;
		}
	}
}
