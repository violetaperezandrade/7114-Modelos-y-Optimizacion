#ifndef _nodeslist_h
#define _nodeslist_h

#include "../inc/defs.h"
#include "../inc/node.h"
#include "../inc/pnode.h"

/**
 * Function that create the nodes list where store all the nodes of the graph
 */

NodesList *createNodesList();

/**
 * Function that return the first node of the list
 */

Node *firstNodeList (NodesList *l);

/**
 * Function that destroy the nodes list
 */
void destroyNodesList (NodesList **pL);

/**
 * Function that return the first node of the list
 */
Node *firstNodesList (NodesList *l);

/**
 * Function that return the last node in the list
 */
Node *lastNodeslList (NodesList *l);

/**
 * Function that answer if the node is the last of the list
 */
boolean endNodesList (Node *n, NodesList *l);

/**
 * Function that answer if the list is empty (there is only the sentinel node)
 */
boolean emptyNodesList (NodesList *l);

/**
 * Function that return the next node on the list from the node 'n'
 */
Node *nextNodesList (Node *n);

/**
 * Function that insert a new node 'insN' in the list before the node 'posN'
 */
void insNodesList (Node *insN, Node *posN);

/**
 * Function that remove the node 'p' from the list.
 * It require for argument a pointer to pointer (pp) at the node that permit to
 * free the memory correctly
 */
void cancNodesList (Node **pp);

/**
 * Function that permit to append
 */
void appendNodesList (Node *n, NodesList *l);

/**
 * Function that print to the stdout for each node some properties:
 * -id
 * -color
 */
void printNodesList(NodesList *l);

/**
 * Function that return the node chosed by id
*/
Node *getNodeFromList(int id, NodesList *l);

#endif
