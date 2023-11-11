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


#include <iostream>
#include <cstdlib> // Para system("cls")

using namespace std;

int main() {
    cola<int> PL;

    for (;;) {
        char o(' ');
        int x{ 0 };
        system("cls");
        cout << "ELEGIR OPCION:" << endl;
        cout << "a. Ingresar valor (Push)" << endl;
        cout << "b. Eliminar valor (Pop)" << endl;
        cout << "c. Pila vacía (Empty)" << endl;
        cout << "d. Mostrar pila (Print)" << endl;
        cout << "e. Destruir pila (Destructor)" << endl;
        cout << "f. Salir (return 0)" << endl << endl;
        cout << "ELEGIR UNA OPCION";
        cin >> o;
        system("cls");

        switch (o) {
        case 'a':
            cout << "Ingrese el valor que quiera ingresar: " << endl;
            cin >> x;
            PL.push(x);
            cout << "Listo " << endl;
            system("pause");
            break;

        case 'b':
            if (PL.pop(x)) {
                cout << "El valor es:" << x << endl;
            }
            else {
                cout << "La pila está vacía!" << endl;
            }
            system("pause");
            break;

        case 'c':
            if (PL.empty()) {
                cout << "Hay elementos en la pila" << endl;
            }
            else {
                cout << "Pila vacía" << endl;
            }
            system("pause");
            break;

        case 'd':
            PL.print();
            system("pause");
            break;

        case 'e':
            PL.~cola();
            cout << "Pila vaciada" << endl;
            cout << endl;
            system("pause");
            break;

        case 'f':
            return 0;

        default:
            cout << "Elegir solo las opciones proporcionadas " << endl;
            cout << endl;
            system("pause");
            break;
        }
    }
}
