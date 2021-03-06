/*Given an integer array A of N integers, 
find the pair of integers in the array which have
minimum XOR value. Report the minimum XOR value. */
#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a[] = { 4,2,5,1}; 
    int n = sizeof(a) / sizeof(a[0]);   
    
    int minXor = INT_MAX; 
    for(int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) 
            minXor = min(minXor, a[i] ^ a[j]); 
  
    return minXor; 
} 
