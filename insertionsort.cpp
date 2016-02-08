#include <iostream>

using namespace std;

void insertionsort(int array[], int size);

int main(){
  int array[] = {2, 4, 3, 1, 4};
  int size = sizeof(array)/sizeof(array[0]);
  insertionsort(array, size);
  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }
  return 1;
}

void insertionsort(int array[], int size){
  int j, value;
  for(int i = 1; i < size; i++){
    value = array[i];
    for(j = i - 1; j >=0 && array[j] > value; j--){
      array[j + 1] = array[j];
    }
    array[j + 1] = value;
  }
}
