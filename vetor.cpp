#include <iostream>
#include "vetor.h"

template <typename T>

Vetor<T>::vetor(int t){
	v=new T[t]; //aloca dinamicamente o vetor
	if(v==NULL){
		throw new std::string("memoria insuficiente");
}
	tam = t;
}

template <typename T>
Vector<T>::~vetor(){
	delete v; // remove a alocacao dinamica de memoria
}

template <typename T>
int Vetor<T>::tamanho(){
	return tam;
}

template <typename T>
T Vector<T>::elemento(int i){
	if(i<0 || i >= tam){
	}
		throw new std::string("indice invalido");
}


template <typename T>
bool Vetor<T>::procura(T elem){
	for(int c =0, c<tam-1, c++){
		if(v[c]==elem){
			return true;
		}
	}
	return false;
}



template <typename T>
void Vetor<T>:: insere(T elemento,int i){
	if(i<0 || i >= tam){
		throw new std::string("indice incluido")
	}
	v[i] = elemento;
}

template <typename T>
void Vetor<T>:: operator[] (int i){
	if(i<0 || i >= tam){
		throw new std::string("indice removido)
	}
	for(int j = i, j<tam-1,j++){
		v[j] = v[j+1];
	}
	v[tam - 1]=NULL;
}
