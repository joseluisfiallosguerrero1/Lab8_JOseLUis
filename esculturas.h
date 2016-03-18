#pragma once
#include<iostream>
#include<string>
#include"obras.h"
using namespace std;


class esculturas:public obras{
        int peso;
	string material;
        public:
                esculturas(string, string,string,int,string);
                string toString();
};


