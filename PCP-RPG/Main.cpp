#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Variables
bool isQuit = false;
::string re;

//Reterns
::string rRe() {
	return re;
}

//External Variables


//External Declarations
void initFolders();
void checkArgs();
void checkmenu();

void cls() {
	system("CLS");
}



void quit(){
	isQuit = true;
}

void run(){
	initFolders();
	while (!::isQuit) {
		// cls();
		checkmenu();
		::getline(::cin, ::re);
		checkArgs();
	}
}

int main() {
	run();
}