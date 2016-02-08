#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream myfile;
  myfile.open("newfile.txt");
  if(myfile.is_open())
    myfile << "Writing to file";
  else
    cout << "ERROR";
  myfile.close();
  return 0;
}
