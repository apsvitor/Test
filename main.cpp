#include <iostream>
#include "lib_do_sucesso.h"
#include "auxiliar_do_sucesso.h"
using namespace std;

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
                txt_Desenha_Retangulo();
                break;
            case 2:
                txt_Volume_Esfera();
                break;
            case 3:
                txt_Fat_x();
                break;
            case 4:
                txt_Fib();
                break;
            case 5:
                txt_Regular();
                break;
            case 6:
                txt_Combinacoes();
                break;
            case 7:
                txt_Palindromo();
                break;
            case 8:
                txt_To_Lower_Case();
                break;
            case 9:
                txt_To_Upper_Case();
                break;
            case 10:
                txt_Caixa_Com_Texto_Centralizado();
                break;
            case 11:
                txt_Ordena_Tres();
                break;
            case 12:
                txt_Tamanho_String();
                break;
            case 13:
                txt_Conta_String();
                break;
            case 14:
                txt_String_To_Int();
                break;
            case 15:
                txt_No_Spaces();
                break;
            case 16:
                txt_Sub_Strings();
                break;
            case 17:
                txt_Sub_Check();
                break;
            case 18:
                txt_Soma_Gigante();
                break;
            case 19:
                txt_find_Greater_and_Smaller();
                break;
            case 20:
                txt_Soma_Matriz();
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
