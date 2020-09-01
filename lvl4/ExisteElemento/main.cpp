#include <iostream>

using namespace std;

int ocurrencia(int v[],int b,int l,int cont);

int main()
{
  int s[10]={10,32,52,69,10,58,20,74,20};
 int c=0;
  cout<< ocurrencia(s,10,1,c);

  return 0;
}

int ocurrencia(int v[],int b,int l,int cont){

  if(l == 1){

      if(v[l-1] == b){
          return cont+1;
        }
      else {return cont;}
    }
else {
   if(v[l-1] == b){
         cont++;
    ocurrencia(v,b,l-1,cont);
} else{
     ocurrencia(v,b,l-1,cont);
     }



    }
}
