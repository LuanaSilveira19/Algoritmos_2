#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>

using namespace std;


main()
{
    setlocale(LC_ALL, "Portuguese");
    ofstream escreve("exer_36.txt");
    int mat[8][8];
    int valor;
    srand(time(NULL));
    if(escreve.is_open())
    {
        for(int l = 0; l < 8; l++)
        {
            for(int c = 0; c < 8; c++)
            {
                if(c == 0){

                   escreve<< (mat[l][c] = rand() % 40);

                }
                else{

                     mat[l][c] = rand() % 40;
                    escreve << "\t" << (mat[l][c] = rand() % 40);
                }
            }
            escreve << "\n";
        }


        escreve << "\n";
        escreve << "\nDiagonal principal: ";
        for(int l = 0; l < 8; l++)
        {
            for(int c = 0; c < 8; c++)
            {
                if(l == c)
                    escreve << mat[l][c] << ",";

            }
        }

        escreve << "\n";
        escreve << "Diagonal secundária: ";
        for(int l = 0; l < 8; l++)
        {
            for(int c = 0; c < 8; c++)
            {
                if((l + c) == 7)
                    escreve << mat[l][c] << ", ";
            }
        }
        escreve << "\n";
       escreve << "Elementos acima da diagonal principal: ";
        for (int i = 0; i < 8; ++i) {
            for (int j = i + 1; j < 8; ++j) {
                escreve << mat[i][j] << " ";
            }
        }
        escreve << "\n";
        escreve << "Elementos abaixo da diagonal principal: ";
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < i; ++j) {
                escreve << mat[i][j] << ", ";
            }
        }


    }
    else
    {
        cout << "Falha ao abrir o arquivo.";
    }
    cout << "\n\nDados no arquivo! " << endl;
    escreve.close();
}


