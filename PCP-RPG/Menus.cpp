#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

//Variables
int menu = 1;
bool thing = true;

//Reterns


//External Variables
::string rRe();


//External declarations
void initFolders();
void newSave();
void load();
void quit();
void menus(string folder, string menus);
void loadFile(::string mode, ::string file);
void quick();

void indent(int i) {
	//Function for creating indentations
	for (int x = 0; x < i; ++x) {
		::cout << ::endl;
	}
}

void color(string color) {
	string temp = "mkdir " + color;
	system(temp.c_str());
}

void checkmenu() {
	if (menu == 1) {
		menus("Menus", "Mainmenu");
	}
	if (menu == 2) {
		menus("Menus", "Credits");
	}
	if (menu == 0) {

	}
}

void test() {
	string str;
	int in = 10;
	
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
		if (rRe() == "p") {
			loadFile("ctf", "Wolf");
			quick();
		}
		if (rRe() == "t") {
			test();
		}
	}
	if (menu == 2) {
		if (rRe() == "b") {
			menu = 1;
		}
	}
}
