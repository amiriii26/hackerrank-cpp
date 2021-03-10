
// link of Question -> https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
//
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    
    string nums[9] ={"one","two","three","four","five","six","seven","eight","nine"};
    
    int x,y;
    cin >>x >> y;
        
    for (int i=x ;i <=y;i++){
        if(i>1 && i<=9){
            cout << nums[i-1] << endl;
        }else{
            if(i%2 == 0){
                cout <<"even"<< endl;
            }else{
                cout << "odd" << endl;
            }            
        }        
    }
    return 0;
}
