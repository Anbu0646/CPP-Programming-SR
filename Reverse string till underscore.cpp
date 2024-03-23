/*
String S is passed as the input to the program. 
S may or may not have a single underscore embedded in it. 
The program must reverse the String S till the first underscore and print it as the output. 

Input Format: The first line contains S. 

Output Format: The first line contains the string S modified based on the given conditions. 

Boundary Conditions: Length of S is from 3 to 100. 

Example Input/Output 1:

Input: abcd_pqrs 

Output: dcba_pqrs 

Example Input/Output 2: 

Input: _kilo 

Output: _kilo

Example Input/Output 3: 

Input: nounderscore 

Output: erocsrednuon

SOLUTION:
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string S;
    getline(cin, S);

    size_t underscorePos = S.find('_');
  
    if (underscorePos != string::npos)
    {
        for (int i = underscorePos - 1; i >= 0; i -= 1) 
        {
            cout << S[i];
        }
        cout << S.substr(underscorePos);
    } 
    else 
    {
        for (int i = S.length() - 1; i >= 0; i -= 1) 
        {
            cout << S[i];
        }
    }

    return 0;
}
