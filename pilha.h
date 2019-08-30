#ifndef PILHAS_H
#define PILHA_H

#include"lista_duplamente_ligada.cpp"
template <typename E> class ListaDuplamenteLigada;
template <typename E>
class Pilha{
	private:
		ListaDuplamenteLigada<E>*p;
		
	public:
		Pilha();
		~Pilha();
		bool vasia();
		void empilha(const E& e);
		void desempilha();
		const E& topo() const;

		
};


#endif
