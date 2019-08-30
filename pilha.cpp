#include <iostream>
#include "pilha.h"


template<typename E>
Pilha<E>::Pilha(){
	p = new ListaDuplamenteLigada<E>();
	
}

template<typename E>
Pilha<E>::~Pilha(){
	delete p;
	
}

template<typename E>
bool Pilha<E>:: vasia(){
	return p -> vasia();
}


template<typename E>
void Pilha<E>::empilha(const E& e){
	p->insereFim(e);
}
	
	
template<typename E>
const E& Pilha<E>::topo() const{
return p->final();
	
}


template<typename E>
void Pilha<E>::desempilha(){
p ->removeFim();

}
	
	

