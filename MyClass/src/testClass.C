/**************************************************
 * testClass.C                                    *
 *                                                *   
 * Ver: 0.1                                       *
 *                                                *
 * Test our sample class in a program.            *
 *                                                *
 * APR: 07/09/12                                  *
 **************************************************/

#include "MyClass.h"

#include "TFile.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

  // Open new ROOT file
  TFile *f1 = new TFile("file.root","RECREATE");
  cout << "Created ROOT file: file.root" << endl;

  // Make new MyClass object
  MyClass *abc = new MyClass();
  cout << "Made MyClass object: abc" << endl;

  // Check the value which is set in constructor
  cout << "abc.fx = " << abc->fx << endl;

  // Save the MyCLass object to ROOT file with name "abc"
  abc->Write("abc");
  cout << "Writing abc to file.root as abc" << endl;

  // Write ROOT file and close
  f1->Write();
  f1->Close();
  cout << "Closed ROOT file" << endl;

}
