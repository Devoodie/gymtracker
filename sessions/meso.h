#include "session.h"
#include <vector>

enum cycle{
	cut, maint, bulk
};

class meso{
	cycle type;
	std::vector<session> sessions;
	int length;

	public:
	    meso(cycle init, std::vector<session> workdays, int curlen){
		    sessions = workdays;
		    type = init; 
		    length = curlen; 
	    }
};

