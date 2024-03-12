#include "session.h"
#include <vector>


enum cycle{
	cut, maint, bulk
};

class meso{
	cycle type;
	std::vector<session> sessions;
	std::string length;

	public:
	    meso(cycle init, std::vector<session> workdays, std::string curlen){
		    sessions = workdays;
		    type = init; 
		    length = curlen; 
	    };
	    std::vector<session> get_sessions();
	    void append_session(session today); 
	    void edit_session(std::string date, session ammend); 


	    int get_length();

	    cycle get_cycle();
	    void set_cycle();
};

