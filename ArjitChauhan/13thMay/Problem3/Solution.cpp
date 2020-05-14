
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
  if (a==0){return(b);}
  else if (b==0){return a;}
  else{
	  return gcd(b,a%b);
	  }
}

int main(){

	int a=24,b=4;
	cout<<gcd(a,b);
	cout<<"LCM is"<<a*b/gcd(a,b)<<endl;

}

