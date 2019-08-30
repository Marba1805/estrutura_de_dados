#indef LISTA_LIGADA_H
#define LISTA_LIGADA_H
#include"no.h"


template <typename E>
class ListaLigada{
	private:
		No<E>*cabeca; //inicio da lista ligada (head) (com ponteiros)
		
		public:
			ListaLigada();
			~ListaLigada();
			bool vazia() const;
			const E& inicio() const;
			void incereInicio(const E& e);
			void removeInicio();
			void incereFim(const E& e);
			void removeFim();
};

#endif
