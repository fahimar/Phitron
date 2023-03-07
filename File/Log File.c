#include<stdio.h>

int main(){
  FILE *logfile = fopen("log.txt","a");// w = write, a = append

  FILE *inputfile = fopen("File1.txt","r");

  if(inputfile==NULL){
    //fprintf(logfile,"Hello at 7:06 AM\n");
    fprintf(logfile,"Input file not found at 3:06 PM\n");
    return 0;
  }





   return 0;
}
