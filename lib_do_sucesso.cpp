#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "lib_do_sucesso.h"
#include "auxiliar_do_sucesso.h"
#define PI 3.1415
#define INF 10e7
using namespace std;
void printOptions()
{
    cout << "Bem vindo ao Programa do Sucesso!\n\n"
         << "Escolha uma dentre as opcoes do menu a seguir:\n\n"
         << left << setw(40) << "[01] 1A5  Desenha Retangulo "       << "[11] 2A1 Ordenar tres numeros\n"
         << left << setw(40) << "[02] 1B2  Volume Esfera"            << "[12] 2A3 Tamanho string\n"
         << left << setw(40) << "[03] 1B6  Fatorial"                 << "[13] 2A4 Compara string\n"
         << left << setw(40) << "[04] 1B8  Fibonacci"                << "[14] 2B1 Converte string para int\n"
         << left << setw(40) << "[05] 1B9  Numero Regular"           << "[15] 2B3 Remove espacos em branco inicio e fim\n"
         << left << setw(40) << "[06] 1B10 Combinacoes"              << "[16] 2B4 Quebrar string\n"
         << left << setw(40) << "[07] 1C3  Palindromo"               << "[17] 2B5 Buscar na string\n"
         << left << setw(40) << "[08] 1C5  Converte para minusculas" << "[18] 2B6 Soma numeros gigantes\n"
         << left << setw(40) << "[09] 1C6  Converte para maiusculas" << "[19] 2C5 Maior e menor do vetor\n"
         << left << setw(40) << "[10] 1C7  Centralizar texto"        << "[20] 2D6 Soma matriz\n"
         << "\n\n\tOpcao de teste: ";
}
//=======================================================================
//1) Lista 1A - 5
void desenha_Retangulo(int m, int n, char c_ext, char c_int)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if  (j==0 || j==n-1 || i==0 || i==m-1)
                cout << c_ext;
            else
                cout << c_int;
        }
        cout << endl;
    }
}
//=======================================================================
//2) Lista 1B - 2
double volume_Esfera(double r)
{
    return 4*PI*r*r*r/3;
}
//=======================================================================
//3) Lista 1B - 6
int fat_x(int n)
{
    for (int i=n-1;i>0;i--)
        n = n*i;
    return n;
}
//=======================================================================
//4) Lista 1B - 8
int fib(int n)
{
    int f1=0, f2=1, FIB=0;
    if  (n==0)
        return f1;
    else
        if  (n==1)
            return f2;
        else
        {
            for (int i=0;i<n-2;i++)
            {
                FIB = f1+f2;
                f1 = f2;
                f2 = FIB;
            }
            return FIB;
        }
}
//=======================================================================
//5) Lista 1B - 9
int regular( int n)
{
    if  (n==1)
        return 0;
    for (int i=2; n != 1 && i < 6; i++)
    {
        while (n%i == 0)
        {
            n = n/i;
        }
        if  (i==3)
            i++;
    }
    if  (n==1)
        return 1;
    else
        return 0;
}
//=======================================================================
//6) Lista 1B - 10
// usa a funcao de 3)
//=======================================================================
//7) Lista 1C - 3
bool palindromo(string s, int tam)
{
    int i=0, j=tam-1;
    while (i<tam/2 && s[i] == s[j])
    {
        i++;
        j--;
    }
    if  (i>=tam/2)
        return 1;
    return 0;
}
//=======================================================================
//8) Lista 1C - 5
void to_Lower_Case(string &x, int tam)
{
    for (int i=0; i < tam; i++)
    {
        if  (x[i] >= 'A' && x[i] <= 'Z')
            x[i] = x[i] + 32;
    }
    return;
}
//=======================================================================
//9) Lista 1C - 6
void to_Upper_Case(string &x, int tam)
{
    for (int i=0; i < tam; i++)
    {
        if  (x[i] >= 'a' && x[i] <= 'z')
            x[i] = x[i] - 32;
    }
    return;
}
//=======================================================================
//10) Lista 1C - 7
void caixa_Com_Texto_Centralizado(string x, int N, char C)
{
    int tam = x.length();
    for (int i=0;i<N;i++)
        cout << C;
    cout << endl;
    if  (tam < N-2)
    {
        for (int i=0; i<N; i++)
        {
            if  (i==0 || i==N-1)
                cout << C;
            else
            {
                if  (i == (N-tam)/2)
                {
                    cout << x;
                    i = i+tam-1;
                }
                else
                    cout << ' ';
            }
        }
    }
    else
    {
        for (int i=0;i<N;i++)
        {
            if  (i==0 || i==N-1)
                cout << C;
            else
                cout << x[i-1];
        }
    }
    cout << endl;
    for (int i=0;i<N;i++)
        cout << C;
}
//=======================================================================
//11) Lista 2A - 1
void troca(int &x, int &y)
{
    int aux = x;
    x = y;
    y = aux;
}
void ordena_Tres(int &a, int &b, int &c)
{
    if  (a > b)
    {
        if  (c > a)					//bac
            troca(a,b);
        else // c<=a
        {
            if  (b < c)				//bca
            {
                troca(a,b);
                troca(b,c);
            }
            else //b>=c				//cba
                troca(a,c);
        }
    }
    else // a<=b
    {
        if  (a > c)					//cab
        {
            troca(a,c);
            troca(b,c);
        }
        else // a<=c
        {
            if  (b > c)				//acb
                troca(b,c);
        }
    }
    return;
}
//=======================================================================
//12) Lista 2A - 3
int tamanho_String(char *p)
{
    int i;
    char c = p[0];
    for (i=0;c!='\0';i++)
        c = p[i];
    return i-1;
}
//=======================================================================
//13) Lista 2A - 4
int conta_String(char *p1, char *p2)
{
    int i;
    char c = p1[0];
    for (i=0;c!='\0';i++)
        c = p1[i];
    int tam1 = i-1;
    c = p2[0];
    for (i=0;c!='\0';i++)
        c = p2[i];
    int tam2 = i-1;
    bool igual = true;
    for (i=0;i<tam1 && i<tam2;i++)
    {
        if  (p1[i] != p2[i])
        {
            igual = false;
            if  (p1[i] > p2[i])
                return 1;
            else
                return -1;
        }
    }
    if  (igual)
    {
        if  (tam1>tam2)
            return 1;
        else
        {
            if  (tam1<tam2)
                return -1;
            else
                return 0;
        }
    }
    return 0;
}
//=======================================================================
//14) Lista 2B - 1
int string_to_Int(string S)
{
    int sum=0;
    for (int i=S.length()-1;i>=0;i--)
    {
        sum += pow(10,i)*(S[S.length()-1-i]-48);
    }
    return sum;
}
//=======================================================================
//15) Lista 2B - 3
string no_Spaces(string S)
{
    string aux;
    for (unsigned int i=0;i<S.length();i++)
    {
        if  (S[i] != ' ')
            aux += S[i];
    }
    return aux;
}
//=======================================================================
//16) Lista 2B - 4
string* sub_Strings(string S, char C, int &qntd)
{
    qntd = 0;
    string temp = "";
    for (unsigned int i=0;i<S.size();i++)
    {
        if  (S[i] != C)
        {
            qntd++;
            i++;
            while(i < S.size() && S[i] != C)
                i++;
        }
    }
    string* aux = new string[qntd];
    int contString = 0;
    for (unsigned int i=0;i<S.size();i++)
    {
        if  (S[i] == C)
        {
            if  (temp.size() > 0)
            {
                aux[contString] = temp;
                contString++;
            }
            temp = "";
        }
        else
            temp += S[i];
    }
    if  (temp.size())
        aux[qntd-1] = temp;
    return aux;
}
//=======================================================================
//17) Lista 2B - 5
// funcao retorna a posicao inicial em S1 onde ocorre S2 ou retorna -1 se nao encontrar
int sub_Check(string S1, string S2)
{
    int pos = -1;
    for (unsigned int i=0;i<S1.size() && pos == -1;i++)
    {
        unsigned int j=0;
        while(j<S2.size() && S1[j+i] == S2[j])
            j++;
        if  (j == S2.size())
            pos = i;
    }
    return pos;
}
//=======================================================================
//18) Lista 2B - 6
char* soma_Gigante(char s1[], char s2[])
{
    char *resp = new char[101];
    char sobe1 = '0';
    int tam1 = 0, tam2 = 0, i = 0;
    for (; s1[tam1]!='\0'; tam1++);
    for (; s2[tam2]!='\0'; tam2++);
    for (; i<tam1 && i<tam2; i++)
    {
        if  (s1[tam1-1-i] + s2[tam2-1-i] + sobe1 - 96 > '9')
        {
            resp[i] = s1[tam1-1-i] + s2[tam2-1-i] + sobe1 - 106;
            sobe1 = '1';
        }
        else
        {
            resp[i] = s1[tam1-1-i] + s2[tam2-1-i] + sobe1 - 96;
            sobe1 = '0';
        }
    }
    if  (tam1 > tam2)
    {
        for (; i<tam1;i++)
        {
            if  (s1[tam1-1-i] + sobe1 - 48 > '9')
            {
                sobe1 = '1';
                resp[i] = '0';
            }
            else
            {
                resp[i] = s1[tam1-1-i] + sobe1 - 48;
                sobe1 = '0';
            }
        }
    }
    else
    {
        for (; i<tam2;i++)
        {
            if  (s2[tam2-1-i] + sobe1 - 48 > '9')
            {
                resp[i] = '0';
                sobe1 = '1';
            }
            else
            {
                resp[i] = s2[tam2-1-i] + sobe1 - 48;
                sobe1 = '0';
            }
        }
    }
    if  (sobe1 == '1')
    {
        resp[i] = '1';
        i++;
    }
        resp[i] = '\0';
    char aux;
    for (int j=0;j<i/2;j++)
    {
        aux = resp[j];
        resp[j] = resp[i-1-j];
        resp[i-1-j] = aux;
    }
    return resp;
}
//=======================================================================
//19) Lista 2C - 5
int* create_Array(int Tam)
{
    int* p = new int[Tam];
    for (int i=0;i<Tam;i++)
        p[i] = 0;
    return p;
}
int* read_Array(int Tam, int *p)
{
    p = create_Array(Tam);
    for (int i=0;i<Tam;i++)
        cin >> p[i];
    return p;
}
void print_Array(int Tam, int *p)
{
    for (int i=0;i<Tam;i++)
        cout << '[' << i << "] = " << p[i] << endl;
}
void find_Greater_and_Smaller(int* p, int Tam, int& smallIndex, int& bigIndex)
{
    int small = INF, big = 0;
    for (int i=0;i<Tam;i++)
    {
        if  (p[i] < small)
        {
            small = p[i];
            smallIndex = i;
        }
        if  (p[i] > big)
        {
            big = p[i];
            bigIndex = i;
        }
    }
}
//=======================================================================
//20) Lista 2D - 6
int **create_Matrix (int l, int c)
{
    int **m = new int* [l];
    for (int i=0;i<l;i++)
        m[i] = new int[c];
    for (int i=0;i<l;i++)
        for (int j=0;j<c;j++)
            m[i][j] = 0;
    return m;
}
void delete_Matrix (int**m, int l)
{
    for (int i=0;i<l;i++)
        delete[] m[i];
    delete m;
    return;
}
int** read_Matrix (int **m,int l, int c)
{
    m = create_Matrix(l,c);
    for (int i=0;i<l;i++)
        for (int j=0;j<c;j++)
            cin >> m[i][j];
    return m;
}
void print_Matrix (int** m, int l, int c)
{
    cout << "Matriz Somada:\n";
    for (int i=0;i<l;i++)
    {
        cout << "Linha [" << i << "] ";
        for (int j=0;j<c;j++)
            cout << m[i][j] << "  ";
        cout << endl;
    }
    return;
}
int** sum_Of_Matrix(int** A, int** B, int LA, int CA)
{
    int** S = create_Matrix(LA,CA);
    for (int i=0;i<LA;i++)
        for (int j=0;j<CA;j++)
            S[i][j] = A[i][j] + B[i][j];
    return S;
}
//=======================================================================
//THE END
