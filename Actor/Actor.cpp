#include "Actor.h"
#include <iostream>
#include <iomanip> // Para formatear la salida

// Constructor de la clase Actor. Inicializa los atributos id y descripción.
Actor::Actor(const std::string& id, const std::string& descripcion)
    : id(id), descripcion(descripcion) {}

// Devuelve el id del Actor.
std::string Actor::getId() const {
    return id;
}

// Devuelve la descripción del Actor.
std::string Actor::getDesc() const {
    return descripcion;
}

// Agrega una tarea a la lista de tareas del actor y devuelve el tamaño de la lista.
int Actor::addTarea(const Tarea& t) {
    listaTareas.push_back(t);  // Agrega la tarea al final de la lista.
    return listaTareas.size(); // Devuelve el nuevo tamaño de la lista de tareas.
}

// Calcula la duración total de todas las tareas del Actor sumando sus duraciones.
int Actor::getDuracionTotal() const {
    int total = 0;
    for (const auto& tarea : listaTareas) {  // Recorre todas las tareas de la lista.
        total += tarea.getDuracion(); // Suma la duración de cada tarea.
    }
    return total; // Retorna la duración total.
}

// Devuelve una cadena que representa al Actor y sus tareas.
std::string Actor::toString() const {
    std::string resultado = "Actor: " + descripcion + "\n";  // Mueve el nombre del actor aquí.

    // Recorre todas las tareas del actor y las agrega a la cadena de resultado.
    for (const auto& tarea : listaTareas) {
        resultado += tarea.toString() + "\n"; // Llama al método toString de la clase Tarea para cada tarea.
    }

    return resultado; // Devuelve el string con la información del actor y sus tareas.
}
