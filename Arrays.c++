// link -> https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <iostream>
#include <string>

using namespace std;

int main(){

    int size;
    
    cin >> size;

    int dizi[size];
    for(int i=0; i < size; i++){
        
        cin >> dizi[i];
    }

    for (int i = size - 1; i >= 0; i--){
        cout << dizi[i] << " ";
    }
        
    return 0;
}
