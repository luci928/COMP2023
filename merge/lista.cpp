#include <iostream>
using namespace std;

template<class T>
struct nodo
{
    T valor;
    nodo<T> *next;
    nodo(T v, nodo<T> *n = NULL) {
        valor = v;
        next = n;
    }
};

template<class T>
struct cola {
    nodo<T>* head = NULL;
    nodo<T>* tail = NULL;
    void push(T valor);
    bool pop(T& valor);
    bool empty();
    void print();
    ~cola ();
};

template<class T>
void cola <T>::push(T valor) {
    if (head) {
        tail -> next = new nodo<T>(valor);
        tail = tail ->next;      
    }
    else {
        head = new nodo<T>(valor, head);
        tail = head;
    }

}

template<class T>
bool cola <T>::pop(T& valor) {
    valor = 0;
    if (head) {
        valor = head->valor;
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
        cout << p->valor << " -> ";
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


//===========================================================
//===========================================================

int main()
{   
    cola 	<int> PL;
    while (true) {
        char o(' ');
        int x{ 0 };
        system("cls");
        cout << "Seleccione una opcion:" << endl;
        cout << "a. Ingresar valor (Push)" << endl;
        cout << "b. Eliminar valor (Pop)" << endl;
        cout << "c. Pila vacia? (Empty)" << endl;
        cout << "d. Imprimir pila (Print)" << endl;
        cout << "e. Destruir pila (Destructor)" << endl;
        cout << "f. Salir (return 0)" << endl<<endl;
        cout << "Seleccione una opcion:";
        cin >> o;
        system("cls");
        switch (o){

        case 'a':
            cout <<"Ingrese el valor que quiera ingresar: "<<endl;
            cin >> x;
            PL.push(x);
            cout << "Listo :D" << endl;
            system("pause");
            break;

        case 'b':
            if (PL.pop(x)) {
                cout << "El valor sacado es:" << x << endl;
            }
            else {
                cout << "La pila esta vacia!" << endl;
            }
            system("pause");
            break;

        case 'c':
            if (PL.empty()) {
                cout << "La pila aun tiene elementos!" << endl;
            }
            else {
                cout << "La pila esta vacia!" << endl;
            }
            system("pause");
            break;

        case 'd':
            PL.print();
            system("pause");
            break;

        case 'e':
            PL.~cola();
            cout << "La pila ha sido vaciada" << endl;
            cout << endl;
            system("pause");
            break;

        case 'f':
            return 0;
    
        default:
            cout << "Solo puede escoger entre las opciones proporcionadas >:C" << endl;
            cout << endl;
            system("pause");
            break;

        }
    }
}