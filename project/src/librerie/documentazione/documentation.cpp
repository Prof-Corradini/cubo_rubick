#include "documentation.h"
#include "../grafica/graphics.h"
#include <iostream>


namespace doc {


	void title(std::string title) {
		std::string final_str = "";
	
		//title[0] = colorText(&title[0], 1, 12)[0];

		final_str += addFrame(colorText(title, 12 ,232)) + '\n';

		std::cout << final_str;
	}
	void subtitle(std::string subtitle) {
		std::string final_str = "";
			
		final_str += colorText(subtitle, 171, 232) + '\n';
		std::cout << final_str;
	}
	void paragraph(std::string paragraph, int color_num) {
		std::string final_str = "";

		final_str += colorText(paragraph, color_num, 232) + '\n';
		std::cout << final_str; 
	}
	

	/* Funzione che permettere di colorare le stringhe passati*/
	/*
		text: testo da colorare
		text_color: colore da applicare al testo (di default 15 = bianco )
		back_color: colore da applicare allo sfondo del testo (di default 0 = nero )
	*/
	std::string colorText(std::string text, int text_color = 15, int back_color = 0) {
		std::string final_str = "";
		/* Inizio */
		final_str.append("\033[");
		/* Colore testo */
		final_str.append("38;5;" + std::to_string(text_color) + ";");
		/* Colore background */
		final_str.append("48;5;" + std::to_string(back_color) + "m");
		/* Aggiunta del testo */
		final_str.append(text);
		/* Conclusione*/
		final_str.append("\033[m");
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

