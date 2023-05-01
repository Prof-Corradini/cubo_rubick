#include "documentation.h"
#include "../grafica/graphics.h"
#include <iostream>


namespace doc {
	void title(std::string title) {
		std::string final_str = "";
		final_str += doc::addFrame(title) + '\n';
		std::cout << final_str;
	}
	void subtitle(std::string subtitle) {
		std::string final_str = "";
		final_str += "\\* " + subtitle + " *\\" + '\n';
		std::cout << final_str;
	}


	/* Aggiunge una cornice alla stringa passata*/
	std::string addFrame(std::string str) {
		std::string final_str = "";
		
		final_str += '+' + repeat("-", str.size() + 2) + '+';
		final_str += "\n";

		final_str += "| " + str + " |";
		final_str += "\n";

		final_str += '+' + repeat("-", str.size() + 2) + '+';


		return final_str;
	}

	std::string repeat(std::string str, int n_times) {
		std::string final_str = "";
		for (int i = 0; i < n_times; i++) {
			final_str += str;
		}
		return final_str;
	}
}

