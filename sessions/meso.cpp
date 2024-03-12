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

int meso::get_length(){
	int month1 = std::stoi(this->sessions[0].date.substr(0,1)),
	    day1 = std::stoi(this->sessions[0].date.substr(2,3)),
	    year1 = std::stoi(this->sessions[0].date.substr(4,5)),
	    month2 = std::stoi(this->sessions[this->sessions.size()-1].date.substr(0,1)),
	    day2 = std::stoi(this->sessions[this->sessions.size()-1].date.substr(2,3)),
	    daycount;
	for(int i = month1; i < month2; ++i){
		switch(i){
			case 1:
				daycount += 31;
			case 2:
				year = std::stoi(this->sessions[this->sessions.size()

	};
	return daycount;
};



