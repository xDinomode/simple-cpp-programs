#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  string line;
  ifstream myfile;
  myfile.open("readthis.txt");
  if(myfile.is_open()){
    while(getline(myfile, line)){
      cout << line << "\n";
    }
    myfile.close();
  }
  else
    cout << "ERROR";
  return 0;
}
