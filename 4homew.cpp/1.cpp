#include <iostream>
#include <string>
using namespace std;

template <class T>
struct nodo {
    T val;
    nodo<T> *next;
    nodo(T v, nodo<T> *n = NULL) {
        val = v;
        next = n;
    }
};

template <class T>
class ListE {
  public:
    nodo<T> *head = NULL;
    void add(T val);
    void del(T val);
    bool find(T val, nodo<T> *&PrevN);
    ~ListE();
    void print();
};

template <class T>
bool ListE<T>::find(T val, nodo<T> *&PrevN) {
    PrevN = NULL;
    nodo<T> *p = head;

    for (; p && p->val < val; PrevN = p, p = p->next);
    return (p && p->val == val);
}

template <class T>
void ListE<T>::add(T val) {
    nodo<T> *PrevN;
    if (!find(val, PrevN)) {
        if (!PrevN) {
            head = new nodo<T>(val, head);
        } else {
            PrevN->next = new nodo<T>(val, PrevN->next);
        }
    }
}

template <class T>
void ListE<T>::del(T val) {
    nodo<T> *PrevN, *tmp;
    if (find(val, PrevN)) {
        if (!PrevN) {
            tmp = head;
            head = head->next;
            delete tmp;
        } else {
            tmp = PrevN->next;
            PrevN->next = PrevN->next->next;
            delete tmp;
        }
    }
}

template <class T>
void ListE<T>::print() {
    nodo<T> *act = head;
    while (act != NULL) {
        cout << act->val << " ";
        act = act->next;
    }
}

template <class T>
ListE<T>::~ListE() {
    nodo<T> *currentN = head;
    while (currentN != NULL) {
        nodo<T> *front = currentN->next;
        delete currentN;
        currentN = front;
    }
}

class pari {
public:
    bool operator()(int a) const {
        return a % 2 == 0;
    }
};


template <class T, class O>
void filter(ListE<T>& h1, ListE<T>& h2, O tru) {
    for (nodo<T>* currentN = h1.head, *prev = nullptr, *tmp = nullptr; currentN != nullptr;) {
        if (!tru(currentN->val)) {
            tmp = currentN;
            currentN = currentN->next;

            if (prev) {
                prev->next = tmp->next;
                tmp->next = nullptr;

                if (!h2.head) {
                    h2.head = tmp;
                } else {
                    nodo<T>* endPtr = h2.head;
                    while (endPtr->next != nullptr) {
                        endPtr = endPtr->next;
                    }
                    endPtr->next = tmp;
                }
            } else {
                h1.head = currentN;
                tmp->next = h2.head;
                h2.head = tmp;
            }
        } else {
            prev = currentN;
            currentN = currentN->next;
        } }}


int main() {


    ListE<int> h1,h2;

    h1.add(4);
    h1.add(6);
    h1.add(3);
    h1.add(1);
    h1.add(5);

    pari Par;

    filter(h1, h2, Par);

    cout << "Lista separada: "<<endl;
    cout << "Lista 1: ";
    h1.print();
    cout << endl;

    cout << "Lista 2: ";
    h2.print();
    cout << endl;

    return 0;
}
