#include <iostream>
#include <stack> //biblioteca para el manejo de pilas
#include <queue> // biblioteca para el manejo de colas
#include <string> //biblioteca para el manejo de cadenas
using namespace std;

//***********************************************************************************************************
// Se declara la pila y la cola principal con la que trabajaremos
stack<string> pila; //pila
queue<string> cola; //cola

//***********************************************************************************************************
//voids 
		
		//void para agregar tareas
		void agrtarea(stack<string>& pila, queue<string>& cola, const string& tarea) {
		    // Agregar tarea a la pila
		    pila.push(tarea);
		
		    // Agregar tarea a la cola
		    cola.push(tarea);
		    system("pause");
		}
		//***********************************************************************************************************
		//Void para pila (se resuelve la ultima tarea primero)
		void ultarea(stack<string>* pila) {
		    if (!pila->empty()) {
		        cout << "Realizando tarea: " << pila->top() << endl;
		        pila->pop();
		    } else {
		        cout << "No hay tareas para completar." << endl;
		    }
		    system("pause");
		}
		//***********************************************************************************************************
		//Void para cola (se resuelve la primera tarea primero)
		void Tareant() {
		    if (!cola.empty()) {
		        cout << "Realizando tarea: " << cola.front() << endl;
		        cola.pop();
		    } else {
		        cout << "No hay tareas para atender." << endl;
		    }
		    system("pause");
		}
		//***********************************************************************************************************
		//Void para Mostrar tareas
		void mostarea(const stack<string>& pila, const queue<string>& cola) {
		    cout << "-----------------Tareas en la pila (ultima tarea asignada se resuelve primero):-----------------" << endl;
		    stack<string> tempPila = pila;
		    while (!tempPila.empty()) {
		        cout << tempPila.top() << endl;
		        tempPila.pop();
		    }
		
		    cout << "-----------------Tareas en la cola (primera tarea asignada se resuelve primero):-----------------" << endl;
		    queue<string> tempCola = cola;
		    while (!tempCola.empty()) {
		        cout << tempCola.front() << endl;
		        tempCola.pop();
		        
		    }
		    system("pause");
		}

//****************************************************************************************************************************
//menu
int menu() {
    int x;
    system("cls");
    cout << "--------------Menu de opciones--------------" << endl;
    cout << "Seleccione una de las siguientes opciones:" << endl;
    cout << " 1. Agregar una tarea: " << endl;
    cout << " 2. Completar la ultima tarea: " << endl;
    cout << " 3. Atender la tarea mas antigua: " << endl;
    cout << " 4. Mostrar todas las tareas: " << endl;
    cout << " 5. SALIR" << endl;
    cout << endl;

    cout << "Elija una opcion: ";
    cin >> x;

    return x;
}
//****************************************************************************************************************************
		// Declaracion de main
		int main() {
		    int op;
		    do {
		        system("cls");
		        op = menu();
		
		        switch (op) { //op es el parametro de nuestro switch
		            case 1:
		                {
		                    system("cls");
		                    string tarea;
		                    cout << "Ingrese la tarea a agregar: ";
		                    cin >> tarea;
		                    agrtarea(pila, cola, tarea); //procesos con parametros
		                    break;
		                }
		            case 2:
		                {
		                    system("cls");
		                    ultarea(&pila);//procesos con parametros
		                    break;
		                }
		            case 3:
		                {
		                    system("cls");//procesos con parametros
		                    Tareant();
		                    break;
		                }
		            case 4:
		                {
		                    system("cls");
		                    mostarea(pila, cola);//procesos con parametros
		                    break;
		                }
		        }
		        
		    } while (op != 5);
		
		    return 0;
		}

