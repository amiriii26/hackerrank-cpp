// link -> https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <iostream>
#include <string>

using namespace std;

int main(){

   int r, q, n_v,val1, val2;
   
   cout << "Enter row: ";
   cin >> r;
   cout << "Enter query: ";
   cin >> q;

   int *arr[r];

   for(int i=0; i < r ;i++){
       cout << "nV: ";
       cin >> n_v;
       arr[i] = new int[n_v];
       
       for(int j= 0 ;j < n_v; j++){
           cout << "arr[" << i << "] [" << j << "]: ";
           cin >> arr[i][j];
       }
   }

   for (int i=0; i < q; i++){
       cout << "val1: ";
       cin >> val1 ;
       cout << "val2: ";
       cin >> val2;
       cout << arr[val1][val2] << endl;
   }

    return 0;
}
