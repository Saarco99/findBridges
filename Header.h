#pragma once
#include <iostream>
#include "DirectedGraph.h"
#include "UndirectedGraph.h"

void getGraphDetails(int& numOfVertex, int& numOfEdges) noexcept(false);
void addEdgesToTheGraph(Graph* graph, int& numOfEdges)noexcept(false);