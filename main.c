#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	
	
	
	int tableau[100][5][2];
	
	int i,j,k ;
	
	 char nom_etudiant;
	 
	 int note;
	 
	 FILE* fichier= NULL;
	 
	fichier = fopen("etudiant.txt", "wb");
	
		fwrite ("hfgsjhfgsdjhfgsdj  ", sizeof tableau, sizeof *tableau, fichier);

	if (!fichier) 
	{
    	return EXIT_FAILURE;
    }
   
	for ( i=0; i< 100; i++)
	{
		(void)printf(" ");
		(void)printf("nom de etudiant : ");

		scanf("%[^\n]", &nom_etudiant);
		fwrite ( &nom_etudiant, sizeof tableau, sizeof *tableau, fichier);
        
		
		for ( j=0; j< 5; j++)
		
		{
				(void)printf("matiere[%d] \n",j+1);
			
			fwrite ("matiere", sizeof tableau, sizeof *tableau, fichier);
      
				
			for ( k=0; k< 2; k++)
			
			{			
		
//		fwrite ("hfgsjhfgsdjhfgsdj  \s", sizeof tab, sizeof *tab, fichier);
//        fwrite ("  marcosmedenou", sizeof tab, sizeof *tab, fichier);
//        fclose (fichier);
//				(void)printf("etudiant [%d] matiere [%d] note  [%d] \n", i, j, k);
			
				(void)printf("note[%d] : ", k+1);
				scanf("%d", &note);
				
			
			        // On peut lire et �crire dans le fichier
//			       	fwrite (&note, sizeof tableau, sizeof *tableau, fichier);
			        
			        fclose(fichier);
			    
			    return EXIT_SUCCESS;
			    
			
			
			note = getchar();
		
		}
	}
}
}
