/*
 * Vertex.h
 *
 *  Created on: Nov 15, 2018
 *      Author: daniel
 */

#ifndef VERTEX_H_
#define VERTEX_H_
#include <algorithm>
#include <vector>

class Vertex
{
public:
	Vertex(const int n);
	void addNeighbor(Vertex * v, const int capacity);
	std::vector<std::pair<Vertex*, int>> getNeighbors() const;
	std::vector<std::pair<Vertex*, int>>::const_iterator isNeighbor(Vertex * v) const;
	int findMinimumCapacity(Vertex * v);
private:
	int n;

	std::vector<std::pair<Vertex*, int>> m_neighbors;

};


#endif /* VERTEX_H_ */
