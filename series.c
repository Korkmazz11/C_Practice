#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXWORDS 999

int main(){
    FILE *input,*output;
    int i=0, j;
    char *words=NULL,*word=NULL,c;
    char *allwords[MAXWORDS];

    if ((input=fopen("input.txt","r"))==NULL){ //Where input.txt is a normal file with plain text
        printf("Error Opening File\n");
        exit(1);}
    while ((c = fgetc(input))!= EOF){
        if (c=='\n'){ c = ' '; }
        words = (char *)realloc(words, ++i*sizeof(char));
        words[i-1]=c;}
    word=strtok(words," ");
    i=0;
    while(word!= NULL && i < MAXWORDS){
        allwords[i] = malloc(strlen(word));
        strcpy(allwords[i], word);
        word = strtok(NULL," ");
        
        i++;        
    }
   fclose(input); 
        for (int k=3; k<12; k++){     //prepera array for output format, reserve space for 3 characther

                if(k>5&&k<9){
                   
                    allwords[k+10]=allwords[k];
                    allwords[k]=NULL;
                }
                
                if(k>8&&k<12){
                   
                    allwords[k+15]=allwords[k];
                    allwords[k]=NULL;
                }
            
        }
           for(int m=3;m<6;m++){     //prepera array for output format, reserve space for 3 characther
            allwords[m+5]=allwords[m];
            allwords[m]=NULL;
           }
           
           
           
           
           
           
           
        
        for (int d=0; d<32; d++){
            
            char name1[20];
            char name2[20];
            char name3[20];
            if(d%8==1){
                
              int start,end,totalSeason;
              start=atoi(allwords[d]);
              end=atoi(allwords[d+1]);
              totalSeason=end-start;
              
           // printf("%d\n",totalSeason);
            printf("Enter 3 player of %s:",allwords[d-1]);
            scanf("%s %s %s", name1, name2, name3);
             
             allwords[d]="lasted";
             sprintf(allwords[d+1], "%d", totalSeason);
             allwords[d+2]="seasons";
             allwords[d+3]="Characters:";
             allwords[d+4]=name1;
             allwords[d+5]=name2;
             allwords[d+6]=name3;
                
            }
        }
        
        if((output=fopen("output.txt", "w"))==NULL) {
            printf("Cannot open file.\n");
  }
           for(int h=0;h<32;h++){
               fprintf(output,"%s",allwords[h]);
               fprintf(output,"%s"," ");
               if(h==3||h==7||h==11||h==15||h==19||h==23||h==27){
                   fprintf(output,"%s","\n");
               }
               
           }
            fclose(output);
            exit(0);
        }
       
       
       
       
        











