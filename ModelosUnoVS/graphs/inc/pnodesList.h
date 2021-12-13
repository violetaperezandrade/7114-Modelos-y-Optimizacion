#ifndef _pNodeslist_h
#define _pNodeslist_h

#include "../inc/defs.h"
#include "../inc/node.h"
#include "../inc/pnode.h"


pNodesList *createpNodesList();

boolean emptypNodesList(pNodesList *pl);

boolean endpNodesList(pNode *pn,pNodesList *pl);

pNode *firstpNodesList(pNodesList *pl);

pNode *lastpNodesList(pNodesList *pl);

pNode *nextpNodesList(pNode *pn);

void inspNodesList(pNode *pn,pNode *pospn);

void cancpNodesList(pNode **ppn);

void appendpNodesList (Node *n, pNodesList *l);

void printpNodesList(pNodesList *pl);

#endif

