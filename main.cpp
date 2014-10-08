#include <iostream>
#include "bonjour.h"

using namespace std;
void Affiche::saisir(){
cout<<" Bonjour "<<endl;
cout<<"Entrer un nombre entier "<<endl;
cin>>a;
}
void Affiche::affich(){
 
 cout<<" le nombre entier saisi est : "<<a<<endl;
}
int main(){
Affiche b;
b.saisir();
b.affich();

return 0;
}