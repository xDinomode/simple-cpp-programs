#include <iostream>
#include <string>

using namespace std;

int main(){
  int a = 0;
  int b = 1;
  int next;
  int upto;

  cout << "Enter upto\n";
  cin >> upto;

  for(int i = 0; i < upto; i++){
    if(i <= 1){
      next = i;
    }else{
      next = a + b;
      a = b;
      b = next;
    }
    cout << next;
  }
}
