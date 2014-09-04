#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

namespace monsterInfo {
	::string name;
	::string desc;
	::string breed;
	::string gender;
	int HP[2];
	int SP[2];
	int MP[2];
	int atk[2];
	int def[2];
	::string atkType;
	::string atkTypeWeak;
	::string drops[];
}

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
		if (iteration.at(0) == "Name") {
			monsterInfo::name = iteration.at(1);
		}
		if (iteration.at(0) == "Description") {
			monsterInfo::desc = iteration.at(1);
		}
		if (iteration.at(0) == "Breed") {
			monsterInfo::breed = iteration.at(1);
		}
		if (iteration.at(0) == "Gender") {
			monsterInfo::gender = iteration.at(1);
		}
		if (iteration.at(0) == "HP") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::HP[j] = atoi(s.at(j).c_str());
			}
		}
		if (iteration.at(0) == "SP") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::SP[j] = atoi(s.at(j).c_str());
			}
		}
		if (iteration.at(0) == "MP") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::MP[j] = atoi(s.at(j).c_str());
			}
		}
		if (iteration.at(0) == "Attack") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::atk[j] = atoi(s.at(j).c_str());
			}
		}
		if (iteration.at(0) == "Defence") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::def[j] = atoi(s.at(j).c_str());
			}
		}
		if (iteration.at(0) == "Attack Type") {
			monsterInfo::atkType = iteration.at(1);
		}
		if (iteration.at(0) == "Weakness") {
			monsterInfo::atkTypeWeak = iteration.at(1);
		}
		if (iteration.at(0) == "Drops") {
			::vector<string> s = split(iteration.at(1), ',');
			for (int j = 0; j < 1; j++) {
				monsterInfo::def[j] = atoi(s.at(j).c_str());
			}
		}
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