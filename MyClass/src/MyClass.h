/********************************************************************
 * MyClass.h                                 
 * Ver: 1.0                                             
 * 
 * Example custom class to add to ROOT
 *                                                       
 * APR: 07/09/12                                                                                     
 ********************************************************************/

#ifndef MYCLASS_H
#define MYCLASS_H

#include "TObject.h"

class MyClass : public TObject {  // Class must be derived from TObject

 private:

 public:
  MyClass();                      // To add a class to ROOT it must have a default constructor

  Float_t fx;

  // MyClass (Ver 1)
  ClassDef(MyClass,1)             // My New ROOT class - ver1
                                  // Define class in ROOT (name, ver). ver=0 if you don't need I/O
                                  // Increase the version number as you develop the class

};

#endif // MYCLASS_H
