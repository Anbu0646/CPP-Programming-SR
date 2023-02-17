/*
Two integer arrays of length L1 and L2 are passed as input. The program must print the count of the distinct elements present in both the arrays. 
That is the program must print the count of integer values that are present in the first array but not in the second array plus the count of integer values that are present in the second array but not in the first array. 

Input Format: The first line will contain L1 and L2 separated by a space. 
              The second line will contain the L1 integer values separated by a space.
              The third line will contain the L2 integer values separated by a space.

Output Format: First line will contain the integer value which is the count of the distinct elements in both the arrays. 

Boundary Conditions: 1 <= L1 <= 50 
                     1 <= L2 <= 50 

Example Input/Output 1:

Input:  4 5
        1 5 9 10 
        22 5 12 9 5 

Output: 4

Explanation: The distinct elements present in first array are 1, 10 and in the second array are 22, 12. 

Example Input/Output 2: 

Input:  3 2 
        100 200 300
        201 600 

Output: 5

SOLUTION:
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int l1, l2;
    cin>>l1>>l2;
    int arr[l1], brr[l2], c=0, l=0;
    
    for(int i=0; i<l1; i++)
        cin>>arr[i];
    
    for(int i=0; i<l2; i++)
        cin>>brr[i];
        
    for(int i=0; i<l1; i++)
    {
        for(int j=i + 1; j<l1; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]='\0';
                l+=1;
            }
        }
    }
    
    for(int i=0; i<l2; i++)
    {
        for(int j=i + 1; j<l2; j++)
        {
            if(brr[i]==brr[j])
            {
                brr[j]='\0';
                l+=1;
            }
        }
    }
    
    for(int i=0; i<l1; i++)
    {
        for(int j=0; j<l2; j++)
        {
            if(arr[i]==brr[j])
                c+=1;
        }
    }
    
    cout<<(l1 + l2) - (c*2) - l;
}
