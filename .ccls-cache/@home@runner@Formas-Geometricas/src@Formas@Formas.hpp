#include <iostream>
using namespace std;
#ifndef FORMAS_H
#define FORMAS_H
  class Formas {
  
    public:
      virtual void calculaArea()=0;

    protected:
      void area();
  };
#endif