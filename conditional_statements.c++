#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cout <<"Enter a number: ";
    cin >> n;
    
    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    if ( n >= 1 && n <= 9){
        cout << arr[n-1] << endl;
    }else{
        cout <<"Greater than 9." << endl;
    }
    
    return 0;   
}
