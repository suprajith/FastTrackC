#include <stdio.h>
#include <ncurses.h>
int main( int argc, char *argv[] )
{
  int i;
  FILE *fp1,*fp2;
char ch;
  fp1= fopen( argv[1], "r" );
  fp2 = fopen(argv[2],"w");

        /* fopen returns 0, the NULL pointer, on failure */
        if ( fp1 == NULL )
        {
            printf( "Could not open file\n" );
        }
        if( fp2 == NULL)
        {
          printf("Could not open file");
        } 

 printf("1st arg  : %s \n", argv[1]);
  printf("2nd arg  : %s \n", argv[2]);
  while(1)
  {
   ch = getc(fp1);
    if(ch==EOF)
  {
    break;
   }
  else
  {
    putc(ch,fp2);   
  }
}
  printf("File copied successfully\n");
  fclose(fp1);
  fclose(fp2);

 return 0;
}
