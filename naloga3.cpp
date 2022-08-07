#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip> 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void vpis_stevil_v_tabelo (int tabela [], int kombinacije []);
void iskanje (int tabela [], int kombinacije []);
void kombinacije_plus_ena (int kombinacije []); 

int main(){
    int tabela [9];
    int kombinacije [8];
    
    vpis_stevil_v_tabelo(tabela, kombinacije);
    //iskanje(tabela, kombinacije);

    return 0;
}
void vpis_stevil_v_tabelo (int tabela [], int kombinacije []){
    for(int i = 0; i < 9; i++){
        tabela [i] = i + 1;
    }
    for(int i = 0; i < 8; i++){
        kombinacije [i] = 0;
    }
}
void iskanje (int tabela [], int kombinacije []){
    for (int i = 0; i < 6561; i++){
        int sestevek = tabela [0];
        string racun = to_string (tabela [0]);
        for (int j = 0; j < 8; j++){
            if (kombinacije [j] == 0){
                sestevek = sestevek + tabela [j + 1];
                string tmp = " + ";
                racun = racun + tmp;
                tmp = to_string (tabela [j + 1]);
                racun = racun + tmp;
            }
            else if (kombinacije [j] == 1){
                sestevek = sestevek - tabela [j + 1];
                string tmp = " - ";
                racun = racun + tmp;
                tmp = to_string (tabela [j + 1]);
                racun = racun + tmp;
            }
            else if (kombinacije [j] == 2){
                tabela [j + 2] = (tabela [j + 1] * 10) + tabela [j + 2];
                string tmp = to_string (tabela [j + 1]);
                racun = racun + tmp;
            }
            else {
                cout << "Napaka!";
            }
        }
        kombinacije [0] ++;
        kombinacije_plus_ena (kombinacije);
        cout << racun << endl;
        for(int i = 0; i < 9; i++){
            tabela [i] = i + 1;
        }
    }
}
void kombinacije_plus_ena (int kombinacije []){
    for (int i = 0; i < 8; i++){
        if (kombinacije [i] > 2){
            kombinacije [i] = 0;
            kombinacije [i + 1] ++;
        }
    }
}