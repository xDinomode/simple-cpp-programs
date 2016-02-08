//binary search

#include <iostream>

using namespace std;

bool inlist(int a[], int search);

int main(){
  int foo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int search = 0;

  cout << "Enter a number: \n";
  cin >> search;
  cout << inlist(foo, search);
  return 1;
}

bool inlist(int a[], int search){
  int low = 0;
  int high = 10 - 1;
  int med = 0;
    while(low <= high){
      med = (high + low) / 2;
      if(search == a[med]){
        return true;
      } else if(search > a[med]){
        low = med + 1;
      } else{
        high = med - 1;
      }
    }
    return false;
}
