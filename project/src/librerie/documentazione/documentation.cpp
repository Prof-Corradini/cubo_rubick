#include "documentation.h"
#include "../grafica/graphics.h"
#include <iostream>


namespace doc {


	void title(std::string title) {
		std::string final_str = "";
		final_str += addFrame(title) + '\n';
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
		
		//				Sostituire con colorText(paragraph)
		final_str += "\033[38;5;" + color + ";48;5;211m" + paragraph + "\033[m" + '\n';
		std::cout << final_str; 
	}
	


	std::string colorText(std::string text, int color_num, int back_num) {
		std::string final_str = "";
		
		//Operazioni sulla stringa

		return final_str;
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

