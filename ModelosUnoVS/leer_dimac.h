#ifndef FOO_leer_dimac_   /* Include guard */
#define FOO_leer_dimac_

#include "graphs/inc/defs.h"
#include "graphs/inc/graph.h"

#ifndef true
typedef enum { false, true } bool;
#endif

int Nr_vert, Nr_edges;

Graph *g;

bool **matriz;
int *pesos;

int get_params();

void read_graph_DIMACS_ascii(char *file);

#endif // FOO_H_
