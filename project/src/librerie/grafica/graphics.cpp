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