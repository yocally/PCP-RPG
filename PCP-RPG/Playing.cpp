#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Variables
int timeh;
int timem;
int timeap;



//Reterns


//External Variables



//External declarations


::string clock(){
	::string ampm;
	::string vclock = "[" + timeh + ':' + timem + ']';
	if (timeap = 1) {
		ampm = "[AM]";
	}
	else {
		ampm = "[PM]";
	}
	while (timem >= 60){
		timem -= 60;
		timeh++;
	}
	while (timeh >= 13) {
		timeh -= 12;

	}

	return vclock + ampm;
}

void toggle(bool stuff) {
	if (stuff = true) {
		stuff = false;
	}
	if (stuff = false) {
		stuff = true;
	}
}


