#ifndef CUBE_H
#define CUBE_H
#include <string>


enum FacePosition{
	None,
	Up,
	Left,
	Central,
	Right,
	Down,
	Back
};



class Face{
public:
	const int id;
	const std::string name;
	FacePosition position = None;
	 
	Face* up = nullptr;
	Face* left = nullptr;
	Face* right = nullptr;
	Face* down = nullptr;

	int* lim_up = nullptr;
	int* lim_left = nullptr;
	int* lim_right = nullptr;
	int* lim_down = nullptr;

	const int n_rows = 3;
	const int n_cols = 3;
	int values[3][3] = {};

	/* Costruttore */
	Face();
	/* Distruttore */
	~Face();

	Face(std::string name, FacePosition type, int = -1);

	Face& getFace();

	void initializeFace(int = -1);
	void setLinkedFaces(Face& up, Face& left, Face& right, Face& down);


};


class Cube{
public:
	const int id;
	int n_faces = 6;
	Face* faces;
	/* Costruttore */
	Cube(int up_color, int left_color, int central_color, int right_color, int back_color, int down_color);
	/* Distruttore */
	~Cube();
	void initializeFaces(int up_color, int left_color, int central_color, int right_color, int back_color, int down_color);
	void linkFaces();
	Face& getFace(FacePosition);


private:

};


int generateID();



#endif