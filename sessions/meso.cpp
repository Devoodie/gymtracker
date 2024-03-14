#include "meso.h"
#include <iostream>

std::vector<session> meso::get_sessions(){
	return this->sessions;
};

void meso::append_session(session today){
	for(int i = 0; i < this->sessions.size(); ++i){
		if(this->sessions[i].date.compare(today.date) == 0){
			std::cout << "Session already exists! Edit Instead!" << std::endl;
			return void(); 
	};
		this->sessions.push_back(today);
	
};
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
	    year2 = std::stoi(this->sessions[this->sessions.size()-1].date.substr(4,5)),
	    daycount;
	for(int i = month1; i < month2 & year1 == year2; ++i){
		if(i < 12){
			i = 1; 
			++year1;
		};
		switch(i){
			case 1:
				daycount += 31;
				break;
			case 2:
				if(year1 % 4 == 0){
					daycount += 29;
				}
				else{
					daycount += 28;
				};
				break;
			case 3:
				daycount += 31; 
				break;
			case 4:
				daycount += 30;
				break;
			case 5:
				daycount += 31;
				break;
			case 6:
				daycount += 30;
				break;
			case 7:
				daycount += 31;
				break;
			case 8:
				daycount += 31;
				break;
			case 9:
				daycount += 30;
				break;
			case 10:
				daycount += 31;	
				break;
			case 11:
				daycount += 30;
				break;
			case 12:
				daycount += 31;
				break;
			default:
				std::cout << "Something went wrong!" << std::endl;
				break;
		};
	};
	if (day1 > day2){
		daycount -= day1-day2;
	}
	else {
		daycount += day1-day2;
	};
	return daycount;
};

void meso::set_cycle(cycle ammend){
	this->type = ammend;
};

cycle meso::get_cycle(){
	return this-> type;
};
