//
// Created by Micae on 01/12/2024.
//

#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "../Actor/Actor.h"
#include "../Tarea/Tarea.h"
#include <vector>

class Launcher {
public:
    // Ejecuta el proceso completo: crear tareas, actores, asignar tareas, calcular tiempos y verificar cumplimiento de tiempo.
    void ejecutar();

private:
    // Crea y devuelve una lista de tareas predefinidas con su nombre, descripción y duración.
    std::vector<Tarea> crearTareas();

    // Crea y devuelve una lista de actores predefinidos con su id y descripción.
    std::vector<Actor> crearActores();

    // Asigna tareas a los actores, asegurando que cada actor reciba las tareas correspondientes.
    void asignarTareas(std::vector<Actor>& actores, const std::vector<Tarea>& tareas);
};

#endif //LAUNCHER_H

