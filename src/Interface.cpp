#include "Interface.h"
#include <Estado.h>
#include <iostream>
using namespace std;

void Interface::opcoes_maquina(){
    cout << endl;
    cout << "Refrigerantes custam R$1,50" << endl;
    Estado est;
    est.valor_total = 0;
    est.estado_atual = 0; //Inicia a maquina de estados
    while (liberado = 1){
        cout << endl;
        cout << "O que voce deseja:" << endl;
        cout << "\t 1 - Inserir valor" << endl;
        cout << "\t 2 - MEET " << endl;
        cout << "\t 3 - ETIRPS " << endl;
        cout << "\t 4 - Tecla DEV" << endl;
        cin >> opcao;
        switch(opcao){
        case 1:
            est.next_state();
            break;
        case 2:
            if(est.valor_total < 1.50){
                cout << endl << "Os refrigerantes custam R$ 1.50" << endl;
                cout << "Valor total inserido: " << est.valor_total <<endl;
                cout << "Insira mais moedas para chegar ao valor" << endl;
            }else{
                cout << endl << "Refrigerante MEET entregue!" << endl;
                est.valor_total = 0;
            }
            break;
        case 3:
            if(est.valor_total < 1.50){
                cout << endl << "Os refrigerantes custam R$ 1.50" << endl;
                cout << "Valor total inserido: " << est.valor_total <<endl;
                cout << "Insira mais moedas para chegar ao valor" << endl;
            }else{
                cout << endl << "Refrigerante ETIRPS entregue!" << endl;
                est.valor_total = 0;
            }
            break;
        case 4:
            est.tecla_dev();
            break;
        }
    }
}
