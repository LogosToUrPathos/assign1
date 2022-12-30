#include "minHeap.cpp"

using namespace std;

int main(){

    Heap h;
    PCB* p = new PCB;
    PCB* c = new PCB;
    PCB* b = new PCB;
    PCB* stuff = new PCB;

    h.insert(p);
    h.insert(c);
    h.insert(b);
    h.insert(stuff);

    T test = h.removeMin();
    h.removeMin();
    h.removeMin();
    h.removeMin();
    h.removeMin();

    cout<<"Testing: "; test->display();
    cout<<"All Elems*** "<<endl;
    h.displayAll();
    cout<<"\n***";
    cout<<"Size is: "<< h.size()<<endl;

    return 0;
}