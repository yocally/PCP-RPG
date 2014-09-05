#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

//Variables
::vector<::string> iteration;
namespace monsterInfo {
	::string name;
	::string desc;
	::string breed;
	::string gender;
	vector<int> HP;
	vector<int> SP;
	vector<int> MP;
	vector<int> atk;
	vector<int> def;
	::string atkType;
	::string atkTypeWeak;
	::string drops[];
}

//Reterns


//External Variables



//External declarations



::vector<::string> &split(const ::string &s, char delim, ::vector<::string> &elems) {
	::stringstream ss(s);
	::string item;
	while (::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

::vector<::string> split(const ::string &s, char delim) {
	::vector<::string> elems;
	split(s, delim, elems);
	return elems;
}

void cstringr(::string name, ::string ignore) {
	if (iteration.at(0) == ignore) {
		name = iteration.at(1);
	}
}

void cintr(::vector<int> number, ::string ignore) {
	if (iteration.at(0) == ignore) {
		::vector<string> s = split(iteration.at(1), ',');
		for (int j = 0; j < 1; j++) {
			number.push_back(atoi(s.at(j).c_str()));
		}
	}
}

void loadFile(::string mode, ::string file) {
	::string dir = "Gamemodes\\" + mode + "\\npcs\\monsters\\" + file + ".pcpnm";
	ifstream r;
	::vector<string> lines;
	r.open(dir);
	::string x;
	if (r.is_open()) {
		while (getline(r, x)) {
			lines.push_back(x);
		}
	}
	else {
		cout << "Error loading file: " << dir << endl;
		return;
	}


	
	// Now that we have the file loaded into the vector, we're going to parse it
	for (int v = 0; v < lines.size(); v++) {
		::vector<::string> iteration = split(lines.at(v), ':');

		cstringr(monsterInfo::name, "Name");
		cstringr(monsterInfo::desc, "Description");
		cstringr(monsterInfo::breed, "Breed");
		cstringr(monsterInfo::gender, "Gender");
		cstringr(monsterInfo::atkType, "Attack Type");
		cstringr(monsterInfo::atkTypeWeak, "Weakness");
		cintr(monsterInfo::HP, "HP");
		cintr(monsterInfo::SP, "SP");
		cintr(monsterInfo::MP, "MP");
		cintr(monsterInfo::MP, "Attack");
		cintr(monsterInfo::MP, "Defence");

		/*/if (iteration.at(0) == "Drops") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::def[j] = atoi(s.at(j).c_str());
			}
		}/*/
	}
}

void quick() {
	cout << monsterInfo::name << endl;
	cout << monsterInfo::desc << endl;
	cout << monsterInfo::breed << endl;
	cout << monsterInfo::gender << endl;
	cout << monsterInfo::HP[0] << endl;
	cout << monsterInfo::HP[1] << endl;
}