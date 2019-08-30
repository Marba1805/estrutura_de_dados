#include "pilha.cpp"
#include "pilhall.cpp"
#include <iostream>

int main(){
	Pilha<int> p;
	p.empilha(4);
	p.empilha(20);
	p.empilha(2);
	c = p.topo();
	p.desempilha();
	d = c * p.topo();
	p.desempilha();
	p.empilha(d);
	c = p.topo();
	p.desempilha();
	d = c + p.topo();
	p.desempilha();
	p.empilha(d);
}
