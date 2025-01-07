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
  
  puts("Enter 1 to make a new note or 2 to view existing notes\n");

  scanf("%d",&menue);

  if(menue == 1)
  {
    system("clear");
    puts("Create a new Note!");
    
    //Enter The name of the note
    puts("Name of new note?");
    scanf("%s",name);

    strcat(name,file_extension);
    
    //file handeling bit im cryng
    fptr = fopen("test.txt","w");
    
    if(fptr == NULL)
    {
      puts("File Failed to be created! :(");
      exit(0);
    }
    else 
    {
      puts("Note Created Succesfully");
    }

    puts("Make a note!");
    scanf("%s\n",note);
     
    fprintf(fptr,"%s",note);

    fclose(fptr);
  }
  else if( menue == 2)
  {
    system("clear");
    puts("A list of your old notes");
  }
  return 0;
}
