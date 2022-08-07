#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip> 
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int predzadnje = 0;
    int zadnje = 1;
    int sedanje;
    int vhod;
    cin >> vhod;

    for (int i = 0; i < vhod; i++){
        sedanje = predzadnje + zadnje;
        predzadnje = zadnje;
        zadnje = sedanje;
    }

    system("clear");
    cout << zadnje;

    return 0;
}