#ifndef _node_h
#define _node_h

typedef struct _node Node;
typedef Node NodesList;

#include "../inc/defs.h"
#include "../inc/nodesList.h"
#include "../inc/pnode.h"
#include "../inc/pnodesList.h"

struct _node{

  int id;///Numerical index of the node
  int color;///Numerical value of the color of the node

  Node *prev;///Pointer to the previous node in the node's list
  Node *next;///Pointer to the next     node in the node's list

  pNodesList *adj;///Pointer to the adjacency list of the node
	int numAdj;
};

Node *createNode(int id);

boolean nodesIsInAdjList(int id,pNodesList *pl);

#endif
