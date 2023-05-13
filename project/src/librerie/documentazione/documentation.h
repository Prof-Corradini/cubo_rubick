#ifndef DOCUMENTATION_H
#define DOCUMENTATION_H

#include "../cubo/cube.h"
#include <string>

namespace doc {
	void title(std::string);
	void subtitle(std::string);
	void paragraph(std::string paragraph, int color_num);

	void mainMenu();
}



#endif