// Author: Rafiul Omar Rafi
// Created: 03-05-2023
// How to use: Enter a string, and enter a escaping base integer. to encrypt.
//             string can be decrypt with base.

#include <iostream>
#include <string>

using namespace std;

string ciserCipher(string s, int r){

    string cstr = "";
    for(int i=0; i < s.size(); i++){

        if( s[i] == ' ') cstr.push_back( '1' );
        else if( s[i] == '.' ) cstr.push_back( '0' );
        else if( s[i] == ',' ) cstr.push_back( '-' );
        else {
            int a = toupper( s[i] ) - 'A';
            char f = ( ( a + r ) % 26 ) + 'A' ;
            cstr.push_back( f );
        }
    }

    return cstr;
}


string anticiserCipher(string s, int r){

    string cstr = "";
    for(int i=0; i < s.size(); i++){

        if( s[i] == '1' ) cstr.push_back( ' ' );
        else if( s[i] == '0' ) cstr.push_back( '.' );
        else if( s[i] == '-' ) cstr.push_back( ',' );
        else {
            int a = toupper( s[i] ) - 'A';
            char f = ( ( a - r ) % 26 ) + 'A' ;
            cstr.push_back( f );
        }
    }

    return cstr;
}

int main(){

    string str;
    int base;
    getline(cin, str);
    cin >> base;

    cout << ciserCipher(str, base) << endl;
    cout << anticiserCipher(str, base) << endl;

    return 0;
}

