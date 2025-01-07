#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 255

int main(void)
{
  int menue;
  char name[MAX];
  char note[MAX];
  char file_mode;
  char file_extension[] = ".txt";
  FILE* fptr;

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
    file_mode = 'w';
    
    FILE* fopen(name,file_mode);
    
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
    gets(note);
    
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
