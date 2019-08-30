#ifndef LISTA_DUPLAMENTE_LIGADA_H
#define LISTA_DUPLAMENTE_LIGADA_H
#include "dno.h"
template <typename E> class Dno;
template <typename E>
class ListaDuplamenteLigada{
	private:
		DNo<E>*cabeca; //inicio da lista ligada(head)
		DNo<E>*fim; //final da lista ligada(trailer)
	
	public:
		ListaDuplamenteLigada();
		~ListaDuplamenteLigada();
		bool vazia() const;
		const E& inicio() const;
		const E& final() const;
		void insereInicio(const E& e);
		void insereFim(const E& e);
		void insereMeio(const E& e, int n);
		void removeInicio();
		void removeFim();
		void removeMeio(int n);
};

#endif
