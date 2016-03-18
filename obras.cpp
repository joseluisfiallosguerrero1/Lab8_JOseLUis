#include<iostream>
#include"obras.h"
#include<sstream>
#include<string>
using namespace std;
using std::string;

obras::obras(string nombre, string autor, string fecha){
	this->nombre=nombre;
	this->autor=autor;
	this->fecha=fecha;
}

string obras::toString(){
	stringstream ss;
	ss<<"nombre : "<<nombre<<"   "<<"autor : "<<autor<<"   "<<"fecha : "<<fecha;
	return ss.str();
}
