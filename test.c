#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
        int tab[1] = { 10 };
        FILE *fichier;
        int i;
 
        fichier = fopen ("tableau.txt", "wb");
        if (!fichier) {
                return EXIT_FAILURE;
        }
 
        fwrite ("hfgsjhfgsdjhfgsdj  \s", sizeof tab, sizeof *tab, fichier);
        fwrite ("  marcosmedenou", sizeof tab, sizeof *tab, fichier);
        fclose (fichier);
 
//        memset (tab, 0, sizeof tab);
//        fichier = fopen ("tableau.txt", "rb");
// 
//        if (!fichier) {
//                return EXIT_FAILURE;
//        }
// 
//        fread (tab, sizeof tab, sizeof *tab, fichier);
//        fclose (fichier);
// 
//        for (i = 0; i < 10; i++) {
//                printf ("%d\n", tab[i]);
//        }
// 
//        return EXIT_SUCCESS;
}
//#define NB_ELEMENTS 165
//
//void savetexte ()
//{
//    FILE *fichier;
//     int tab[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//    fichier = fopen ("tableau.txt", "wb"); 
//    fwrite (tab, sizeof (float) ,NB_ELEMENTS, fichier);
//    fclose (fichier);
//}
// 
//void recuptext ()
//{
//    FILE *fichier;
//       int tab[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//    fichier = fopen ("tableau.txt", "rb"); 
//    fread (tab, sizeof (float), NB_ELEMENTS, fichier);
//    fclose (fichier);  
//}
