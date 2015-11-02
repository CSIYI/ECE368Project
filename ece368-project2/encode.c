#include "encode.h"
#include "char_list.h"
#include "char_freq.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int encode(char * text, char * bin, int mode)
{
  Char_Freq character_freq[128];
  memset(character_freq,0,sizeof(Char_Freq)* 128);//not sure, bzero(character_freq,sizeof(Char_Freq) * 128)
  if (frequency(text, character_freq)==0)
  {
    return (0);
  }
  sortFrequency(character_freq);
  List * head= build_list(character_freq);
  if (head == NULL) 
  {
    return (0);
  } 
  while ((head -> next) != NULL)
  {
    //listprint(head); printf("----------\n")
    ListNode * second = head -> next;
    LIstNode * third = second -> next;
    Tree * tree_node1 = head -> tree_ptr;
    Tree * tree_node2 = second -> tree_ptr;
    free(head);
    free(second);
    head = third;
    Tree * merging = node_merge(tree_node1, tree_node2)
    List * list_node =build_list(merging);
    head = insert_list(head, list_node); 
  }
  //List_print(head);
  return (1);
}
