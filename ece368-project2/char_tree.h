#ifndef CHAR_TREE_H
#define CHAR_TREE_H
typedef struct tree
{
  struct tree * left;
  struct tree * right;
  char val; 
  int freq;
}Tree;

Tree * create_node(char krac, int frequency);
Tree * node_merge(Tree * leftnode, Tree * rightnode);
//void print_tree(Tree * node, int level);  
#endif 


