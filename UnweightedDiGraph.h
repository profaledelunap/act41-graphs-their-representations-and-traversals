#ifndef UGRAPH_H
#define UGRAPH_H

#include <vector>
#include <queue>
using namespace std;

// =================================================================
// File: UnweightedDiGraph.h
// Author:
// Date:
// =================================================================

// =================================================================
// Definition of the UnweightedDiGraph class
// =================================================================
template <class VertexType>
class UnweightedDiGraph
{

public:
    UnweightedDiGraph();
    void addVertex(VertexType);
    void removeVertex(VertexType);
    void addEdge(VertexType, VertexType);
    void removeEdge(VertexType, VertexType);
    int getIndex(VertexType) const;
    void getAdjacents(VertexType, queue<VertexType> &);
    vector<VertexType> getVertices() const;
    VertexType getVertex(int) const;
    vector<VertexType> getEdges(VertexType) const;
    int getSize();

protected:
    vector<vector<VertexType>> verticesList;
};

// =================================================================
// Constructor. Initializes the data of the graph.
//
// @param val, stored data in the node.
// =================================================================
template <class VertexType>
UnweightedDiGraph<VertexType>::UnweightedDiGraph()
{
}

// =================================================================
// addVertex. Adds a new vertex to the graph.
//
// @param vertex, vertex to be added.
// =================================================================
template <class VertexType>
void UnweightedDiGraph<VertexType>::addVertex(VertexType vertex)
{
}

// =================================================================
// addEdge. Adds an edge between two edges to the graph.
//
// @param fromVertex, vertex pointing towards.
// @param toVertex, vertex being pointed to.
// =================================================================
template <class VertexType>
void UnweightedDiGraph<VertexType>::addEdge(VertexType fromVertex, VertexType toVertex)
{
}

// =================================================================
// getIndex. Get the index of a vertex in the list of vertices.
//
// @param vertex, vertex to be looked for.
// =================================================================
template <class VertexType>
int UnweightedDiGraph<VertexType>::getIndex(VertexType vertex) const
{
}

// =================================================================
// getAdjacents. Get adjacent vertices from a given vertex.
//
// @param vertex, vertex to search adjacent vertices.
// @param adjacents, empty queue to be filled with adjacent vertices.
// =================================================================
template <class VertexType>
void UnweightedDiGraph<VertexType>::getAdjacents(VertexType vertex, queue<VertexType> &adjacents)
{
}

// =================================================================
// getVertices. Get the vertices of th graph.
//
// =================================================================
template <class VertexType>
vector<VertexType> UnweightedDiGraph<VertexType>::getVertices() const
{
}

// =================================================================
// getVertices. Get the vertices of th graph.
//
// =================================================================
template <class VertexType>
VertexType UnweightedDiGraph<VertexType>::getVertex(int index) const
{
}

// =================================================================
// getSize. Get the vertices of the graph.
//
// =================================================================
template <class VertexType>
int UnweightedDiGraph<VertexType>::getSize()
{
}

#endif /* UGRAPH_H */