#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
#include "string.h"
#include <iostream>
#include<map>
using namespace std;

//1 a realizar estan ubicados en el archivo Lista.h

float obtenerPromedio(std::list<float> mi_lista)
{
    float suma=0;
    float promed=0;
    int cont2=0;
    for(std::list<float>::iterator i=mi_lista.begin(); i!=mi_lista.end(); i++)
    {
        suma+=(*i);
        cont2++;
        if(i!=mi_lista.end())
            promed=suma/cont2;
    }
    return promed;
}

int obtenerMediana(std::vector<int> mi_vector)
{
//    map<int,int> mi_mapa;
//    for(int i=0;i<mi_vector.size();i++)
//    mi_mapa[i]=i;
//
//    for(int i=mi_mapa.begin();i!=mi_mapa.end();i++)
//        cout<<mi_mapa[i]<<endl;

return 0;
}

bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str(),ios::ate);
//   in.seekg(0,ios::end);
    int fin = in.tellg();
    in.seekg(0);
    string palabra;
    while(in.good())
    {
        in>>palabra;
        if(strcmp(palabra.c_str(),cadena.c_str())==0)
            return true;

    }
    in.close();

    return false;
}

char obtenerUltimaLetra(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    string str;
    while(in>>str)
    {

    }
    char lastChar = str.at( str.length() - 1 );
    in.close();
    return lastChar;
}
int cont=0;

int contarEnArbol(NodoTrinario* raiz, int num)
{

if(raiz==NULL)
    return 0;

if(raiz->num==num)
     cont++;
if(contarEnArbol(raiz->izq,num))
    cont++;
if(contarEnArbol(raiz->medio,num))
    cont++;
if(contarEnArbol(raiz->der,num))
    cont++;
cout<<cont<<endl;
    return cont;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

