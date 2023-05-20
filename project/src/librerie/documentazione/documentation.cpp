#include "documentation.h"
#include "../grafica/graphics.h"
#include <iostream>


namespace doc {


	void title(std::string title) {
		std::string final_str = "";
	
		//title[0] = colorText(&title[0], 1, 12)[0];

		final_str += addFrame("\033[38;5;12;48;5;232m" + title + "\033[m" + '\n') + '\n';

		std::cout << final_str;
	}
	void subtitle(std::string subtitle) {
		std::string final_str = "";
							/*testo, sfondo*/
		final_str += "\033[38;5;171;48;5;233m" + subtitle + "\033[m" + '\n';
		std::cout << final_str;
	}
	void paragraph(std::string paragraph, int color_num) {
		std::string final_str = "";
		std::string color = std::to_string(color_num);
		
		//				Sostituire con colorText(paragraph, color_num)
		final_str += "\033[38;5;" + color + ";48;5;232m" + paragraph + "\033[m" + '\n';
		std::cout << final_str; 
	}
	


	std::string colorText(std::string text, int color_num, int back_num) {
		std::string final_str = "";
		
		final_str += "\033[38;5;" + std::to_string(color_num) + ";48;5;" + std::to_string(back_num) + "m" + text + "\033[m" + '\n';

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

