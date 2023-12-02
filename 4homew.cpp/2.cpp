#include <iostream>
using namespace std;

template <class T>
struct asc {
    bool operator()(T a, T b) {
        return a > b;
    }
};

template <class T>
struct des {
    bool operator()(T a, T b) {
        return a < b;
    }
};

template <class T>
struct nodo {
    T valor;
    nodo<T> *next;
    nodo<T> *prevNode;
    nodo(T v, nodo<T> *n = nullptr, nodo<T> *p = nullptr) {
        valor = v;
        next = n;
        prevNode = p;
    }
};

template <class T, class funtor>
struct lista_circular {
    nodo<T> *head = nullptr;
    funtor compare;

    bool find(T valor);
    void add(T valor);
    void del(T valor);
    void print();
    void printReverse();
};

template <class T, class funtor>
void lista_circular<T, funtor>::add(T valor) {
    if (!find(valor)) {
        nodo<T> *nuevo = new nodo<T>(valor);
        if (!head) {
            head = nuevo;
            nuevo->next = head;
            nuevo->prevNode = head;
        } else {
            nodo<T> *temp = head;
            nodo<T> *prevNode = nullptr;

            while (temp != head || !prevNode) {
                if (compare(valor, temp->valor)) {
                    nuevo->next = temp;
                    nuevo->prevNode = temp->prevNode;
                    temp->prevNode->next = nuevo;
                    temp->prevNode = nuevo;
                    if (temp == head) {
                        head = nuevo;
                    }
                    return;
                }
                prevNode = temp;
                temp = temp->next;
            }

            prevNode->next = nuevo;
            nuevo->prevNode = prevNode;
            nuevo->next = head;
            head->prevNode = nuevo;
        }
    }
}

template <class T, class funtor>
bool lista_circular<T, funtor>::find(T valor) {
    nodo<T> *actual = head;
    if (!head) {
        return false;
    }
    do {
        if (actual->valor == valor) {
            return true;
        }
        actual = actual->next;
    } while (actual != head);
    return false;
}

template <class T, class funtor>
void lista_circular<T, funtor>::del(T valor) {
    if (!head) {
        return;
    }
    nodo<T> *temp = head;
    nodo<T> *prevNode = nullptr;
    while (temp->valor != valor) {
        if (temp->next == head) {
            return;
        }
        prevNode = temp;
        temp = temp->next;
    }
    if (temp->next == head && prevNode == nullptr) {
        head = nullptr;
        delete temp;
        return;
    }
    if (temp == head) {
        prevNode = head;
        while (prevNode->next != head) {
            prevNode = prevNode->next;
        }
        head = temp->next;
        head->prevNode = prevNode;
        prevNode->next = head;
        delete temp;
    }
    if (temp->next == head) {
        prevNode->next = head;
        head->prevNode = prevNode;
        delete temp;
    } else {
        prevNode->next = temp->next;
        temp->next->prevNode = prevNode;
        delete temp;
    }
}

template <class T, class funtor>
void lista_circular<T, funtor>::print() {
    if (!head) {
        return;
    }
    nodo<T> *temp = head;
    do {
        cout << temp->valor << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

template <class T, class funtor>
void lista_circular<T, funtor>::printReverse() {
    if (!head) {
        return;
    }
    nodo<T> *temp = head->prevNode;
    do {
        cout << temp->valor << " ";
        temp = temp->prevNode;
    } while (temp != head->prevNode);
    cout << endl;
}

int main() {
    lista_circular<int, des<int>> lista_asc;
    lista_asc.add(5);
    lista_asc.add(10);
    lista_asc.add(7);
    lista_asc.add(9);

    lista_asc.print();        // Imprime en orden ascendente
    lista_asc.printReverse(); // Imprime en orden descendente

    return 0;
}
