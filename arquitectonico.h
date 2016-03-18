#pragma once
#include <iostream>
#include <string>
#include "obras.h"
using std::string;


class arquitectonico:public obras{
        string tipo;
        public:
                arquitectonico(string, string,string,string);
                string toString();
};


