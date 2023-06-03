#include <iostream>
#include "librerie/grafica/graphics.h"
#include "librerie/algoritmi/algorithms.h"
#include "librerie/documentazione/documentation.h"
#include "librerie/operativo/operations.h"


int main()
{


	
		doc::title("CUBOdiRUBIK \n");
		doc::subtitle("Progetto della 4E, sulla realizzazione di un programma finalizzato alla risoluzione di un cubo di Rubik. \n");
		doc::paragraph("STORIA \n", 89);
		doc::paragraph("Nel 1974 Erno Rubik, insegnante del dipartimento di ''Interior Design'' della ''Moholy-Nagy university \n", 227);
		doc::paragraph("of Art and Design di Budapest'', creo' un cubo che permettesse di muovere ogni faccia in modo indipendente. \n", 227);
	    doc::paragraph("Solo dopo aver creato il cubo e averlo scomposto, non riuscendo piu' a ricomporlo, Rubik si rese conto di aver  \n", 227);
		doc::paragraph("creato un vero e proprio rompicapo. \n", 15);
	    doc::paragraph("Originariamente il cubo prende il nome di ''cubo magico'', il nome attuale gli venne conferito solo nel 1980\n", 15);
		doc::paragraph("dall'Ideal Toy, un'azienda di giochi statunitense.\n", 15);
		doc::paragraph("Nel 1975 Erno Rubik ottenne il brevetto per il cubo magico, riuscendo cosi' a distribuirlo nei maggiori\n", 33);
		doc::paragraph("negozi di giocattoli, riscuotendo un enorme successo.\n", 33);
		doc::paragraph("Stime affermano che tra il 1980 e il 1983 siano stati venduti circa 200 milioni di cubi in tutto il mondo,\n", 33);
		doc::paragraph("grazie anche alle fiere di giocattoli in Europa e negli Stati Uniti.\n", 33);
		doc::paragraph("COMPOSIZIONE \n", 89);
		doc::paragraph("Il cubo di Rubik presenta 6 facce, su ogni faccia sono disposti 9 cubetti, 3x3x3, ogni faccia ha un colore diverso \n", 208);
		doc::paragraph("ovvero: verde, rosso, bianco sopra, giallo sotto, blu e arancione. \n", 208);
	    doc::paragraph("La struttura interna permette ad ogni cubetto di poter muoversi indipendentemente. \n", 208);
		doc::paragraph("Lo scopo del cubo di Rubik e' quello di ricomporlo facendo in modo che ogni faccia anbbia lo stesso colore. \n", 15);
		doc::paragraph("Esistono circa 43 trilioni di rioluzioni del cubo. \n", 15);
		doc::paragraph("IL CUBO DI RUBIK AI GIORNI NOSTRI \n", 89);
		doc::paragraph("Dato il successo del cubo, in seguito, vennero create molte altre varianti; ad esempio il Pyraminx, con la stessa  \n", 77);
		doc::paragraph("concezione del cubo, ma di forma piramidale, il Rubik's Revenge 4x4x4, il Professor's Cube 5x5x5  \n", 77);
		doc::paragraph("oppure, ma non in versione ufficiale, nel 2017 un ingeniere meccanico francese, creo' la versione piu' grande del cubo \n", 77);
		doc::paragraph("ovvero 33x33x33. \n", 203);
		doc::paragraph("Attualmente, dopo quasi 50 anni dalla sua creazione, il cubo di Rubik e' ancora uno dei giocattoli piu' venduti \n", 203);
		doc::paragraph("e uno dei rompicapi piu' famosi. \n", 203);
		srand(time(nullptr));

		Cube cubo(202, 2, 15, 12, 11, 9);

		    Face& gialla = cubo.getFace(Down);
			Face & rossa = cubo.getFace(Back);
			Face& arancione = cubo.getFace(Up);
			Face& verde = cubo.getFace(Left);
			Face& bianca = cubo.getFace(Central);
			Face& blu = cubo.getFace(Right);
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


		





