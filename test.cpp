#define CATCH_CONFIG_MAIN
#include <string>
#include <iostream>
using namespace std;
#include "catch.h"
#include "UnweightedDiGraph.h"

TEST_CASE("testing create vertices", "[List]")
{
    UnweightedDiGraph<string> myGraph;

    myGraph.addVertex("Monterrey");
    myGraph.addVertex("Saltillo");
    myGraph.addVertex("Durango");
    myGraph.addVertex("Torreon");
    myGraph.addVertex("Tijuana");

    myGraph.addEdge("Monterrey", "Saltillo");
    myGraph.addEdge("Saltillo", "Torreon");
    myGraph.addEdge("Torreon", "Tijuana");
    myGraph.addEdge("Monterrey", "Durango");

    SECTION("Graph size")
    {
        REQUIRE(myGraph.getSize() == 5);
    }

    SECTION("Adjacents for Durango")
    {
        queue<string> adjacents;
        myGraph.getAdjacents("Durango", adjacents);
        REQUIRE(adjacents.empty() == true);
    }

    SECTION("Adjacents for Saltillo")
    {
        queue<string> adjacents;
        myGraph.getAdjacents("Saltillo", adjacents);
        REQUIRE(adjacents.front() == "Torreon");
    }
}