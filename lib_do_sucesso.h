#ifndef LIB_DO_SUCESSO_H
#define LIB_DO_SUCESSO_H
#include <string>
using namespace std;

void printOptions();
void desenha_Retangulo(int m, int n, char c_ext, char c_int);
double volume_Esfera(double r);
int fat_x(int n);
int fib(int n);
int regular( int n);
bool palindromo(string s, int tam);
void to_Lower_Case(string &x, int tam);
void to_Upper_Case(string &x, int tam);
void caixa_Com_Texto_Centralizado(string x, int N, char C);
void ordena_Tres(int &a, int &b, int &c);
void troca(int &x, int &y);
int tamanho_String(char *p);
int conta_String(char *p1, char *p2);
int string_to_Int(string S);
string no_Spaces(string S);
string* sub_Strings(string S, char C, int &qntd);
int sub_Check(string S1, string S2);
char* soma_Gigante(char s1[], char s2[]);
int* create_Array(int Tam);
int* read_Array(int Tam, int *p);
void print_Array(int Tam, int *p);
int **create_Matrix (int l, int c);
void delete_Matrix (int**m, int l);
int** read_Matrix (int **m,int l, int c);
void print_Matrix (int** m, int l, int c);
int** sum_Of_Matrix(int** A, int** B, int LA, int CA);

#endif // LIB_DO_SUCESSO_H
