#include "meso.h"
#include <iostream>

std::vector<session> meso::get_sessions(){
	return this->sessions;
};

void meso::append_session(session today){
	this->sessions.push_back(today);
};

void meso::edit_session(std::string date, session ammend){
	for(int i = 0; i < this->sessions.size(); ++i){
		if(this->sessions[i].date.compare(date) == 0){
			std::cout << "Session found:" + date << std::endl;
			this->sessions[i] = ammend;
		};

};
};



