/*
A string (with only alphabets) S is passed as input. The program should print the alphabets in the string in descending order. 
Assume all alphabets will be in lower case. 

Boundary Conditions: The length of string S is between 2 and 100. 

Example input and output: 

If the input is "cake", the output should be "keca".

If the input is "innovation", the output should be "vtonia" (n or o or i should not be repeated).

SOLUTION:
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int sc[26]={0};
    
    for(int i=0; i<s.length(); i++)
        sc[s[i] - 97]=1;
        
    for(int i=25; i>=0; i--)
    {
        if(sc[i]==1)
        {
            cout<<(char)(i + 97);
        }
    }
}
