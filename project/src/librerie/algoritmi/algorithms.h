#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "../cubo/cube.h"
/* Il compito del gruppo degli algoritmi è quello di trovare gli algoritmi per risolvere il cubo.
   Per risolverlo, hanno utilizzato il metodo a strati. 
   Ogni faccia può ruotare attorno al proprio centro, in senso orario o antiorario e per questo motivo,
   definiremo "mossa" la rotazione di una faccia del cubo di 90°, ossia un quarto di giro.
   Ora, possiamo spiegare quel che sarà il metodo utilizzato dagli algoritmi, ovvero il metodo a strati.
   Soluzione del primo strato: verrà risolto "a naso"*/
   


namespace alg {
	void stirCube(Cube& cube);

}
#endif