#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip> 
#include <iostream>
#include <fstream>

using namespace std;

void vpis (int tabela [] [2], int &stevec);
void izpis (int tabela [] [2], int &stevec);

int main(){
    int tabela [100] [2];
    int stevec = -1;
    vpis (tabela, stevec);
    izpis (tabela, stevec);
    return 0;
}

void vpis (int tabela [] [2], int &stevec){
    int prebrano;
    cin >> prebrano;
    do{
        int preveri = 0;
        for (int i = 0; i < stevec + 1; i++){
            if (prebrano == tabela [i] [0]){
            tabela [i] [1] ++;
            preveri = 1;
            }
            break;
        }
        if (preveri == 0){
            tabela [stevec + 1] [0] = prebrano;
            tabela [stevec + 1] [1] = 1;
            stevec ++;
        }
        cin >> prebrano;
    }while(prebrano != -1);
}
void izpis (int tabela [] [2], int &stevec){
    system("clear");
    for (int i = 0; i < stevec + 1; i++){
        cout << tabela [i] [0] << "€: " << tabela [i] [1] << "X" << endl;
    }
    int sestevek = 0;
    for (int i = 0; i < stevec + 1; i++){
        sestevek = sestevek + (tabela [i] [0] * tabela [i] [1]);
    }
    cout << "Skupaj: " << sestevek << "€";
}