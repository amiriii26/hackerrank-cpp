// link of question -> https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>
#include <string>

using namespace std;

int max_0f_four(int a, int b, int c, int d){
    
    int max = a;

    int nums[4] = {a,b,c,d};
    
    for(int i=0 ; i < 4 ; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    
    return max;
}

int main(){

    cout << max_0f_four(3,4,5,6)<< endl;
    return 0;
}
