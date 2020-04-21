#include <iostream>
#include "lib_do_sucesso.h"
#include "auxiliar_do_sucesso.h"
using namespace std;
using namespace vitor::txt;
int main()
{
    printOptions();
    int option;
    cin >> option;
    cout << endl;
    while(option)
    {
        // declaracao de variaveis que poderao ser utilizadas

        //===============================================================
        switch(option)
        {
            case 1:
                vitor::txt::txt_Desenha_Retangulo();
                break;
            case 2:
                vitor::txt::txt_Volume_Esfera();
                break;
            case 3:
                vitor::txt::txt_Fat_x();
                break;
            case 4:
                vitor::txt::txt_Fib();
                break;
            case 5:
                vitor::txt::txt_Regular();
                break;
            case 6:
                vitor::txt::txt_Combinacoes();
                break;
            case 7:
                vitor::txt::txt_Palindromo();
                break;
            case 8:
                vitor::txt::txt_To_Lower_Case();
                break;
            case 9:
                vitor::txt::txt_To_Upper_Case();
                break;
            case 10:
                vitor::txt::txt_Caixa_Com_Texto_Centralizado();
                break;
            case 11:
                vitor::txt::txt_Ordena_Tres();
                break;
            case 12:
                vitor::txt::txt_Tamanho_String();
                break;
            case 13:
                vitor::txt::txt_Conta_String();
                break;
            case 14:
                vitor::txt::txt_String_To_Int();
                break;
            case 15:
                vitor::txt::txt_No_Spaces();
                break;
            case 16:
                vitor::txt::txt_Sub_Strings();
                break;
            case 17:
                vitor::txt::txt_Sub_Check();
                break;
            case 18:
                vitor::txt::txt_Soma_Gigante();
                break;
            case 19:
                vitor::txt::txt_find_Greater_and_Smaller();
                break;
            case 20:
                vitor::txt::txt_Soma_Matriz();
                break;
            default:
                cout << "YOU HAD ONE JOB!";
        }
        system("pause");
        system("cls");
        printOptions();
        cin >> option;
        cout << endl;
    }
    cout << "\nA Lib do Sucesso agradece sua preferencia.\n\n";
}
