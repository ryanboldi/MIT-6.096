// 5 Graph Representation

#include <iostream>
#include <vector>
#include <map>

using namespace std;




class Graph{
private:
    friend ostream& operator<<(ostream &output, const Graph &g);
    vector<int> nodes;
    map<int, vector<int>> adjacency;
public:
    Graph(const vector<int> &starts, const vector<int> &ends){
        if (starts.size() != ends.size()){
            cerr << "Start and end vecs are not the same length!" << endl;
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
    vector<int> test = {1, 2, 3, 4, 5, 2, 6, 7, 10, 10, 10};
    vector<int> test2 = {4, 1, 2, 3, 3, 6, 7, 7, 8, 9, 10};

    Graph nice(test, test2);

    cout << nice;
    return 0;
}
