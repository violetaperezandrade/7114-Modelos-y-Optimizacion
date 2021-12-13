#include "../inc/nodesList.h"

/**
 * Function that create the nodes list where store all the nodes of the graph
*/
NodesList *createNodesList()
{
  NodesList *l;

  l = (NodesList *) malloc(sizeof(NodesList));
  if(l == NULL)
  {
    printf("Not enough memory to allocate nodes list!\n");
    exit(EXIT_MEMORY);
  }

  l->id=0;
  l->prev = l;
  l->next = l;

  return l;
}

/**
Function that destroy the nodes list
*/
void destroyNodesList (NodesList **pL)
{
  Node *n;
  for (n = firstNodesList(*pL); !emptyNodesList(*pL); cancNodesList(&n));
  *pL = NULL;
}

/**
 * Function that return the first node of the list
*/
Node *firstNodesList (NodesList *l)
{
  Node *n = l->next;
  return n;
}

/**
 * Function that return the last node of the list
*/
Node *lastNodeslList (NodesList *l)
{
  Node *n = l->prev;
  return n;
}

/**
 * Function that answer if the node is the last in the list
*/boolean endNodesList (Node *n, NodesList *l)
{
  boolean b = (n == l);
  return b;
}

/**
 * Function that answer if the list is empty (there is only the sentinel node)
*/
boolean emptyNodesList (NodesList *l)
{
  boolean b = (l->next == l) && (l->prev == l);
  return b;
}

/**
 * Function that return the next node on the list from the node 'n'
*/
Node *nextNodesList (Node *n)
{
  Node *next = n->next;
  return next;
}


/**
 * Function that insert a new node 'insN' in the list before the node 'posN'
*/
void insNodesList (Node *insN, Node *posN)
{
  insN->prev = posN->prev;
  insN->next = posN;
  posN->prev->next = insN;
  posN->prev = insN;
}

/**
 * Function that remove the node 'p' from the list.
 * It require for argument a pointer to pointer (pp) at the node that permit to
 * free the memory correctly
*/
void cancNodesList (Node **pp)
{
  Node *n;
  n = *pp;
  n->prev->next = n->next;
  n->next->prev = n->prev;
  *pp = n->next;
  free(n);
}

/**
 * Function that permit to append
*/
void appendNodesList (Node *n, NodesList *l)
{
  if(l==NULL)
  {
    printf("lista nulla\n");
    exit(0);
  }
  
//   printf("n(%d)-l(%d)  ",n->id,l->id);
   
  n->prev=l->prev;
  l->prev->next=n;
  l->prev=n;
  n->next=l;

}

/**
 * Function that print to the stdout for each node some properties:
 * -id
 * -color
 * -number of adjacent nodes
*/
void printNodesList(NodesList *l)
{
  Node *n;

  if(emptyNodesList(l))
  {
    printf("Lista Vuota %d!\n",l->id);
    return;
  }

  n=firstNodesList(l);  

  while(!endNodesList(n,l))
  {
    printf("%d[c(%d),a(%d)] ->",n->id,n->color,n->numAdj);
    printpNodesList(n->adj);
    n=nextNodesList(n);
  }
}

Node *getNodeFromList(int id, NodesList *l)
{
  Node *n;

  n=firstNodesList(l);
  
  while(!endNodesList(n,l))
  {
//     printf("%d, ",n->id);
    if(n->id == id)
    {
//       printf("%d Trovato!\n",id);
      return n;
    }

    n=nextNodesList(n);
  }

  return NULL;
}
