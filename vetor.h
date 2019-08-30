#ifndef VETOR_H
#define VETOR_H

template <typename T>

class Vetor{
	private:
		T* v; //vetor de elementos do tipo T
		int tam; //tamanho do vetor
		
	public:
		vetor(int t);
		~vetor();
		int tamanho();
		T elemento(int i);
		bool procura(T elem);
		void insere(T d, int i);
		void operator[](int i);
		
};

#endif
