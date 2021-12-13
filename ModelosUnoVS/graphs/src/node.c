#include "../inc/node.h"

Node *createNode(int id)
{
  Node *node;
  node = (Node *)malloc(sizeof(Node));
  if(node == NULL)
  {
    printf("Not enough memory to allocate node %d!\n",id);
    exit(EXIT_MEMORY);
  }

  node->id = id;
  node->color = -1; //Default value for color
  node->next = NULL;
  node->prev = NULL;
  node->adj = (pNodesList *) createpNodesList();
	node->numAdj= 0;

  return node;
}


boolean nodesIsInAdjList(int id, pNodesList *pl)
{
  pNode *pn;
  
  if(emptypNodesList(pl))
    return FALSE;

  pn=firstpNodesList(pl);
//   printf("Searching for node %d\n",id);

  if(pn->n->id == id)
    return TRUE;

  while(!endpNodesList(pn,pl))
  {
//     printf("cn:%d\n",pn->n->id);
    if(pn->n->id == id)
      return TRUE;
    pn=nextpNodesList(pn);
  }
  
  return FALSE;
}
