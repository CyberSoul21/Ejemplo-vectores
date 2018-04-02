#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int n=0,a;
    cout<<"Digite numero de empleados: ";
    cin>>n;
    
    
    string nombres[n];
    int ed[n];
    int sueldo[n];
    for(int i=0; i<n; i++)
    {
      cout<<"Digite Nombre: ";
      cin>>nombres[i];  
      cout<<"Digite Edad: ";
      cin>>ed[i]; 
      cout<<"Digite Sueldo: ";
      cin>>sueldo[i]; 
       
      cout<<"\n"<<endl;     
    }
    cout<<"\n"<<endl;
    for(int i=0; i<n; i++)
    {
      cout<<nombres[i]+"--->>";
      cout<<ed[i]; 
      cout<<"--->>";
      cout<<sueldo[i]<<endl;
           
    }
    int mayor = 0;
     for(int i=0; i<n; i++)
    {
      
      if(sueldo[i]>mayor)
      {
        mayor=sueldo[i];
        a=i;
        
      }                 
           
    }
    cout<<"\n"<<endl; 
    cout<<nombres[a];
    cout<<" Tiene el sueldo mas alto";
    cout<<mayor<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
