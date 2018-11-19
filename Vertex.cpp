/*
 * Vertex.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: daniel
 */


#include <limits>

#include "Vertex.h"
#include <iostream>

Vertex::Vertex(const int n)
{
	this->n = n;
}
void Vertex::addNeighbor(Vertex * v, const int distance)
{
	m_neighbors.push_back({v, distance});

}
std::vector<std::pair<Vertex*, int>> Vertex::getNeighbors() const
{
	return m_neighbors;
}
std::vector<std::pair<Vertex*, int>>::const_iterator
Vertex::isNeighbor(Vertex * v) const
{
	return std::find_if(
			m_neighbors.begin(),
			m_neighbors.end(),
			[&](const std::pair<Vertex*, int>& pair){
		return pair.first->n == v->n;
	});
}

int Vertex::findMinimumCapacity(Vertex * v)
{
	int c_f = std::numeric_limits<int>::max();
	std::vector<std::pair<Vertex*, int>>::const_iterator foo;
	for(auto it = m_neighbors.begin(); it != m_neighbors.end(); ++it)
	{
		c_f = std::min(c_f, (*it).second);

		foo = (*it).first->isNeighbor(v);

		std::cout << c_f << std::endl;

		// found the end vertex, escape
	}
	// now that we've found the minimum capacity, subtract from all other edges
	for(auto it = m_neighbors.begin(); it != m_neighbors.end(); ++it)
	{
		(*it).second -= c_f;
	}

	return c_f;
}
