#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Ejemplopuntero();//Ejemplo clase arrays y punteros
void ej1();//Ejercicio 1 Tarea
void ej2();//Ejercicio 2 Tarea
int Suma();//Funcion para ejercicio 2 Tarea
void ej3();//Ejercicio 3 Tarea
void ej4();//Ejercicio 4 Tarea
void ej5();//Ejercicio 5 Tarea

int main()
{
    Ejemplopuntero();
    cout << endl;
    cout << endl;
    ej1();
    cout << endl;
    ej2();
    cout << endl;
    ej3();
    cout << endl;
    ej4();
    cout << endl;
    ej5();
}

void Ejemplopuntero()
{
    //vector <string> myStuff = {"espada", "martillo", "bomba"};
    //vector <string> inventory(10);
    //vector <string> inventory(10, "Vacio");
    //vector <string> inventory(myStuff);

    vector <string> inventory;

    inventory.push_back("espada");
    inventory.push_back("escudo");
    inventory.push_back("martillo");

    cout << "Tienes " << inventory.size() << " items de tu inventario" << endl;

    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "Cambiaste tu " << inventory[0] << " por una bomba.";
    inventory[0] = "Bomba";

    cout << endl;

    int i = 0;
    do
    {
        cout << inventory[i] << endl;
        i++;
    } while (i < inventory.size());
}
void ej1()
{
    cout << "Tarea" << endl << "Primer ejercicio" << endl << "Ingresar un numero por consola y determinar si es negativo o positivo." << endl;
    float numazar;
    cin >> numazar;
    if (numazar < 0)
    {
        cout << "El numero es negativo." << endl;
    }
    else if (numazar > 0)
    {
        cout << "El numero es positivo." << endl;
    }
    else
    {
        cout << "El numero es cero." << endl;
    }
}
void ej2()
{
    cout << "Tarea" << endl << "Segundo ejercicio" << endl << "Pedir un numero de 2 digitos, imprimir la suma entre esos digitos." << endl;
    int suma;
    suma = Suma();
    cout << "El resultado es: " << suma << endl;
}
int Suma()
{
    cout << "Introduzca un primer numero, presione enter y luego introduzca el segundo." << endl;
    int a;
    int b;
    cin >> a >> b;
    int c = a + b;
    return c;
}
void ej3()
{
    int dosdigit;
    int x;
    int y;
    cout << "Tarea" << endl << "Tercer ejercicio" << endl << "Pedir un numero de 2 digitos, determinar si uno de ellos es par, e imprimir cual es." << endl;
    cin >> dosdigit;
    x = dosdigit % 10;
    y = dosdigit / 10;
    if (x % 2 == 0 && y % 2 == 0)
    {
        cout << "Ambos numeros son par" << endl;
    }
    else if (x % 2 == 0 && y % 2 != 0)
    {
        cout << "El numero: " << x << " es par" << endl;
    }
    else if (y % 2 == 0 && x % 2 != 0)
    {
        cout << "El numero: " << y << " es par" << endl;
    }
    else
    {
        cout << "Ningun numero es par" << endl;
    }
}
void ej4()
{
    cout << "Tarea" << endl << "Cuarto ejercicio" << endl << "Ingresar 3 numeros por consola y determinar el numero mas alto." << endl;
    int cantdigit, mayor = 0;
    cout << "Ingrese el numero de digitos que desea comparar" << endl;
    cin >> cantdigit;
    int* x;
    x = new int[cantdigit];
    for (int i = 0; i < cantdigit; i++)
    {
        cout << "Ingrese un digito" << endl;
        cin >> x[i];
        if (x[i] > x[i - 1])
        {
            mayor = x[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}
void ej5()
{
    cout << "Tarea" << endl << "Cuarto ejercicio" << endl << "Ingresar 3 numeros por consola y determinar el numero mas alto." << endl;
    int nummen, nummay;
    cout << "Ingrese el rango menor." << endl;
    cin >> nummen;
    cout << "Ingrese el rango mayor." << endl;
    cin >> nummay;
    for (int i = nummen; i <= nummay; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }

    }
}