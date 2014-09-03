#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Variables


//Reterns


//External Variables
::string rRe();


//External declarations
void initFolders();
void newSave();
void load();
void quit();

void indent(int i) {
	//Function for creating indentations
	for (int x = 0; x < i; ++x) {
		::cout << ::endl;
	}
}

int menu = 1;

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

void checkmenu() {
	if (menu == 1) {
		menumain();
	}
	if (menu == 2) {
		helpcred();
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
