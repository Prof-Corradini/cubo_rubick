#include "graphics.h"



namespace graph {
	
	void visualizeCube(Cube& cubo) {
		graph::visualizeSide(cubo.getFace(Up), cubo.getFace(Up) , cubo.getFace(Up), cubo.getFace(Up) , false);
		graph::visualizeSide(cubo.getFace(Left), cubo.getFace(Central), cubo.getFace(Right), cubo.getFace(Back), true);
		graph::visualizeSide(cubo.getFace(Down), cubo.getFace(Down), cubo.getFace(Down), cubo.getFace(Down), false);
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
		
		return final_str;
		
	}



	
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
	

	//Nuova funzione per stampare la visualizzazione coretta delle facce
	void visualizeSide(Face& face1, Face& face2, Face& face3, Face& face4, bool colore) { // colore = se è vero colora tutte le matrici, se è falso solo la seconda
		for (int r = 0; r < 3; r++) {
			std::cout << graph::visualizeRow(face1, r, colore);
			std::cout << graph::visualizeRow(face2, r, true); // la seconda matrice è sempre colorata
			std::cout << graph::visualizeRow(face3, r, colore);
			std::cout << graph::visualizeRow(face4, r, colore);
			std::cout << "\n"; // spazio che manda a capo ogni 4 righe stampate
			std::cout << "\n"; // spazio che manda a capo per staccare ogni fila di righe
	
		}
		
	}




	
	std::string visualizeRow(Face& face, int row_index, bool colore) {
		std::string final_str = "";
		if (colore == true) { // colora tutte le matrici
			final_str += "\033[48;5;" + std::to_string(face.values[row_index][0]) + 'm' + "  " + "\033[m" + "  ";
			final_str += "\033[48;5;" + std::to_string(face.values[row_index][1]) + 'm' + "  " + "\033[m" + "  ";
			final_str += "\033[48;5;" + std::to_string(face.values[row_index][2]) + 'm' + "  " + "\033[m" + "  "; 
		}
		else { // stampa degli spazi al posto delle matrici non interessate (prima, terza e quarta)
			final_str += "    ";
			final_str += "    ";
			final_str += "    ";
		}
		
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

//namespace std {
//	std::ostream& operator<<(std::ostream& os, Cube& cube) {
//		os << graph::visualizeCube(cube);
//		return os;
//	}
//}