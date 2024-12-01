#include "Tarea.h"
#include <iostream>

// Constructor que inicializa el id, la descripción y la duración de la tarea.
Tarea::Tarea(const std::string& id, const std::string& desc, int duracion)
    : id(id), desc(desc), duracion(duracion) {}

// Devuelve el id de la tarea.
std::string Tarea::getId() const {
    return id;
}

// Devuelve la descripción de la tarea.
std::string Tarea::getDesc() const {
    return desc;
}

// Devuelve la duración de la tarea en minutos.
int Tarea::getDuracion() const {
    return duracion;
}

// Devuelve una cadena con la descripción de la tarea y su duración.
std::string Tarea::toString() const {
    return "Tarea: " + desc + ", Duracion: " + std::to_string(duracion) + " minutos";
}
