#include "documentation.h"
#include "../grafica/graphics.h"
#include <iostream>


namespace doc {
	void title(std::string title) {
		std::string final_str = "";
		final_str += graph::addFrame(title) + '\n';
		std::cout << final_str;
	}
	void subtitle(std::string subtitle) {
		std::string final_str = "";
		final_str += "\\* " + subtitle + " *\\" + '\n';
		std::cout << final_str;
	}

}

