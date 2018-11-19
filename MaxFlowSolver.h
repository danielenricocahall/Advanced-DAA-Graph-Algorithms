#pragma once
#include <iostream>
#include "Graph.h"
class MaxFlowSolver
{
public:

	// adjacency matrix
	virtual void solveMaxFlow(const Graph& graph, const int s, const int t) = 0;
	int getMaxFlow() const { return m_max_flow;};





protected:
	int m_max_flow;
};
