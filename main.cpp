#include<iostream>
using namespace std;
int main(){
  int primeiro=0, segundo=1, i, n, k=0;
  cout<<"Entrar num: "; cin>>n;
  
  cout<<"Fibonacci: ";
  
  for(i=0 ; i<n ; i++){  
    if(i <= 1){
      k=i;
    }
    else{
      k=primeiro + segundo;
      primeiro=segundo;
      segundo=k;  
    }
    cout<<k<<" ";
  }  
    
   return 0;
}