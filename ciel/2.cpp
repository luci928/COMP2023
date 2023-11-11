#include <iostream>
using namespace std;

template<class T>
struct nodo
{
    T val;
    nodo<T> *next;
    nodo(T v, nodo<T> *n = NULL) {
        val = v;
        next = n;
    }
};

template<class T>
struct cola {
    nodo<T>* head = NULL;
    nodo<T>* tail = NULL;
    void push(T val);
    bool pop(T& val);
    bool empty();
    void print();
    ~cola ();
};

template<class T>
void cola <T>::push(T val) {
    if (head) {
        tail -> next = new nodo<T>(val);
        tail = tail ->next;      
    }
    else {
        head = new nodo<T>(val, head);
        tail = head;
    }

}

template<class T>
bool cola <T>::pop(T& val) {
    val = 0;
    if (head) {
        val = head->val;
        nodo<T>* tmp = head;
        head = head->next;
        delete tmp;
        return true;
    }
    else {
        return false;
    }
}

template<class T>
bool cola <T>::empty() {
    return head;
}

template<class T>
void cola <T>::print() {
    cout<<"Head -> ";
    for (nodo<T>* p = head; p; p = p->next)
        cout << p->val << " -> ";
    cout << "NULL \n";
}

template<class T>
cola <T>::~cola () {
    nodo <T>* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    head = NULL;
    tail = NULL;
}

int main() {
    int x;
    cola<int> PL;
    PL.push(5);
    PL.print();
    PL.push(3);
    PL.print();
    PL.pop(x);
    PL.print();
    cout<<x<<endl;
}
