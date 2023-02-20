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
	 


   
	for ( i=0; i< 100; i++)
	{
		(void)printf(" ");
		(void)printf("nom de etudiant : ");
		
		
		
			scanf("%[^\n]", &nom_etudiant);
		
		for ( j=0; j< 5; j++)
		
		{
				(void)printf("matiere[%d] \n",j+1);
			
				
			for ( k=0; k< 2; k++)
			
			{			
		
//				(void)printf("etudiant [%d] matiere [%d] note  [%d] \n", i, j, k);
			
				(void)printf("note[%d] : ", k+1);
				scanf("%d", &note);
				
				fichier = fopen("etudiant.txt", "w");
				
				if (fichier != NULL)
			    {
			        // On peut lire et �crire dans le fichier
			        fputc(2 , fichier); 
			     
			        
			        fclose(fichier);
			    }
			    
			
			
			note = getchar();
		
		}
	}
}
}
