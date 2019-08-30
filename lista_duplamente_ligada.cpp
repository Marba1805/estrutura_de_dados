#include <iostream>
#include "lista_duplamente_ligada.h"

template <typename E>
ListaDuplamenteLigada<E>:: ListaDuplamenteLigada(){
	cabeca = NULL;
	
}
template <typename E>
ListaDuplamenteLigada<E>::~ListaDuplamenteLigada(){
	delete cabeca;
	
}
template <typename E>
bool ListaDuplamenteLigada<E>:: vazia() const{
	return cabeca==NULL;
	
}
template <typename E>
const E&ListaDuplamenteLigada<E>:: inicio() const{
	return cabeca -> elem;
	
}

template <typename E>
const E&ListaDuplamenteLigada<E>:: final() const{
	return fim -> elem;
	
}


template <typename E>
void ListaDuplamenteLigada<E>:: insereInicio(const E& e){
	DNo<E>*aux;
	aux = new DNo<E>;	 //1
	aux -> elem = e;  	 //2
	aux -> prox = cabeca; //3
	cabeca = aux;		 //4
	
}

template <typename E>
void ListaDuplamenteLigada<E>:: insereFim(const E& e){  // const E&  significa que o tipo de entrada nao mudara nessa funcao
	DNo<E>*aux;
	aux = new DNo<E>;	  //1
	aux -> elem = e;  	  //2
	aux -> prox = fim;//3
	fim = aux; 		  //4
	
}

template <typename E>
void ListaDuplamenteLigada<E>:: insereMeio(const E& e,int n){  // const E&  significa que o tipo de entrada nao mudara nessa funcao
	DNo<E>*aux;
	aux = new DNo<E>;	 	  //1
	aux -> elem = e;  		  //2
	aux -> prox = n - fim;//3
	fim = aux;		 	  //4
	
}

template <typename E>
void ListaDuplamenteLigada<E>:: removeInicio(){ 
	if (!ListaDuplamenteLigada::vazia()){
		DNo<E>*aux = cabeca;
		cabeca=cabeca -> prox;
		cabeca -> prev = NULL;
		delete aux;
	}
	
}

template <typename E>
void ListaDuplamenteLigada<E>:: removeFim(){ 
	if (!ListaDuplamenteLigada::vazia()){
			DNo<E>*aux = fim;
		fim=fim -> prev;
		fim -> prox = NULL;
		delete aux;
	}
	
}

