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
        Actor("1", "Ejecutivo"),  // Actor 1: Ejecutivo
        Actor("2", "Gestion de maletas"), // Actor 2: Gestión maletas
        Actor("3", "Gestion de billetes"),  // Actor 3: Gestión billetes
        Actor("4", "Gestion de documentos")  // Actor 4: Gestión documentos
    };
}

void Launcher::asignarTareas(vector<Actor>& actores, const vector<Tarea>& tareas) {
    // Asignar tareas a los actores de acuerdo a lo especificado
    // Actor 1 -> CEO de la empresa (Ejecutivo)
    actores[0].addTarea(tareas[1]);  // Tarea B: Informar a casa para empacar
    actores[0].addTarea(tareas[8]);  // Tarea I: Conversacion sobre documentos requeridos
    actores[0].addTarea(tareas[9]);  // Tarea J: Dictar instrucciones para ausencia
    actores[0].addTarea(tareas[12]); // Tarea M: Viajar al aeropuerto y facturar

    // Actor 2 -> Asistente Personal (Gestión maletas)
    actores[1].addTarea(tareas[2]);  // Tarea C: Empacar maletas
    actores[1].addTarea(tareas[6]);  // Tarea G: Recoger las maletas de casa
    actores[1].addTarea(tareas[7]);  // Tarea H: Llevar maletas a la oficina

    // Actor 3 -> Agencia de Viajes (Gestión billetes)
    actores[2].addTarea(tareas[0]);  // Tarea A: Reserva de vuelo
    actores[2].addTarea(tareas[3]);  // Tarea D: Preparación del billete por la agencia
    actores[2].addTarea(tareas[4]);  // Tarea E: Recoger el billete de la agencia
    actores[2].addTarea(tareas[5]);  // Tarea F: Llevar el billete a la oficina

    // Actor 4 -> Servicio de Transporte (Gestión documentos)
    actores[3].addTarea(tareas[10]); // Tarea K: Reunir documentos
    actores[3].addTarea(tareas[11]); // Tarea L: Organizar documentos
}

void Launcher::ejecutar() {
    vector<Tarea> tareas = crearTareas();
    vector<Actor> actores = crearActores();

    asignarTareas(actores, tareas);

    int tiempoTotal = 0;
    cout << "=== Resumen de tareas por actor ===" << endl;

    // Mostrar información de cada actor solo una vez
    for (const auto& actor : actores) {
        // Aquí se imprime una sola vez el nombre del actor y sus tareas
        cout << "Actor: " << actor.getDesc() << endl;

        // Mostrar las tareas del actor con el método toString() solo una vez
        cout << actor.toString();  // Imprime las tareas de un actor una sola vez
        tiempoTotal += actor.getDuracionTotal();

        cout << "Tiempo total para " << actor.getDesc() << ": "
             << actor.getDuracionTotal() << " minutos" << endl;
        cout << "----------------------------------" << endl;
    }

    // Verificación de si los actores pueden completar sus tareas a tiempo
    cout << "\n=== Verificacion de tiempos ===" << endl;
    for (const auto& actor : actores) {
        if (actor.getDuracionTotal() > 100) {
            cout << "El actor " << actor.getDesc() << " NO puede completar sus tareas a tiempo." << endl;
        } else {
            cout << "El actor " << actor.getDesc() << " puede completar sus tareas a tiempo." << endl;
        }
    }
}
