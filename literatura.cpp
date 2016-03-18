#include<iostream>
#include"obras.h"
#include"literatura.h"
#include<sstream>
#include<string>

using namespace std;
using std::string;
literatura::literatura(string nombre,string autor,string fecha,string genero, string epoca):obras(nombre,autor,fecha){
              this->genero=genero;
                this->epoca=epoca;
}
string literatura::toString(){
        stringstream ss;
        ss<<genero<<epoca;
        return ss.str();

}

