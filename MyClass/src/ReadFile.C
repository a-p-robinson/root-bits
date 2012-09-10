/********************************************************************
 * ReadFile.C                                 
 * Ver: 1.0                                             
 * 
 * Example CINT macro to read custom class from ROOT file
 *                                                       
 * APR: 10/09/12                                                                                     
 ********************************************************************/

void ReadFile(){

  // Load the shared library
  gSystem->Load("bin/MyClass.so");

  // Open the ROOT file output (generated from testClass)
  TFile *f1 = new TFile("file.root","UPDATE");

  // Read the variable from MyClass in file
  cout << "abc.fx = " << abc->fx << endl;

  // Make a new MyClass object
  MyClass *def = new MyClass();

  // Read the variable from new MyClass
  cout << "def.fx = " << def->fx << endl;

  // Write new object to file
  def->Write("def");

  // Close ROOT file
  f1->Write();
  f1->Close();

}
