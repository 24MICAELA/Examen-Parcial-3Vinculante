//
// Created by Micae on 01/12/2024.
//

#ifndef ACTOR_H
#define ACTOR_H

#include <vector>
#include "../Tarea/Tarea.h"
#include <string>

// Clase Actor que representa a un actor con un id, una descripción y una lista de tareas.
class Actor {
private:
    std::string id; // Identificador del actor.
    std::string descripcion; // Descripción del actor.
    std::vector<Tarea> listaTareas; // Lista de tareas asignadas al actor.

public:
    // Constructor de la clase Actor. Inicializa el id y la descripción del actor.
    Actor(const std::string& id, const std::string& descripcion);

    // Devuelve el id del actor.
    std::string getId() const;

    // Devuelve la descripción del actor.
    std::string getDesc() const;

    // Agrega una tarea a la lista de tareas del actor y devuelve el tamaño actualizado de la lista.
    int addTarea(const Tarea& t);

    // Calcula la duración total de todas las tareas asignadas al actor.
    int getDuracionTotal() const;

    // Devuelve una cadena de texto con la representación del actor y sus tareas.
    std::string toString() const;
};

#endif //ACTOR_H

