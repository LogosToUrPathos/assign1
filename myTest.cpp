#include "minHeap.cpp"

using namespace std;

int main(){

    Heap h(10);
    PCB p;
    PCB c;
    PCB b;

    h.insert(p);
    h.insert(c);
    h.insert(b);

    T test = h.removeMin();

    cout<<"Testing: "; test.display();

    return 0;
}