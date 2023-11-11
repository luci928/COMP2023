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
#include <iostream>
#include <string>
    using namespace std;

    template < class T >
    struct nodo
    {
        T val;
        nodo <T>* next;
        nodo(T v, nodo < T >* n = NULL)
        {
            val = v;
            next = n;
        }
    };


    template < class T >
    class GEN {
    public:
        nodo<T>* head = NULL;
        void add(T val);
        void del(T val);
        bool find(T val, nodo < T >*& ant);
        void mergue(nodo<T>* N1, nodo<T>* N2);
        void print();
        ~GEN();


    };

    template < class T >
    bool GEN<T> ::find(T val, nodo<T>*& ant) {
        ant = NULL;
        nodo < T >* p = head;

        for (; p && p->val < val; ant = p, p = p->next);
        if (p->val == val) {
            return true;
        }
        else {
            return false;
        }
    }

    template < class T >
    void GEN<T> ::add(T val) {
        nodo < T >* ant;
        if (!find(val, ant)) {
            if (!ant) {
                head = new nodo < T >(val, head);
            }
            else {
                ant->next = new nodo < T >(val, ant->next);
            }
        }
    }

    template < class T >
    void GEN<T> ::del(T val) {
        nodo < T >* ant, * tmp;
        if (find(val, ant)) {
            if (!ant) {
                tmp = head;
                head = head->next;
                delete tmp;
            }
            else {
                tmp = ant->next;
                ant->next;
            }
        }
    }

    template <class T>
    void GEN<T>::print() {
        nodo<T>* act = head;
        while (act != NULL) {
            cout << act->val << " ";
            act = act->next;
        }
    }

    template < class T >
    GEN<T>::~GEN() {
        for (nodo<T>* actual = head; actual != nullptr; ) {
            nodo<T>* front = actual->next;
            delete actual;
            actual = front;
        }
    }

    template <class T>
    void merge(GEN<T>& N1, GEN<T>& N2) {
        nodo<T>* p = N1.head;
        nodo<T>* q = N2.head;
        nodo<T>* r = nullptr;

        if (p && q) {
            if (p->val < q->val) {
                r = p;
                p = p->next;
            }
            else {
                r = q;
                q = q->next;
            }

            N1.head = r;

            for (; p && q; ) {
                if (p->val < q->val) {
                    r->next = p;
                    r = p;
                    p = p->next;
                }
                else {
                    r->next = q;
                    r = q;
                    q = q->next;
                }
            }

            if (p) {
                r->next = p;
            }
            else if (q) {
                r->next = q;
            }

            N2.head = nullptr;
        }
    }


    int main() {
        GEN<int> A, B;

        A.add(7);
        A.add(6);
        A.add(5);
        A.add(2);
        A.add(12);
        B.add(3);
        B.add(4);
        B.add(9);
        B.add(1);

        A.print();
        cout << endl;
        B.print();
        cout << endl;
        merge(A, B);
        cout << "MERGE" << endl;
        A.print();
        cout << endl;
        B.print();
    }
