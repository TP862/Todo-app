#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int menue;

  puts("Enter 1 to make a new note or 2 to view existing notes\n");

  scanf("%d",&menue);

  if(menue == 1)
  {
    system("clear");
    puts("Create a new Note!");
  }
  else if( menue == 2)
  {
    system("clear");
    puts("A list of your old notes");
  }
  return 0;
}
