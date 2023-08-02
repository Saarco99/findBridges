#pragma once
#include "Graph.h"

class DirectedGraph : public Graph {

	private:
		vector<int> inDegrees;
		vector<int> outDegrees;

	public:
		DirectedGraph(unsigned int vertices, unsigned int edges);
		void addEdge(unsigned int vertex1, unsigned int vertex2) noexcept(false) override;
		bool isConnectivity() override;
		void Visit(unsigned int vertex) override;
		Graph* createDirectedGraph() override;
		 void initColor() override;
		 void shriko()override;
};