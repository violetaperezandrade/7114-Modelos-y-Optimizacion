#include "../inc/graph.h"

Graph *createGraph(int numNodes,int numEdges){

  Graph *g;

  g=(Graph *) malloc(sizeof(Graph));
  if(g == NULL)
  {
    printf("Not enough memory to allocate graph\n");
    exit(EXIT_MEMORY);
  }

  g->numNodes = numNodes;
  g->numEdges = numEdges;
  g->nodesList = (NodesList *) createNodesList();

  return g;
}

void initNodes(int numNodes,Graph *g)
{
  int i;

  for(i=1;i<numNodes+1;i++)
  {
    Node *n = (Node *) createNode(i);
    appendNodesList(n,g->nodesList);
  }
}


