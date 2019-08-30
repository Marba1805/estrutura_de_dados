#ifndef PILHASv_H
#define PILHAv_H

#include"vetor.cpp"
template <typename E> class vetor;
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
