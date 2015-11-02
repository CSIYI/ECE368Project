#ifndef CHAR_FREQ_H
#define CHAR_FREQ_H
typedef struct
{
  char character;
  int frequency;
}char_freq;

int Freqeuncy(char * filename, char_freq * freq);//count the frequency of the character
//print the array void print(char_freq * freq);
//void cmpfunc(const void * freq1, const void * freq2);//compare function for qsort
void sortFrequency(char_freq * freq)//sorting frequency of characters
#endif
