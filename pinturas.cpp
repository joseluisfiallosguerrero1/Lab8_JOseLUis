#include<iostream>
#include"obras.h"
#include"pinturas.h"
#include<sstream>
#include<string>

using namespace std;

pinturas::pinturas(string nombre,string autor,string fecha,string material, string tecnica):obras(nombre,autor,fecha){
              this->material=material;
		this->tecnica=tecnica;
}
string pinturas::toString(){
	stringstream ss;
	ss<<material<<tecnica;
	return ss.str();

}


