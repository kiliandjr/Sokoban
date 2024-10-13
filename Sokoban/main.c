#include "fonction.h"
void tableauJeu(char tab[10][10]){
for(int i=0; i!=10; i++){
  for(int j=0; j!=10; j++){
            printf("%c", tab[i][j]);
}
printf("\n");
}}


int main()
{
srand(time(NULL));
char tableau[10][10]={{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#',}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'}, {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#',}};


int departjoueur=0;
int departcaisse=0;
int departfin=0;
char deplacementjoueur;
int x;
int y;
int x2;
int y2;
int p=0;
    while(departjoueur!=1){
            x= rand() % 10+1;
            y= rand() % 10+1;
            if (tableau[x][y]==' ') {
               departjoueur=1;
               tableau[x][y]='o';

            }

            else {
                    departjoueur=0;

                    }}

    while(departcaisse!=1){
            x2= rand() % 10+1;
            y2= rand() % 10+1;
            if (tableau[x2][y2]==' ') {
               departcaisse=1;
               tableau[x2][y2]='X';
            }

            else {
                    departcaisse=0;
                    }}

    while(departfin!=1){
            int x3= rand() % 10+1;
            int y3= rand() % 10+1;
            if (tableau[x3][y3]==' ') {
               departfin=1;
               tableau[x3][y3]='.';
            }

            else {
                    departfin=0;}

            }
 tableauJeu(tableau);
while (p!=1){
 printf("Deplacez vous dans le jeu en utilisant z(haut), s(bas), q(gauche), d(droite):\n");
    scanf("%c",&deplacementjoueur);


    if (deplacementjoueur=='z'){
    if (tableau[x-1][y]==tableau[x2][y2]){
    if (tableau[x-2][y]=='.'){
        p=1;
    }
        else {
        if (tableau[x-2][y]!='#'){
        tableau[x2][y2]=' ';
        tableau[x2-1][y2]='X';
        x2--;
        tableau[x][y]=' ';
        tableau[x-1][y]='o';
        x--;
    }
    else {
        printf("Vous ne pouvez pas enfoncer la boite dans un mur!!!\n");
    }}}

        else{
        if (tableau[x-1][y]!='#') {
        tableau[x][y]=' ';
        tableau[x-1][y]='o';
        x--;}
        else{
            printf("Vous ne pouvez pas foncer dans un mur!!!\n");
        }
    }}


   else if(deplacementjoueur=='s'){
        if (tableau[x+1][y]==tableau[x2][y2]){
        if (tableau[x+2][y]=='.') {
            p=1;
        }
        else{
        if (tableau[x+2][y]!='#'){
        tableau[x2][y2]=' ';
        tableau[x2+1][y2]='X';
        x2++;
        tableau[x][y]=' ';
        tableau[x+1][y]='o';
        x++;;
    }
    else {
        printf("Vous ne pouvez pas enfoncer la boite dans un mur!!!\n");
    }}}

     else {
        if (tableau[x+1][y]!='#') {
        tableau[x][y]=' ';
        tableau[x+1][y]='o';
        x++;}
    else{
            printf("Vous ne pouvez pas foncer dans un mur!!!\n");
        }}
    }


    else if(deplacementjoueur=='q') {
        if (tableau[x][y-1]==tableau[x2][y2]){
        if (tableau[x][y-2]=='.') {
            p=1;
        }
    else{
        if (tableau[x][y-2]!='#'){
            tableau[x2][y2]=' ';
            tableau[x2][y2-1]='X';
            y2--;
            tableau[x][y]=' ';
            tableau[x][y-1]='o';
            y--;
    }
    else {
        printf("Vous ne pouvez pas enfoncer la boite dans un mur!!!\n");
    }}}


        else {
        if (tableau[x][y-1]!='#') {
        tableau[x][y]=' ';
        tableau[x][y-1]='o';
        y--;}
        else{
            printf("Vous ne pouvez pas foncer dans un mur!!!\n");
        }}
    }


    else if (deplacementjoueur=='d') {
        if (tableau[x][y+1]==tableau[x2][y2]){
        if (tableau[x][y+2]=='.') {
            p=1;
        }
    else {
    if (tableau[x][y+2]!='#'){
        tableau[x2][y2]=' ';
        tableau[x2][y2+1]='X';
        y2++;
        tableau[x][y]=' ';
        tableau[x][y+1]='o';
        y++;;
    }
    else {
        printf("Vous ne pouvez pas enfoncer la boite dans un mur!!!\n");
    }}}
    else{
        if (tableau[x][y+1]!='#') {
        tableau[x][y]=' ';
        tableau[x][y+1]='o';
        y++;}
        else{
            printf("Vous ne pouvez pas foncer dans un mur!!!\n");
        }
    }}

    else{

        printf("Le caractere n'est pas valide.\n");
    }

tableauJeu(tableau);}



printf("Vous avez gagne!!!\n");










    exit(0);
}
