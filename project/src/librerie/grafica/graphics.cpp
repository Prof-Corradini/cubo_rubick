#include "graphics.h"



namespace graph {
	
	std::string visualizeCube(const Cube& cube) {
		std::string final_str = "";
		/*Visualizzare tutte le facce del cubo nella seguente forma */
		/*		  Up   */
		/*Left Central Right Back */
		/*		 Down */

		return final_str;
	}
	std::string visualizeFace(const Face& face) {
		std::string final_str = "";
		
		for (int row = 0; row < face.n_rows; row++) {
			for (int col = 0; col < face.n_cols; col++) {
				final_str += "\033[48;5;" + std::to_string(face.values[row][col]) + 'm' + "  " + "\033[m";
				final_str += ' ';		
				
			}
			final_str += "\n\n";
			
		}
		
		final_str += pattern();
		return final_str;
		
	}



	//Nuova funzione per stampare la visualizzazione coretta delle facce
	int pattern(){
		int tab[3][4] = { {0,1,0,0},{1,1,1,1},{0,1,0,0} };
		for (int col = 0; col < 3; col++) {
			for (int raw = 0; raw < 4; raw++) {
				if (tab[col][raw] == 1) {
					std::cout << tab[col][raw] << " ";
				}
				else if (tab[col][raw] == 0) {
					std::cout << "  ";
				}
			}

			std::cout << "\n";
		}
		return 0;
	}
	

	void visualiz(Face& face) {
		for(int j=0; j<3; j++){
			for (int i = 0; i < 4; i++) {
				std::cout << graph::visualizeRow(face, j);
			}
			std::cout << "\n";
		}
		
	}
	




	
	std::string visualizeRow(Face& face, int row_index) {
		std::string final_str = "";
		final_str += std::to_string(face.values[row_index][0]) + ' ';
		final_str += std::to_string(face.values[row_index][1]) + ' ';
		final_str += std::to_string(face.values[row_index][2]) + ' ';
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



/* Attivano la sintassi: 
	cout << face;
	al posto di:
	graph::visualizaFace(face);

*/
namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face) {
		os << graph::visualizeFace(face);
		return os;
	}
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube) {
		os << graph::visualizeCube(cube);
		return os;
	}
}