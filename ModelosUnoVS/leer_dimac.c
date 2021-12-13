#include <stdio.h>
#include <stdlib.h>

#include "graphs/inc/defs.h"
#include "graphs/inc/graph.h"

#include "leer_dimac.h"

#define MAX_PREAMBLE 10000
static char Preamble[MAX_PREAMBLE];

void set_edge(i, j, x)
	register int i;register int j;char x; {
	matriz[i][j] = matriz[j][i] = true;
}

void read_graph_DIMACS_ascii(file)
	char *file; {

	int c, oc;
	char * pp = Preamble;
	int i, j;
	FILE *fp;

	if ((fp = fopen(file, "r")) == NULL) {
		printf("ERROR: Cannot open infile\n");
		exit(10);
	}

	for (oc = '\0'; (c = fgetc(fp)) != EOF && (oc != '\n' || c != 'e'); oc = *pp++ = c)
		;

	ungetc(c, fp);
	*pp = '\0';
	if (get_params() == 0) {
		printf("ERROR: no se pudieron obtener los parametros del archivo: %s\n", file);
		exit(10);
	}

	Node *nJ, *nI;

	g = createGraph(Nr_vert, Nr_edges);
	initNodes(Nr_vert, g);

	//Matriz
	matriz = (bool **) malloc(Nr_vert * sizeof(bool*));
	pesos = (int *) malloc(Nr_vert * sizeof(int));

	for (i = 0; i < Nr_vert; i++) {
		matriz[i] = (bool *) malloc(Nr_vert * sizeof(bool));
		for (j = 0; j < Nr_vert; j++) {
			matriz[i][j] = false;
		}
	}

	while ((c = fgetc(fp)) != EOF) {
		switch (c) {
		case 'e':
			if (!fscanf(fp, "%d %d", &i, &j)) {
				printf("ERROR: corrupted input file\n");
				exit(10);
			}

			if (j == i)
				continue;

			if (i > j)
				set_edge(i - 1, j - 1, 1);
			else
				set_edge(j - 1, i - 1, 1);

			nJ = getNodeFromList(j, g->nodesList);
			if (nJ == NULL) {
				printf("Node %d not already Created!", j);
				exit(10);
			}

			nI = getNodeFromList(i, g->nodesList);
			if (nI == NULL) {
				printf("Node %d not already Created!", i);
				exit(10);
			}

			if (!nodesIsInAdjList(nJ->id, nI->adj)) {
				appendpNodesList(nJ, nI->adj);
				nI->numAdj++;
			}

			if (!nodesIsInAdjList(nI->id, nJ->adj)) {
				appendpNodesList(nI, nJ->adj);
				nJ->numAdj++;
			}
			break;

		case 'n':
			if (!fscanf(fp, "%d %d", &i, &j)) {
				printf("ERROR: corrupted input file\n");
				exit(10);
			}
			pesos[i - 1] = j;
			break;
		case '\n':

		default:
			break;
		}
	}

	fclose(fp);
}

int get_params() {
	char c, *tmp;
	char * pp = Preamble;
	int stop = 0;
	tmp = (char *) calloc(100, sizeof(char));

	Nr_vert = Nr_edges = 0;

	while (!stop && (c = *pp++) != '\0') {
		switch (c) {
		case 'c':
			while ((c = *pp++) != '\n' && c != '\0')
				;
			break;

		case 'p':
			sscanf(pp, "%s %d %d\n", tmp, &Nr_vert, &Nr_edges);
			stop = 1;
			break;

		default:
			break;
		}
	}

	free(tmp);

	if (Nr_vert == 0 || Nr_edges == 0)
		return 0; /* error */

	return 1;
}
