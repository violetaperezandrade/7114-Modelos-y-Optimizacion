#include "../inc/pnodesList.h"

pNodesList *createpNodesList()
{
  pNodesList *pl;
  
  pl = (pNodesList *) malloc(sizeof(pNodesList));
  if(pl == NULL)
  {
    printf("Not enough memory to allocate pointer to nodes list!\n");
    exit(EXIT_MEMORY);
  }

  pl->next = pl;
  pl->prev = pl;

  return pl;
}

boolean emptypNodesList(pNodesList *pl)
{
  boolean b = (pl->next == pl) && (pl->prev == pl);
  return b;
}

boolean endpNodesList(pNode *pn,pNodesList *pl)
{
  boolean b = (pn == pl);
  return b;
}

pNode *firstpNodesList(pNodesList *pl)
{
  pNode *pn = pl->next;
  return pn;
}

pNode *lastpNodesList(pNodesList *pl)
{
  pNode *pn = pl->prev;
  return pn;
}

pNode *nextpNodesList(pNode *pn)
{
  pNode *nextpn = pn->next;
  return nextpn;
}

void inspNodesList(pNode *pn,pNode *pospn)
{
  pn->prev=pospn->prev;
  pn->next=pospn;
  
  pospn->prev->next = pn;
  pospn->prev = pn;
}

void cancpNodesList(pNode **ppn)
{
  pNode *pn = *ppn;
  pn->next->prev = pn->prev;
  pn->prev->next = pn->next;
  
  *ppn = pn->next;
  free(pn);
}

void appendpNodesList (Node *n, pNodesList *pl)
{
  pNode *pn = createpNode(n);
  
  pn->prev=pl->prev;
  pl->prev->next=pn;
  pl->prev=pn;
  pn->next=pl;
}

void printpNodesList(pNodesList *pl)
{
  pNode *pn;

  if(emptypNodesList(pl))
  {
    printf("Adjacency list empty!\n");
    return;
  }

  pn=firstpNodesList(pl);
  
  while(!endpNodesList(pn,pl))
  {
    printf("-%d(%d)",pn->n->id,pn->n->color);
    pn=nextpNodesList(pn);
  }
  
  printf("\n");
}
