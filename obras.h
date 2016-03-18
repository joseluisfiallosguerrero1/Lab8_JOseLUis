#pragma once
#include<iostream>
#include<string>
using std::string;
 class obras{
	string nombre,autor,fecha;
	public:
		obras(string nombre, string autor, string fecha);
		string toString();
};
