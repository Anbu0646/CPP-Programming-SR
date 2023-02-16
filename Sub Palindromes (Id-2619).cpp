/*
Given a string s, the program must print the count of sub palindromes (with a minimum length of two characters) in the string s. 

Boundary conditions: length of the string is between 2 and 200. 

Input format:  First line will contain the string value s. 
Output format: First line will contain the integer which represents the count of sub palindromes in the string s. 

Sample input/output: 

Example 1: 

Input:  everest 
Output: 2 

Explanation: the sub palindromes are eve, ere 

Example 2: 

Input:  abccbaab 
Output: 5 

Explanation: the sub palindromes are cc, bccb, aa, baab, abccba

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int ct=0;
    
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i + 1; j<s.length(); j++)
        {
            if(s[i]==s[j])
            {
                int c=0;
                for(int k=i, l=j; k<=j, l>=i; k++, l--)
                {
                    if(s[k]==s[l])
                        c+=1;
                }
                if(c==(j - i) + 1)
                {
                    ct+=1;
                }
            }
        }
    }
    cout<<ct;
}
