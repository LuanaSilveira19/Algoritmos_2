
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
   setlocale(LC_ALL,"portuguese");
   string nome;
   cout << "Informe um texto qualquer: ";
   getline(cin, nome);
   fflush(stdin);


     for(int i = 0; i < nome.size(); i++)
   {
       nome[i] = toupper(nome[i]);
   }

   cout << "\nMaiúsculo: ";
   cout << nome << endl;


   for(int i = 0; i < nome.size(); i++)
   {
       nome[i] = tolower(nome[i]);
   }

   cout << "\nMinúsculo: ";
   cout << nome << endl;

   for(int i = 0; i < nome.size(); i++)
   {
       if(i == 0)
          nome[i] = toupper(nome[i]);
       else{
          if(isspace(nome[i]))
              nome[i + 1] = toupper(nome[i + 1]);
       }
   }

   cout << "\nTexto com iniciais em maiúsculo: ";
   cout << nome << endl;

}

