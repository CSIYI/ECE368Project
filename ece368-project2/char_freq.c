#include"char_freq.h"
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int Freqeuncy(char * filename, char_freq * freq);//count the frequency of the character
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

static void cmpfunc(const void * freq1, const void * freq2);//sort the array
{
  const Char_Freq * val1 = (const Char_Freq*) freq1;
  const Char_Freq * val2 = (const Char_Freq*) freq2;
  return ((const int)freq1->frequency -(const int) freq2->frequency);
}

void sortFrequency(char_freq * freq)
{
  qsort(freq, 128, sizeof(char_freq),cmpfunc);
}


