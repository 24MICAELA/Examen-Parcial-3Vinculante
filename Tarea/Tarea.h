//
// Created by Micae on 01/12/2024.
//

#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id;  // Identificador de la tarea.
    std::string desc;  // Descripción de la tarea.
    int duracion;  // Duración de la tarea en minutos.

public:
    // Constructor que inicializa el id, la descripción y la duración de la tarea.
    Tarea(const std::string& id, const std::string& desc, int duracion);

    // Devuelve el id de la tarea.
    std::string getId() const;

    // Devuelve la descripción de la tarea.
    std::string getDesc() const;

    // Devuelve la duración de la tarea en minutos.
    int getDuracion() const;

    // Devuelve una cadena con la descripción de la tarea y su duración.
    std::string toString() const;
};

#endif //TAREA_H
