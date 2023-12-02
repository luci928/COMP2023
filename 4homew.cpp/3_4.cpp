#include <iostream>
using namespace std;

template <class T>
struct asc {
    bool operator()(T a, T b){
        return a > b;
    }
};

template <class T>
struct des {
    bool operator()(T a, T b){
        return a < b;
    }
};

template <class T>
struct nodo {
    T valor;
    nodo<T> *next;
    nodo<T> *prev; // Agregando el puntero al nodo anterior
    nodo(T v, nodo<T> *n = nullptr, nodo<T> *p = nullptr) {
        valor = v;
        next = n;
        prev = p;
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
    void Josephus(int valor);
    void printReverse(); 
};

template <class T, class funtor>
void lista_circular<T, funtor>::add(T valor) {
    if (!find(valor)) {
        nodo<T>* nuevo = new nodo<T>(valor);
        if (!head) {
            head = nuevo;
            nuevo->next = head;
            nuevo->prev = head; // Haciendo que el nodo apunte a sí mismo en ambas direcciones
        } else {
            nodo<T>* temp = head;
            nodo<T>* prev = nullptr;

            do {
                if (compare(valor, temp->valor)) {
                    nuevo->next = temp;
                    nuevo->prev = temp->prev;
                    temp->prev->next = nuevo;
                    temp->prev = nuevo;
                    if (temp == head) {
                        head = nuevo;
                    }
                    return;
                }
                prev = temp;
                temp = temp->next;

            } while (temp != head);

            prev->next = nuevo;
            nuevo->prev = prev;
            nuevo->next = head;
            head->prev = nuevo;
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
    nodo<T>* temp = head;
    nodo<T>* prev = nullptr;
    while (temp->valor != valor) {
        if (temp->next == head) {
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == head && prev == nullptr) {
        head = nullptr;
        delete temp;
        return;
    }
    if (temp == head) {
        prev = head;
        while (prev->next != head) {
            prev = prev->next;
        }
        head = temp->next;
        head->prev = prev;
        prev->next = head;
        delete temp;
    }
    if (temp->next == head) {
        prev->next = head;
        head->prev = prev;
        delete temp;
    } else {
        prev->next = temp->next;
        temp->next->prev = prev;
        delete temp;
    }
}

template <class T, class funtor>
void lista_circular<T, funtor>::print() {
    if (!head) {
        return;
    }
    nodo<T>* temp = head;
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
    nodo<T>* temp = head->prev;
    do {
        cout << temp->valor << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    cout << endl;
}

template <class T, class funtor>
void lista_circular<T, funtor>::Josephus(int valor) {
    if (!head) {
        return;
    }

    nodo<T>* current = head;
    nodo<T>* temp = nullptr;

    while (head->next != head) {
        // Encontrar el nodo a eliminar
        for (int i = 1; i < valor; i++) {
            temp = current;
            current = current->next;
        }

        // Eliminar el nodo actual y avanzar al siguiente
        if (current == head) {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            head = current->next;
            temp->next = head;
        } else {
            temp->next = current->next;
        }

        nodo<T>* eliminar = current;
        current = current->next;

        cout << "delete: " << eliminar->valor << endl;
        delete eliminar;
    }

    // Eliminar el último nodo restante
    cout << "Último nodo restante: " << head->valor << endl;
    delete head;
    head = nullptr;
}





int main() {
    lista_circular<int, des<int>> lista_asc;
    lista_asc.add(5);
    lista_asc.add(10);
    lista_asc.add(7);
    lista_asc.add(9);

    lista_asc.print(); 
    lista_asc.printReverse(); 
    
    lista_asc.Josephus(3);
    return 0;
}
