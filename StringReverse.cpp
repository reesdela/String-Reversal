/*
 <Rees de la Houssaye>
 <5/7/2018>
 <StringReverse.cpp>
 
 <a short, simple program that reverses a input string>
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a string please..." << endl;
    string reverse;
    getline(cin, reverse); //required for strings with more than one word
    
    std::string::reverse_iterator rit = reverse.rbegin(); //iterator that points to the oppsoite of
                                                          //the beginning of the string (the end)
    cout << "The reverse string is..." << endl;
    
    for(; rit != reverse.rend(); rit++)
    {
        cout << *rit;
<<<<<<< HEAD
        cout << "lol";
        cout << "laaaa";
        cout << "fuck";
        cout << "this";
=======
>>>>>>> parent of 3da37df... Update StringReverse.cpp
    }
    cout << endl;

}

