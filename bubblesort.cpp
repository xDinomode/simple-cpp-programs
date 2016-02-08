//bubble sort
#include <iostream>

using namespace std;

void bubblesort(int array[]);

int main(){
  int array[] = {5, 3, 6, 2, 1, 20, 19, 55};
  bubblesort(array);
  for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
    cout << array[i] << " ";
  }
  return 1;
}

void bubblesort(int array[]){
  bool switched = true;
  for(int i = 7; i > 0 && switched; i--){
    switched = false;
    for(int j = 0; j < i; j++){
      if(array[j] > array[j+ 1]){
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        switched = true;
      }
    }
  }
}
