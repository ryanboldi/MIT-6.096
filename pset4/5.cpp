// 5 Graph Representation

#include <iostream>
#include <vector>
#include <map>
#include <stdexcept>

using namespace std;

class Graph{
private:
    friend ostream& operator<<(ostream &output, const Graph &g);
    vector<int> nodes;
    map<int, vector<int>> adjacency;
public:
    Graph(const vector<int> &starts, const vector<int> &ends){
        if (starts.size() != ends.size()){
            throw invalid_argument(" Graph argument vectors must be the same length ");
        } else {
            map<int, vector<int>>::iterator it;
            for (int i = 0; i < starts.size(); i++){
                //check if there is already a key with this start node
                it = adjacency.find(starts[i]);
                if (it != adjacency.end()){
                    //add it to the correct vec
                    adjacency.at(it->first).push_back(ends[i]);
                } else {
                    // add a new elt
                    adjacency.insert(it, pair<int, vector<int>>(starts[i], {ends[i]}));
                }
                //cout << adjacency;
            }
        }
    }

    int numOutgoing(const int nodeID) const {
        map<int, vector<int>>::const_iterator it;
        it = adjacency.find(nodeID);
        if (it != adjacency.end()){
            //found the key
            return adjacency.at(it->first).size();
        } else {
            //not found
            return 0;
        }
    }

    const vector<int> &adjacent(const int nodeID) const {
        map<int, vector<int>>::const_iterator it;
        it = adjacency.find(nodeID);
        if (it != adjacency.end()){
            //found the key
            return adjacency.at(it->first);
        }
    }
};


//copy and pasted from stack overflow. this just overloads the output stream operator for a vector
template <class T>
inline ostream& operator << (ostream& os, const vector<T>& v)
{
    os << "[";
    for (typename vector<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        os << " " << *ii;
    }
    os << " ]";
    return os;
}

//adjacency[starts]
ostream& operator<<(ostream &output, const Graph &g){
    //map<int, vector<int>>::const_iterator it = g.adjacency.begin();
    //output << it->first << " =>"
    for (map<int, vector<int>>::const_iterator it=g.adjacency.begin(); it!=g.adjacency.end(); ++it){
        output << it->first << " => " << it->second << endl;
    }
    return output;
}


int main(){
    vector<int> test = {1, 6, 3, 4, 3, 6};
    vector<int> test2 = {4, 1, 2, 3, 3, 4};

    Graph nice(test, test2);

    cout << nice;
    return 0;
}
