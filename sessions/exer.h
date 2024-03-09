#include <utility>
#include <vector>
enum activity {
	bench, squat, latpull, latraise, bentrow, calfraise, bicurl 
};

struct exercise {
	activity exercise;
	std::vector<std::pair<int,int>> sets; 
}; 
