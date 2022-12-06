// Pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//Prototypes
string prota;
string rival;
string x, ans;
string name, mote;
int ansPr;
int ansRv;
int initial = 0;
int initial2 = 0;
bool protaFirst = 0;
bool rivalFirst = 0;
void ProtaSelectFirst(), RivalSelectFirst();
void protaPokemonName(), rivalPokemonMote();

int main()
{
    cout << "Hola! Perdon por hacerlos esperar\n";
    cout << "Bienvenidos al mundo de Pokemon!\n";
    cout << "Yo soy Birch, la gente me conoce como el profesor pokemon de la region de Hoenn.\n\n";

    cout << "Nuestro mundo esta habitado por seres fanstasticos llamadas Pokemon, para algunos son mascotas, otros las usan para pelar, por mi parte soy alguien que ha dedicado la vida a estudiarlos y entenderlos todo lo que he podido. Hay mucho secretos que aun rodean a estas criaturas, para desvelar los misterios de los Pokemon he estado llevando a cabo una investigacion.\n\n";

    cout << "Como te llamas? ";
    cin >> prota;

    cout << "\n";

    cout << "Y tu eres? ";
    cin >> rival;

    system("cls");

    cout << "Birch:" << "Al cumplir las 10 primaveras cada nuevo aspirante a entrenador Pokemon tiene derecho a recibir cualquiera de los 3 Pokemon insignia de la region de Hoenn, claro que ustedes ya lo saben por eso estan aqui.\n";
    cout << "Bien deben estar ansiosos por conocer a su primer Pokemon.\n\n";

    cout << "Este es Torchic, tipo fuego.\n";
    cout << "El es Mudkip, tipo agua.\n";
    cout << "Y finalmente Treecko, tipo planta.\n\n";

    cout << "Entonces quien de los dos eligira primero, " << prota << " o " << rival << "?\n";
    cin >> x;

    system("cls");

    if (x == prota) {
        cout << "Birch: " << "Adelante " << prota << ", cual de ellos sera tu nuevo companero?\n";
        cout << "1. Torchic        2. Mudkip        3. Treecko\n";
        cin >> initial;

        protaFirst = 1;
    }

    if (x == rival) {
        cout << "Birch: " << "Adelante " << rival << ", cual de ellos sera tu nuevo companero?\n";
        cout << "1. Torchic        2. Mudkip        3. Treecko\n";
        cin >> initial2;

        rivalFirst = 1; 
    }

    if (protaFirst == 1) {
        ProtaSelectFirst();
    }

    if (rivalFirst == 1) {
        RivalSelectFirst();
    }

    system("cls");

    cout << "Birch: " << prota << " deseas nombrar a tu nuevo amigo?\n\n";
    cout << "1. Si         2.No\n";
    cin >> ansPr;

    if (ansPr == 1) {
        protaPokemonName();
    }  

    cout << "Birch: " << rival << "  quieres nombrar a tu Pokemon?\n\n";
    cout << "1. Si         2.No\n";
    cin >> ansRv;
    
    if (ansRv == 1) {
        rivalPokemonMote();
    }

    system("cls");

    cout << "Birch: Bien, ya que ambos obtuvieron a su primer Pokemon. Es momento de que ganen experiencia con su primera batalla.\n";
    cout << "Mucha suerte y que gane el mejor.\n";

    /*system("cls");

    cout << prota << " es momento de cambiarle el nombre a tu nuevo amigo?\n\n";
    cin >> name;

    cout << rival << " tienes que nombrar a tu Pokemon?\n\n";
    cin >> mote;

    system("cls");

    cout << prota << " es momento de cambiarle el nombre a tu nuevo amigo?\n\n";*/

}

void ProtaSelectFirst() {
    if (initial == 1) {
        cout << "Tu turno " << rival << ", quien quieres que sea tu nuevo companero?\n";
        cout << "2. Mudkip        3. Treecko\n";
        cin >> initial2;
    } else if (initial == 2) {
        cout << "Tu turno " << rival << ", quien quieres que sea tu nuevo companero?\n";
        cout << "1. Torchic        3. Treecko\n";
        cin >> initial2;
    } else if (initial == 3) {
        cout << "Tu turno " << rival << ", quien quieres que sea tu nuevo companero?\n";
        cout << "1. Torchic        2. Mudkip\n";
        cin >> initial2;
    }
}

void RivalSelectFirst() {
    if (initial2 == 1) {
        cout << "Tu turno " << prota << ", quien quieres que sea tu nuevo companero?\n";
        cout << "2. Mudkip        3. Treecko\n";
        cin >> initial;
    } else if (initial2 == 2) {
        cout << "Tu turno " << prota << ", quien quieres que sea tu nuevo companero?\n";
        cout << "1. Torchic        3. Treecko\n";
        cin >> initial;
    } else if (initial2 == 3) {
        cout << "Tu turno " << prota << ", quien quieres que sea tu nuevo companero?\n";
        cout << "1. Torchic        2. Mudkip\n";
        cin >> initial;
    }
}

void protaPokemonName() {
    if (initial == 1) {
        cout << prota << " cual sera el nombre para Torchic?\n";
        cin >> name;
    }else if (initial == 2) {
        cout << prota << " cual sera el nombre para Mudkip?\n";
        cin >> name;
    }else if (initial == 3) {
        cout << prota << " cual sera el nombre para Treecko?\n";
        cin >> name;
    }
}

void rivalPokemonMote() {
    if (initial2 == 1) {
        cout << rival << " cual sera el nombre para Torchic?\n";
        cin >> mote;
    }else if (initial2 == 2) {
        cout << rival << " cual sera el nombre para Mudkip?\n";
        cin >> mote;
    }else if (initial2 == 3) {
        cout << rival << " cual sera el nombre para Treecko?\n";
        cin >> mote;
    }
}