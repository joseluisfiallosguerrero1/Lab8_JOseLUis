#pragma once
#include<iostream>
#include<string>
#include"obras.h"
using namespace std;


class literatura:public obras{
        string genero,epoca;
        public:
                literatura(string, string,string,string,string);
                string toString();
};



