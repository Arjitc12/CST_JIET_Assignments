
#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
	int sum=0;
	while(num!=0){
		sum = sum+num%10;
		num=num/10;
			while(sum>10){sumOfDigits(sum);}
		}
	return sum;
}

int main(){
	int num=10;
    int val =sumOfDigits(num);
    if(val==1){
    	cout<<"MAGIC!!";}
    else{cout<<"TRY AGAIN";}
    
} 


