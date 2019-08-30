#ifndef NO_H
#define NO_H

template <typename E>
class No{
	
	private:
		E elem; // informacao do NO
		No<E>*prox;//proximo elemento
		friend class ListaLigada<E>;
	
};


#endif
