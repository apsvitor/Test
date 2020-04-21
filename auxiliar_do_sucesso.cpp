#include "auxiliar_do_sucesso.h"
#include <iostream>
#include <iomanip>
#include "lib_do_sucesso.h"
using namespace std;
//===============================================================================
// Esta biblioteca tem como objetivo criar as telas para cada uma das funcoes
// presentes na lib_do_sucesso.h
//===============================================================================
void txt_Desenha_Retangulo()
{
    int m,n;
    char c_int, c_ext;
    cout << "Entre com as dimensoes da matriz e o caracter desejado:" << endl
         << "Linhas: ";
    cin >> m;
    cout << "Colunas: ";
    cin >> n;
    cout << "Caracter Externo: ";
    cin >> c_ext;
    cout << "Caracter Interno: ";
    cin >> c_int;
    desenha_Retangulo(m,n,c_ext,c_int);
    return;
}
void txt_Volume_Esfera()
{
    double Raio;
    cout << "Raio = ";
    cin >> Raio;
    cout << "Volume = " << fixed << setprecision(3) << volume_Esfera(Raio) << endl;
    return;
}
void txt_Fat_x()
{
    int n;
    cout << "Desejo calcular o fatorial de:  ";
    cin >> n;
    cout << "Fatorial de " << n << " = " << fat_x(n) << endl;
    return;
}
void txt_Fib()
{
    int numero;
    cout << "Desejo saber o seguinte termo de Fibonacci: ";
    cin >> numero;
    cout << "Reposta = " << fib(numero) << endl;
    return;
}
void txt_Regular()
{
    int n;
    cout << "Desejo saber se o seguinte numero eh regular: ";
    cin >> n;
    cout << "Resposta = " << regular(n) << endl;
    return;
}
void txt_Combinacoes()
{
    int n, p;
    cout << "Calculo das combinacoes de N tomadas P a P, sendo:\n"
         << "\tN = ";
    cin >> n;
    cout << "\tP = ";
    cin >> p;
    cout << "Combinacoes de N, P a P = " << fat_x(n)/(fat_x(p)*fat_x(n-p)) << endl;
    return;
}
void txt_Palindromo()
{
    string p;
    cout << "Desejo saber se a seguinte string eh um palindromo: ";
    cin >> p;
    cout << "Palindromo?\t" << palindromo(p, p.length()) << endl;
    return;
}
void txt_To_Lower_Case()
{
    string s;
    cout << "Desejo transformar a seguinte string em letras minusculas: ";
    cin >> s;
    to_Lower_Case(s,s.length());
    cout << "\nResultado = " << s << endl;
    return;
}
void txt_To_Upper_Case()
{
    string s;
    cout << "Desejo transformar a seguinte string em letras maiusculas: ";
    cin >> s;
    to_Upper_Case(s,s.length());
    cout << "\nResultado = " << s << endl;
    return;
}
void txt_Caixa_Com_Texto_Centralizado()
{
    int n;
    char l;
    string x;
    cout << "Desejo desenhar uma caixa com N colunas de comprimento, com as bordas preenchidas por L.\n"
         << "N = ";
    cin >> n;
    cout << "L = ";
    cin >> l;
    cout << "Quero ainda que o seguinte texto apareca dentro da caixa: ";
    cin.ignore();
    getline(cin, x);
    caixa_Com_Texto_Centralizado(x,n,l);
    return;
}
void txt_Ordena_Tres()
{
    int a,b,c;
    cout << "Desejo ordenar tres numeros em ordem crescente: ";
    cin >> a >> b >> c;
    ordena_Tres(a,b,c);
    cout << "\nEm ordem crescente: " << a << ", " << b << ", " << c << ".\n";
}
void txt_Tamanho_String()
{
    cout << "Desejo saber o tamanho da seguinte string: ";
    char S[100];
    cin.ignore();
    cin.getline(S,100);
    cout << "Tamanho da string: " << tamanho_String(S) << endl;
}
void txt_Conta_String()
{
    char S1[100], S2[100];
    cout << "Desejo realizar a comparacao lexicografica entre duas strings: \n"
         << "Primeira String: ";
    cin.ignore();
    cin.getline(S1,100);
    cout << "\nSegunda String:  ";
    cin.getline(S2,100);
    cout << "\nResposta: " << conta_String(S1,S2) << endl;
    return;
}
void txt_String_To_Int()
{
    string S;
    cout << "Desejo converter a seguinte string para inteiro: ";
    cin >> S;
    cout << "\nInteiro resultante: " << string_to_Int(S) << endl;
}
void txt_No_Spaces()
{
    string S;
    cout << "Desejo remover os espacos da seguinte string: ";
    cin.ignore();
    getline(cin,S);
    S = no_Spaces(S);
    cout << "\nString Alterada: " << S << endl;
}
void txt_Sub_Strings()
{
    char sep;
    string S;
    int qntd = 0;
    cout << "Desejo separar a seguinte string:\nString: ";
    cin.ignore();
    getline(cin,S);
    cout << "Caracter de separacao: ";
    cin >> sep;
    string *subs = sub_Strings(S,sep,qntd);
    for (int i=0;i<qntd;i++)
        cout << '[' << i << "] = " << subs[i] << endl;
    delete subs;
}

void txt_Sub_Check()
{
    string S1,S2;
    cout << "Desejo saber se existe ocorrencia de S2 em S1:\n"
         << "String 1: ";
    cin.ignore();
    getline(cin,S1);
    cout << "String 2: ";
    getline(cin,S2);
    int posicao = sub_Check(S1,S2);
    if  (posicao == -1)
        cout << "Nao existe ocorrencia de S2 em S1.\n";
    else
        cout << "Posicao inicial de ocorrencia: " << posicao << endl;
}
void txt_Soma_Gigante()
{
    char S1[100],S2[100];
    char *p;
    cout << "Desejo realizar a soma de dois valores:\n"
         << "Valor 1: ";
    cin.ignore();
    cin.getline(S1,100);
    cout << "Valor 2: ";
    cin.getline(S2,100);
    p = soma_Gigante(S1, S2);
    cout << "Soma dos numeros: ";
    int i = 0;
    for(; p[i]!='\0'; i++);
    for(; i>=0; i--)
        cout << p[i];
    cout << endl;
}
void txt_find_Greater_and_Smaller()
{
    int Tam, smallIndex = 0, bigIndex = 0;
    cout << "Desejo determinar o maior e o menor valor de um vetor de tamanho: ";
    cin >> Tam;
    int* p;
    cout << "\nLeitura do vetor: ";
    p = read_Array(Tam,p);
    find_Greater_and_Smaller(p,Tam,smallIndex,bigIndex);
    cout << "\nO maior valor eh " << p[bigIndex] << " e esta na posicao [" << bigIndex << "]\n\n"
         << "O menor valor eh " << p[smallIndex] << " e esta na posicao [" << smallIndex << "]\n";
    delete p;
}
void txt_Soma_Matriz()
{
    int LA, CA, LB, CB;
    int **A, **B, **Soma;
    cout << "Desejo somar duas matrizes A e B:\n"
         << "Dimensoes da Matriz A: ";
    cin >> LA >> CA;
    cout << "\nDimensoes da Matriz B: ";
    cin >> LB >> CB;
    while (LA != LB || CA != CB)
    {
        cout << "TODO MUNDO SABE QUE SO SE SOMA MATRIZES DE MESMAS DIMENSOES!!!\n"
             << "TENTE DE NOVO!\n"
             << "Dimensoes da Matriz A: ";
        cin >> LA >> CA;
        cout << "Dimensoes da Matriz B: ";
        cin >> LB >> CB;
    }
    cout << "Leia os valores da Matriz A:\n";
    A = read_Matrix(A,LA,CA);
    cout << "Leia os valores da Matriz B:\n";
    B = read_Matrix(B,LB,CB);
    Soma = sum_Of_Matrix(A,B,LA,CA);
    print_Matrix(Soma,LA,CA);
    delete_Matrix(Soma,LA);
}






