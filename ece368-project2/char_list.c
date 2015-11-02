#include "char_list.h"
#include <stdlib.h>
#include "freq.h"

List* build_list(char_freq * freq);//build the sorted character list
{
  int ind = 0;
  while (freq[ind].frequency == 0)
  {
     ind ++;
  }
  if (ind == 128)
  {
    return NULL;
  }
  List * head = NULL;
  while (ind < 128)
  {
    Tree * tree_node = create_node(freq[ind].val,freq[ind].frequency);
    List * list_node = listnode(tree_node);
    head = insert_list(head, list_node);
  }
  return (head)     
}

List * listnode(Tree * node);
{
  List * list_node = malloc(sizeof(List));
  list_node -> next = NULL;
  list_node -> tree_ptr = node;
  return (node);
}

List * insert_list(List * head, List * listnode);
{
  if (head == NULL)
  {
    return (listnode);
  } 
  if (listnode == NULL)
  {
    print("Error! listnode shouldn't be NULL\n");
  }
  int freq1 = (head -> tree_ptr)-> frequency;
  int freq2 = (head -> tree_ptr)-> frequency;
  if (freq1>freq2)
  {
    listnode -> next = head;
    return (listnode);
  }
  head -> next = insert_list(head-> next, listnode);
  return (head);   
}
//void print_list(List * head);


