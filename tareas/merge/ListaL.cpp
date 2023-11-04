#include <iostream>
using namespace std;

template<class T>
struct Nodo
{
    T valor;
    Nodo<T>* siguiente;
    Nodo(T v, Nodo<T>* n = NULL)
    {
        valor = v;
        siguiente = n;
    }
};

template<class T>
struct Cola
{
    Nodo<T>* cabeza = NULL;
    Nodo<T>* cola = NULL;
    void insertar(T valor);
    bool eliminar(T& valor);
    bool estaVacia();
    void imprimir();
    ~Cola();
};

template<class T>
void Cola<T>::insertar(T valor)
{
    if (cabeza)
    {
        cola->siguiente = new Nodo<T>(valor);
        cola = cola->siguiente;
    }
    else
    {
        cabeza = new Nodo<T>(valor, cabeza);
        cola = cabeza;
    }
}

template<class T>
bool Cola<T>::eliminar(T& valor)
{
    valor = 0;
    if (cabeza)
    {
        valor = cabeza->valor;
        Nodo<T>* tmp = cabeza;
        cabeza = cabeza->siguiente;
        delete tmp;
        return true;
    }
    else
    {
        return false;
    }
}

template<class T>
bool Cola<T>::estaVacia()
{
    return cabeza == NULL;
}

template<class T>
void Cola<T>::imprimir()
{
    cout << "Cabeza -> ";
    for (Nodo<T>* p = cabeza; p; p = p->siguiente)
        cout << p->valor << " -> ";
    cout << "NULL \n";
}

template<class T>
Cola<T>::~Cola()
{
    Nodo<T>* tmp;
    while (cabeza)
    {
        tmp = cabeza;
        cabeza = cabeza->siguiente;
        delete tmp;
    }
    cabeza = NULL;
    cola = NULL;
}

int main()
{
    Cola<int> cola;
    while (true)
    {
        char opcion(' ');
        int valor = 0;
        system("cls");
        cout << "Seleccione una opcion:" << endl;
        cout << "a. Ingresar valor (Insertar)" << endl;
        cout << "b. Eliminar valor (Eliminar)" << endl;
        cout << "c. Cola vacia? (EstaVacia)" << endl;
        cout << "d. Imprimir cola (Imprimir)" << endl;
        cout << "e. Destruir cola (Destructor)" << endl;
        cout << "f. Salir (return 0)" << endl << endl;
        cout << "Seleccione una opcion:";
        cin >> opcion;
        system("cls");
        switch (opcion)
        {
        case 'a':
            cout << "Ingrese el valor que quiera ingresar: " << endl;
            cin >> valor;
            cola.insertar(valor);
            cout << "Listo :D" << endl;
            system("pause");
            break;

        case 'b':
            if (cola.eliminar(valor))
            {
                cout << "El valor eliminado es:" << valor << endl;
            }
            else
            {
                cout << "La cola esta vacía!" << endl;
            }
            system("pause");
            break;

        case 'c':
            if (cola.estaVacia())
            {
                cout << "La cola aún tiene elementos!" << endl;
            }
            else
            {
                cout << "La cola está vacía!" << endl;
            }
            system("pause");
            break;

        case 'd':
            cola.imprimir();
            system("pause");
            break;

        case 'e':
            cola.~Cola();
            cout << "La cola ha sido vaciada" << endl;
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
