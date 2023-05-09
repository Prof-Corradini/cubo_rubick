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
				final_str += std::to_string(face.values[row][col]);
				final_str += ' ';
			}
			final_str += "\n\n";
		}
		return final_str;
	}


	std::string visualizeRow(Face& face, int row_index) {
		std::string final_str = "";
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