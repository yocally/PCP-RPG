#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//External Variables
::string re;
bool isQuit = false;

//External Declarations
void initFolders();
void save();
void newSave();
void load();
void menumain();
void helpcred();
void checkArgs();
void checkmenu();
void run();

void cls() {
	system("CLS");
}

void run(){
	initFolders();
	while (!::isQuit) {
		cls();
		checkmenu();
		::getline(::cin, ::re);
		checkArgs();
	}
}

int main() {
	run();
}