#ifndef CHAR_LIST_H
#define CHAR_LIST_H
#include "char_tree.h"
#include "char_freq.h"
#include <stdio.h>
typedef struct
{
  struct list * next;
  Tree * tree_ptr;
}List;
List * build_list(char_freq * freq);
List * listnode(Tree * node);
List * insert_list(List * head, List * listnode);
//void print_list(List * head);
#endif

