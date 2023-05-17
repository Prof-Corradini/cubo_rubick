#ifndef DOCUMENTATION_H
#define DOCUMENTATION_H

#include "../cubo/cube.h"
#include <string>


namespace doc {
	void title(std::string);
	void subtitle(std::string);
	void paragraph(std::string paragraph, int color_num);
	std::string addFrame(std::string str);
	std::string repeat(std::string str, int n_times);

	void mainMenu();
}



#endif