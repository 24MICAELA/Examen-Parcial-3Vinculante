//
// Created by Micae on 01/12/2024.
//

#include "Launcher.h"
#include <iostream>
#include <iomanip> // Para formatear la salida

using namespace std;

// Crea y devuelve una lista de tareas predefinidas con su nombre, descripción y duración.
vector<Tarea> Launcher::crearTareas() {
    return {
        Tarea("A", "Reserva de vuelo", 20),
        Tarea("B", "Informar a casa para empacar", 5),
        Tarea("C", "Empacar maletas", 40),
        Tarea("D", "Preparacion del billete por la agencia", 10),
        Tarea("E", "Recoger el billete de la agencia", 5),
        Tarea("F", "Llevar el billete a la oficina", 10),
        Tarea("G", "Recoger las maletas de casa", 20),
        Tarea("H", "Llevar maletas a la oficina", 25),
        Tarea("I", "Conversacion sobre documentos requeridos", 35),
        Tarea("J", "Dictar instrucciones para ausencia", 25),
        Tarea("K", "Reunir documentos", 15),
        Tarea("L", "Organizar documentos", 5),
        Tarea("M", "Viajar al aeropuerto y facturar", 25)
    };
}

// Crea y devuelve una lista de actores predefinidos con su id y descripción.
vector<Actor> Launcher::crearActores() {
    return {
        Actor("1", "CEO de la empresa"),
        Actor("2", "Asistente Personal"),
        Actor("3", "Agencia de Viajes"),
        Actor("4", "Servicio de Transporte")
    };
}

// Asigna tareas a los actores de acuerdo a su índice en las listas de actores y tareas.
// Aquí te aseguras de que los actores y tareas estén correctamente indexados.
void Launcher::asignarTareas(vector<Actor>& actores, const vector<Tarea>& tareas) {
    actores[0].addTarea(tareas[1]);  // Actor 1 -> Tarea 1
    actores[0].addTarea(tareas[8]);  // Actor 1 -> Tarea 8
    actores[0].addTarea(tareas[9]);  // Actor 1 -> Tarea 9
    actores[0].addTarea(tareas[12]); // Actor 1 -> Tarea 12
    actores[1].addTarea(tareas[2]);  // Actor 2 -> Tarea 2
    actores[1].addTarea(tareas[6]);  // Actor 2 -> Tarea 6
    actores[1].addTarea(tareas[7]);  // Actor 2 -> Tarea 7
    actores[2].addTarea(tareas[0]);  // Actor 3 -> Tarea 0
    actores[2].addTarea(tareas[3]);  // Actor 3 -> Tarea 3
    actores[2].addTarea(tareas[4]);  // Actor 3 -> Tarea 4
    actores[2].addTarea(tareas[5]);  // Actor 3 -> Tarea 5
    actores[3].addTarea(tareas[10]); // Actor 4 -> Tarea 10
    actores[3].addTarea(tareas[11]); // Actor 4 -> Tarea 11
}

// Ejecuta el proceso de asignación de tareas, cálculo de tiempos y verificación de cumplimiento de tiempo.
// Muestra un resumen de las tareas asignadas a cada actor, y verifica si cada actor puede completar sus tareas a tiempo.
void Launcher::ejecutar() {
    vector<Tarea> tareas = crearTareas();
    vector<Actor> actores = crearActores();
    asignarTareas(actores, tareas);  // Asignar tareas a los actores

    int tiempoTotal = 0;  // Variable para almacenar el tiempo total de todas las tareas
    cout << "=== Resumen de tareas por actor ===" << endl;

    // Mostrar informacion de cada actor y su tiempo total
    for (const auto& actor : actores) {
        cout << "Actor: " << actor.getDesc() << endl;
        cout << actor.toString();
        tiempoTotal += actor.getDuracionTotal();
        cout << "Tiempo total para " << actor.getDesc() << ": "
             << actor.getDuracionTotal() << " minutos" << endl;
        cout << "----------------------------------" << endl;
    }

    cout << "=== Tiempo total para completar todas las tareas ===" << endl;
    cout << "Tiempo total: " << tiempoTotal << " minutos" << endl;

    // Verificar si los actores pueden completar sus tareas

