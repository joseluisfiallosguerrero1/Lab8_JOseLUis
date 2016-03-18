#include<iostream>
#include"obras.h"
#include"esculturas.h"
#include<sstream>
#include<string>

using namespace std;
using std::string;
esculturas::esculturas(string nombre,string autor,string fecha,int peso, string material):obras(nombre,autor,fecha){
              this->material=material;
                this->peso=peso;
}
string esculturas::toString(){
        stringstream ss;
        ss<<peso<<material;
        return ss.str();

}


