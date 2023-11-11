#include <iostream>
using namespace std;

template <class T>
struct nodo {
    T val;
    nodo<T>* next;
    nodo(T v, nodo<T>* n = NULL) {
        val = v;
        next = n;
    }
};

template <class T, class O>
class L {
    nodo<T>* head = NULL;
    O orderFunctor;

public:
    void add(T val);
    void del(T val);
    bool find(T val, nodo<T>*& Pos);
    void print();
};

template <class T>
struct as {
    bool operator()(const T& a, const T& b) {
        return a < b;
    }
};

template <class T>
struct des {
    bool operator()(const T& a, const T& b) {
        return a > b;
    }
};

template <class T, class O>
bool L<T, O>::find(T val, nodo<T>*& Pos) {
    Pos = NULL;
    nodo<T>* p = head;

    for (; p && orderFunctor(p->val, val); Pos = p, p = p->next);

    if (p && p->val == val) {
        return true;
    } else {
        return false;
    }}

template <class T, class O>
void L<T, O>::add(T val) {
    nodo<T>* Pos;
    if (!find(val, Pos)) {
        if (!Pos) {
            head = new nodo<T>(val, head);} 
        else {
            Pos->next = new nodo<T>(val, Pos->next);
        }}}

template <class T, class O>
void L<T, O>::del(T val) {
    nodo<T>* Pos, *tmp;
    if (find(val, Pos)) {
        if (!Pos) {
            tmp = head;
            head = head->next;
            delete tmp;} 
        else {
            tmp = Pos->next;
            Pos->next = Pos->next->next;
            delete tmp;
        }}}

template <class T, class O>
void L<T, O>::print() {
    nodo<T>* cur = head;
   for (nodo<T>* cur = head; cur != nullptr; cur = cur->next) {
    cout << cur->val << " ";
}
    cout << endl;
}

int main() {
    L<int, as<int>> asList;
    asList.add(6);
    asList.add(3);
    asList.add(7);
    asList.add(2);

    cout << "asendente: ";
    asList.print();

    L<int, des<int>> desList;
    desList.add(6);
    desList.add(3);
    desList.add(7);
    desList.add(2);

    cout << "desendente: ";
    desList.print();

    return 0;
}