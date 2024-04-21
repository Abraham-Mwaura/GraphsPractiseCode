#include <iostream>
#include <List>
using namespace std;

class AdjacencyListGraph
{
 int V; 
 list <int> *l;  
 
public:
    AdjacencyListGraph(int V){
        this->V=V;
        l= new list <int> [V];
    }
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
   void printAdjacenyListGraph(){
    for (int i = 0; i < V; i++)
    {
        cout<<"Vertex "<<i<< "->" ;
        for ( int nbr:l[i])
        {
            cout<<nbr<<" ";
        }
        cout<<endl;
    }
    
   }
};

int main(){
AdjacencyListGraph g(5);
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(1,3);
g.addEdge(2,3);
g.addEdge(3,4);
g.printAdjacenyListGraph();

return 0;
}
