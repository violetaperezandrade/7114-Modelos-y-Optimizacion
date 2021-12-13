#include "../inc/node.h"
#include "../inc/pnode.h"

pNode *createpNode(Node *n)
{
  pNode *pn;
  pn = (pNode *)malloc(sizeof(pNode));
  if(pn == NULL)
  {
    printf("Not enough memory to allocate pointer to node!\n");
    exit(EXIT_MEMORY);
  }

  pn->n = n;
  pn->next = NULL;
  pn->prev = NULL;
  
  return pn;
}

