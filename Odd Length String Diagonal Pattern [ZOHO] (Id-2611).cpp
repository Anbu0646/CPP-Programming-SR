/*
An odd length string S of length L is passed as the input. The program must print the string S as two diagonals as shown in the example Input/Output below. 

Input Format:  The first line will contain S.
Output Format: L lines will contain the pattern as shown in the example Input/Output below. 

Boundary Conditions: Length of S is from 3 to 51. 

Example Input/Output 1: 

Input:  cry 
Output: c y 
         r 
        c y 


SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int l=s.length();
    
    for(int i=0; i<l; i++, cout<<"\n")
    {
        int t=l - i - 1;
        for(int j=0; j<l; j++)
        {
            if(i==j)
                cout<<s[j];
            else if(j==t)
                cout<<s[j];
            else
                cout<<" ";
        }
    }
}
