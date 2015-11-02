#include "char_tree.h"
#include <stdlib.h>
#include <stdio.h>
Tree * create_node(char krac, int frequency);
{
  Tree * node = malloc (sizeof(Tree));
  node -> left = NULL;
  node -> right = NULL;
  node -> val = krac;
  node -> freq = frequency; 
  return (node);
}

Tree * node_merge(Tree * leftnode, Tree * rightnode);
{
  Tree * node =malloc(sizeof(Tree));
  node -> left = leftnode;
  node -> right = rightnode;
  node -> val = 0;
  node -> freq= leftnode->freq + rightnode->freq;  
  return (node);
}
//do i need to print the tree out?
//code in page 452
