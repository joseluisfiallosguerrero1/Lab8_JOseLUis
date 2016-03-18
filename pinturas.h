#pragma once
#include<iostream>
#include<string>
#include"obras.h"
#include<string>
using namespace std;
using std::string;

class pinturas:public obras{
	string material,tecnica;
	public:
		pinturas(string, string,string,string,string);
		string toString();
};	
	



