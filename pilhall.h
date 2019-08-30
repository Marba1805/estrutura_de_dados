#ifndef PILHASll_H
#define PILHAll_H

#include"lista_ligada.cpp"
template <typename E> class ListaLigada;
template <typename E>
class Pilha{
	private:
		ListaLigada<E>*p;
		
	public:
		Pilha();
		~Pilha();
		bool vasia();
		void empilha(const E& e);
		void desempilha();
		const E& topo() const;

		
};


#endif
