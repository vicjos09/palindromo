#include <iostream>
#include <string>


int main()
{
    std::string nombre;
    std::cout<<"Este programa indica si es un palindromo"<<"\n";
    std::cout<<"Ingresa una palabra"<<"\n";
    std::cin>>nombre;
    
    /*for (int i=0;i<10;i++) {
    j-0        a-4
    u-1        n-3
    a-2        a-2
    }*/
    int x=0;
    int i=0;
    
    do{ 
        i++;
        if(nombre[i]=='\0'){
        x=1; 
        }
        
    }while(x!=1);
    i=i-1;
    
    std::cout<<"Longitud "<<i+1<<"\n";
    int len=i;
    bool siEs=true;

    for(int idx=0;idx<len;idx++){
        
     std::cout<<"idx : "<<nombre[idx]<<" posicion: "<<idx<<" posicion :"<<i<<" letra "<<nombre[i]; 
     std::cout<<'\n';
     if(nombre[idx]!=nombre[i]){
         siEs=false;
     }
     i--;
    }

    if(siEs){
        std::cout<<"Es un palindromo";
    }else{
         std::cout<<"no es un palindromo";
    }
    //std::cout<<"El caracter numero 1 es "<<nombre[i]<<"\n"; 
    return 0;
}