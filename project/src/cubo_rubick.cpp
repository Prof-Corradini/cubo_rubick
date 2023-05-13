#include <iostream>
#include "librerie/grafica/graphics.h"
#include "librerie/algoritmi/algorithms.h"
#include "librerie/documentazione/documentation.h"
#include "librerie/operativo/operations.h"


int main()
{
	//
	doc::title("Cubo di Rubik");
	doc::subtitle("Progetto della 4E, sulla realizzazione di un programma finalizzato alla risoluzione di un cubo di Rubik.");
	doc::paragraph("STORIA \n", 202);
	doc::paragraph("Nel 1974 Erno Rubik, insegnante del dipartimento di ''Interior Design'' della ''Moholy-Nagy university \n");
	doc::paragraph("of Art and Design di Budapest'', creò un cubo che permettesse di muovere ogni faccia in modo indipendente. \n");
	doc::paragraph("Solo dopo aver creato il cubo e averlo scomposto, non riuscendo più a ricomporlo, Rubik si rese conto di aver  \n");
	doc::paragraph("creato un vero e proprio rompicapo. \n");
	doc::paragraph("Originariamente il cubo prende il nome di ''cubo magico'', il nome attuale gli venne conferito solo nel 1980\n");
	doc::paragraph("dall'Ideal Toy, un'azienda di giochi statunitense.\n");
	doc::paragraph("Nel 1975 Erno Rubik ottenne il brevetto per il cubo magico, riuscendo così a distribuirlo nei maggiori\n");
	doc::paragraph("negozi di giocattoli, riscuotendo un enorme successo.\n");
	doc::paragraph("Stime affermano che tra il 1980 e il 1983 siano stati venduti circa 200 milioni di cubi in tutto il mondo,\n");
	doc::paragraph(" grazie anche alle fiere di giocattoli in Europa e negli Stati Uniti.\n");
	srand(time(nullptr));


	Cube cubo(202, 2, 15, 12, 11, 9);

	Face& arancione = cubo.getFace(Up);
	Face& verde		= cubo.getFace(Left);
	Face& bianca	= cubo.getFace(Central);
	Face& blu		= cubo.getFace(Right);
	Face& gialla	= cubo.getFace(Down);
	Face& rossa		= cubo.getFace(Back);

	std::cout << bianca;

	std::cout << arancione;
	std::cout << verde;
	std::cout << bianca;
	std::cout << blu;
	std::cout << gialla;
	std::cout << rossa;

	opr::roundFace(bianca);

	alg::stirCube(cubo);


}

