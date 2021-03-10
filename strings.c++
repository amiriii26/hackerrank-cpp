// link : https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>

using namespace std;

int main(){

    string first, second;
    cout << "Enter two words ";

    cin >> first >> second;

    cout << first.size() << " " << second.size() << endl;
    cout << "size of first word: ";
    cout << first << endl;
    cout <<"Size of second word: ";
    cout << second << endl;

    char temp = first[0];
    first[0] = second[0];
    second[0] = temp;

    cout << first << " "<< second << endl;

    return 0;
}
