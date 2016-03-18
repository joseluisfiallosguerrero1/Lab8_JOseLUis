#include <iostream>
#include "obras.h"
#include "arquitectonico.h"

#include <string>
#include<sstream>
using std::stringstream;
using std::string;

arquitectonico::arquitectonico(string nombre,string autor,string fecha,string tipo):obras(nombre,autor,fecha){
              this->tipo=tipo;
}
string arquitectonico::toString(){
        stringstream ss;
        ss<<tipo;
        return ss.str();

}

