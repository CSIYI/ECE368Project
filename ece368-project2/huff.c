#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
typedef struct
{
  char character;
  int frequency;
}Char_Freq;
//sorting and counting the number of character frequencies

int Freqeuncy(char * filename, Char_Freq * freq);//count the frequency of the character
{
  File * fptr = fopen(filename,"r");
  int cnt = 0;
  while(!feof(fptr))
  {
    int krac = fgetc(fptr);
    if (krac != EOF)
    {
      cnt++;
      freq[krac].character = (char) krac;
      freq[krac].frequency++;//need to initialize to zero?
     }  
   }   
   fclose(fptr);
   return(1);
}

void cmpfunc(const void * freq1, const void * freq2);//sort the array
{
  const Char_Freq * val1 = (const Char_Freq*) freq1;
  const Char_Freq * val2 = (const Char_Freq*) freq2;
  return ((const int)freq1->frequency - freq2->frequency); 
}

void sortFrequency(CharFreq * freq)
{
  qsort(freq, 128, sizeof(CharFreq),cmpfunc(Freq));
}
//building frequency tree
typedef struct treenode
{
  struct treenode * left;
  struct treenode * right;
  char krac;
  int frequency;
}KracTree;
typedef struct listnode
{
  struct listnode * next;
  frequency * tree_ptr;
}KracList;




 
