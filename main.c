#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int main(void)
{
  int menue;
  char name[MAX];
  char note[20]; 
  char file_extension[] = ".txt";
  FILE *fptr;
  
  printf("Enter 1 to make a new note or 2 to view existing notes\n");

  scanf("%d",&menue);

  if(menue == 1)
  {
    system("clear");
    printf("Create a new Note!\n");
    
    //Enter The name of the note
    printf("Name of new note?\n");
    scanf("%s",name);

    strcat(name,file_extension);
    
    //file handeling bit im cryng
    fptr = fopen("test.txt","w");
    
    if(fptr == NULL)
    {
      printf("File Failed to be created! :(");
      exit(0);
    }
    else 
    {
      printf("Note Created Succesfully\n");
    }

    printf("Make a note!");
    //clears the input buffer
    

    if(getchar() == '\n')
    {
      while ((getchar()) != '\n');
      fgets(note,20, stdin);
    }
    else 
    {
     fgets(note,20, stdin);  
    }
     
    fprintf(fptr,"%s",note);

    fclose(fptr);
  }
  else if( menue == 2)
  {
    system("clear");
    printf("A list of your old notes");
  }
  return 0;
}
