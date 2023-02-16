/*
A string S is passed as the input. The program must reverse the order of the words in the string and print them as the output. 

Input Format:  The first line will contain S. 
Output Format: The first line will contain the words in the string S in the reverse order. 

Boundary Conditions: Length of S is from 5 to 100. 

Example Input/Output 1: 

Input:  Today is Friday 
Output: Friday is Today 

Example Input/Output 2: 

Input:  five six ten eleven 
Output: eleven ten six five


SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s[1001];
    int l=0;
    while(cin>>s[l++]);
    for(int i=l - 2; i>=0; i--)
        cout<<s[i]<<" ";
}
