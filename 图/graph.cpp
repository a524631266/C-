#include <iostream>
#include <vector>

using namespace std;

class Vertex{
    public:
        Vertex(int id):id(id){
        };
        void addAdj(int fid) {
            // std::cout << "add adj" << std::endl;
            // std::cout << ads[0] << std::endl;
            // ads[degree++] = fid;
            ads.resize(degree++);
            ads.push_back(fid);
            // degree++;
        };
        int getId() const{
            return id;
        };
        void printFriends() {
            for (int i = 0; i < degree; i++)
            {
                std::cout  << "id:" << id << "'s friend"  << ads[i] << std::endl;
            }
        };
         friend ostream & operator << (ostream &out, const Vertex &v);
        
        ~Vertex(){
            // std::cout << "delete vertex" << std::endl;
            // delete [] ads;
        };
    private:
        // 当前朋友总数 
        int degree = 0; 
        
        // 当前节点id
        int id; 
        
        // int ads[4] = {0,0,0,0}; 
        vector<int> ads;
};

class UndirectGraph {
    public:
        UndirectGraph(int v):v(v) {
            for (int i = 0; i < v; i++)
            {
                adj[i] = new Vertex(i);
                // std::cout << (* adj[i]) << std::endl;
            }
        };
        void print(){
            // std::cout << "graph has " << v << " vertix" << std::endl;
            for (int i = 0; i < v; i++)
            {
                Vertex *v2 =  adj[i];
                (*v2).printFriends();
            }
        };
        void addEdge(int  ,int ) ;
        ~UndirectGraph(){
            // std::cout << "delete graph" << std::endl;
            // delete [] *adj;
            for (int i = 0; i < v; i++)
            {
                delete [] adj[i];
            }
            // delete adj;
        };
    private:
        int v; 
        Vertex * adj[];
};
void UndirectGraph::addEdge(int l, int r){
    // print();
    (*adj[l]).addAdj(r);
    (*adj[r]).addAdj(l);
};
ostream & operator << (ostream &out, const Vertex &v){
        out << v.id;
        return out;
};

int main(int argc, char const *argv[])
{
    UndirectGraph g(3);

    // g.addEdge(0,1);

    // g.addEdge(0,2);

    // g.addEdge(1,2);    

    // g.print();

    return 0;
}

