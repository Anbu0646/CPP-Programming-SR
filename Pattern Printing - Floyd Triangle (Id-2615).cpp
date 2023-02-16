/*
A number N indicating the number of rows in Floyd's triangle is passed as the input. The program must print the Floyd's triangle pattern. 

Input Format:  The first line will contain N. 
Output Format: The first N lines will contain the Floyd's triangle pattern. 

Boundary Conditions: 3 <= N <= 50 

Example Input/Output 1: 

Input:  7 
Output: 1 
        2 3 
        4 5 6 
        7 8 9 10 
        11 12 13 14 15 
        16 17 18 19 20 21 
        22 23 24 25 26 27 28 

Example Input/Output 2: 

Input:  5 
Output: 1 
        2 3 
        4 5 6 
        7 8 9 10 
        11 12 13 14 15


SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n, j=1;
    cin>>n;
    for(int i=1; i<=n; i++, cout<<"\n")
    {
        for(int k=1; k<=i; k++)
        {
            cout<<j++<<" ";
        }
    }
}
