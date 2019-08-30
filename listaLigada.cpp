#include <iostream>
#import "lista_ligada.h"


template <typename E>
ListaLigada<E>:: ListaLigada(){
	cabeca = NULL;
	
}
template <typename E>
ListaLigada<E>::~ListaLigada(){
	delete cabeca;
	
}
template <typename E>
bool ListaLigada<E>:: vasia()const{
	return cabeca==NULL;
	
}
template <typename E>
const E&ListaLigada<E>:: inicio() const{
	return cabeca -> elem;
	
}
template <typename E>
void ListaLigada<E>:: incereInicio(const E& e){
	No<E>*aux;
	aux = new No<E>;	 //1
	aux -> elem = e  	 //2
	aux -> prox = cabeca //3
	cabeca = aux,		 //4
	
}


template <typename E>
void ListaLigada<E>:: removeInicio(){ 
	if (!vasia()){
		No<E>*aux = cabeca;
		 cabeca=cabeca -> prox;
		 delete aux;
	}
	
}
template <typename E>
void ListaLigada<E>:: incereFim(const E& e){
	No<E>*aux;
	aux = new No<E>;	 //1
	aux -> elem = e  	 //2
	aux -> prox = trailer //3
	trailer = aux,		 //4
	
}


template <typename E>
void ListaLigada<E>:: removeFim(){ 
	if (!vasia()){
		No<E>*aux = trailer;
		 trailer=trailer -> prox;
		 delete aux;
	}
	
}


