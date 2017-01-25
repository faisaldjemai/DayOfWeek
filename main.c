#include <stdio.h>

int date, mois, anne, bissextile;

int fm( int mois) {
    int fmois;

     fmois = 3 + (2 - bissextile) * ((mois + 2) / (2 * mois))
             + (5 * mois + mois / 9) / 2;

     fmois = fmois % 7;
    return fmois;
}

int jour_la_semaine(int date, int mois, int anne) {

    int jourLaSemaine;
    int AA = anne % 100;
    int siecle = anne / 100;

    printf("\nDate: %d/%d/%d \n", date, mois, anne);

    jourLaSemaine = 1.25 * AA + fm( mois) + date - 2 * (siecle % 4);


    jourLaSemaine = jourLaSemaine % 7;

    switch (jourLaSemaine) {
        case 0:
            printf("Jour La Semaine = Samedi");
            break;
        case 1:
            printf("Jour La Semaine = Dimanche");
            break;
        case 2:
            printf("Jour La Semaine = Lundi");
            break;
        case 3:
            printf("Jour La Semaine = Mardi");
            break;
        case 4:
            printf("Jour La Semaine = Mercredi");
            break;
        case 5:
            printf("Jour La Semaine = Jeudi");
            break;
        case 6:
            printf("Jour La Semaine = Vendredi");
            break;
        default:
            printf("Données incorrectes");
    }
    return 0;
}

int main() {


    printf("\nEntrez le anne : ");
    scanf("%d", &anne);

    printf("\nEntrez le mois : ");
    scanf("%d", &mois);

    printf("\nEntrez le date : ");
    scanf("%d", &date);

    if ((anne % 100 == 0) && (anne % 400 != 0))
        bissextile = 0;

     else if (anne % 4 == 0)
        bissextile = 1;
        else
        bissextile = 0;

    if ((bissextile == 0)&& (mois == 02) && (date == 29))
     printf("Données incorrectes");

    else
     jour_la_semaine(date, mois, anne) ;

    return 0;
}