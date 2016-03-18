#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include"obras.h"
#include"arquitectonico.h"
#include"pinturas.h"
#include"esculturas.h"
#include"literatura.h"


using namespace std;

int main(int argc,char*argv[]){
	int seguir=6;
	vector<obras> obrase;
	vector<obras> transferencias;
	     cout<<" 1 agregar"<<endl<<" 2 transferir"<<endl<<" 3 reportes"<<endl<< "4reportes de transferidos" <<endl<<" 0 salir"<<endl;
                cin>>seguir;
	while(seguir !=0){
		if(seguir==1){
			string nombre,autor,fecha;
			int op=0;
			cout<<"ingrese el nombre " <<endl;
			cin>>nombre;
			cout<<"ingrese el autor " <<endl;
                        cin>>autor;
			cout<<"ingrese la fecha " <<endl;
                        cin>>fecha;
			cout<<"ingrese su tipo de obra 1 pintura, 2 escultura, 3 literatura, 4 diseño  " <<endl;
                        cin>>op;
			if(op==1){
			          string material,tecnica;	
				  cout<<"ingrese el material " <<endl;
            			  cin>>material;
				  cout<<"ingrese la tecnica " <<endl;
	                          cin>>tecnica;
				  pinturas  pintura(nombre,autor,fecha,material,tecnica);
				  obrase.push_back(pintura);
			}
			 if(op==2){
                                  string material;
				  int tecnica;      
                                  cout<<"ingrese el material " <<endl;
                                  cin>>material;
                                  cout<<"ingrese el peso " <<endl;
                                  cin>>tecnica;
                                  esculturas  escu(nombre,autor,fecha,tecnica,material);
                                  obrase.push_back(escu);
                        }
			 if(op==3){
                                  string material,tecnica;      
                                  cout<<"ingrese el genero " <<endl;
                                  cin>>material;
                                  cout<<"ingrese la la epoca " <<endl;
                                  cin>>tecnica;
                                  literatura  lit(nombre,autor,fecha,material,tecnica);
                                  obrase.push_back(lit);
				 	
                        }
			 if(op==4){
                                  string material,tecnica;      
                                  cout<<"ingrese el tipo de terreno " <<endl;
                                  cin>>material;
                                  arquitectonico  arc(nombre,autor,fecha,material);
                                  obrase.push_back(arc);
                        }

		}
		if(seguir==2){
			int pos=0;
			for(int x=0;x<obrase.size();x++){
				cout<<x<<" . "<<obrase[x].toString()<<endl;
			}
			cout<<"ingrese la posición que desee eliminar ";
			cin>>pos;
			transferencias.push_back(obrase[pos]);
			obrase.erase(obrase.begin()+pos);
		}
		if(seguir==3){
			for(int x=0;x<obrase.size();x++){
                                cout<<x<<" . "<<obrase[x].toString()<<endl;
                        }

		}
		 if(seguir==4){
                        for(int x=0;x<transferencias.size();x++){
                                cout<<x<<" . "<<transferencias[x].toString()<<endl;
                        }

                }
		 cout<<" 1 agregar"<<endl<<" 2 transferir"<<endl<<" 3 reportes"<<endl<< "4reportes de transferidos" <<endl<<" 0 salir"<<endl;
                cin>>seguir;



	}	
	return 0;
}
