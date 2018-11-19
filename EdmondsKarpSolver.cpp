/*
 * EdmondsKarpSolver.cpp
 *
 *  Created on: Nov 14, 2018
 *      Author: daniel
 */


#include <queue>
#include <algorithm>
#include "EdmondsKarpSolver.h"
#include <sstream>

EdmondsKarpSolver::EdmondsKarpSolver()
{

}

EdmondsKarpSolver::~EdmondsKarpSolver()
{

}


void EdmondsKarpSolver::solveMaxFlow(const Graph& graph, const int s, const int t)
{
	int u, v;

	// Graph is a V x V matrix
	const int V = graph.size();

	std::vector<int> path;
	path.reserve(V);

	// create residual graph and populate with original capacities
	Graph rGraph;

	rGraph = graph;

	while(BFS(rGraph, s, t, path))
	{
		int path_flow = std::numeric_limits<int>::max();
		for(v = t; v != s; v = path[v])
		{
			u = path[v];
			path_flow = std::min(path_flow, rGraph[u][v]);
		}
		std::stringstream ss;
		for(v = t; v != s; v = path[v])
		{
			u = path[v];
			rGraph[u][v] -= path_flow;
			rGraph[v][u] += path_flow;
			ss << v << ",";
		}
		std::string path_string = ss.str();
		path_string.pop_back();
		std::reverse(path_string.begin(), path_string.end());
		std::cout << path_string << std::endl;
		m_max_flow += path_flow;
	}


}

bool EdmondsKarpSolver::BFS(const Graph& resGraph, const int s, const int t, std::vector<int>& path)
{
	// Graph is V x V matrix
	const unsigned int V = resGraph.size();

	std::vector<bool> visited;
	std::queue<int> queue;

	visited.reserve(V);
	path.reserve(V);

	// initialize all vertices as not visited
	for(unsigned int ii = 0; ii < V; ++ii)
	{
		visited[ii] = false;
	}
	queue.push(s);


	// BFS loop
	// enqueue the source vertex, which is considered visited
	while(!queue.empty())
	{
		// We dequeue when we're visiting the vertex
		const int u = queue.front();
		queue.pop();

		if(!visited[u])
		{
			visited[u] = true;

			for(unsigned int v = 0; v < V; ++v)
			{
				if(!visited[v] && resGraph[u][v] > 0)
				{
					// We enqueue if a vertex has not been visited and is adjacent
					queue.push(v);
					path[v] = u;
				}
			}


		}
	}


	return visited[t];

}
