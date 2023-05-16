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
							/*testo, sfondo*/
		final_str += "\033[38;5;15;48;5;211m" + subtitle + "\033[m" + '\n';
		std::cout << final_str;
	}
	void paragraph(std::string paragraph, int color_num) {
		std::string final_str = "";
		std::string color = std::to_string(color_num);
		final_str += "\033[38; 5;" + color + "; 48; 5; 211m" + paragraph + "\033[m" + '\n';
		std::cout << final_str; 
	}
	





		

}

