# Examen-Parcial-3Vinculante

## Link: https://github.com/24MICAELA/Examen-Parcial-3Vinculante.git

## Enunciado del Problema:

Ustedes son Project Managers en una empresa internacional. Reciben una llamada urgente de un alto ejecutivo, informándoles que el CEO de la compañía ha aterrizado en Barcelona desde Estados Unidos y tiene una reunión crucial para las 19:30 en la ciudad. Sin embargo, el ejecutivo cuenta con solo 100 minutos antes de que cierre la facturación para su vuelo desde Madrid a Barcelona.

Objetivo: Debido a la urgencia de la situación, necesitan optimizar las tareas para cumplir con el objetivo de que el ejecutivo llegue a la reunión a tiempo. A continuación se detalla la lista de tareas necesarias, sus descripciones y las duraciones de cada una. Su misión es identificar las dependencias entre las tareas, calcular el tiempo total para completar las tareas en el orden adecuado, y determinar si es posible cumplir con el plazo de 100 minutos.

Tareas, Descripciones y Duraciones:

- A: Reserva de vuelo (20 min)
- B: Informar a casa para empacar (5 min)
- C: Empacar maletas (40 min)
- D: Preparación del billete por la agencia (10 min)
- E: Recoger el billete de la agencia (5 min)
- F: Llevar el billete a la oficina (10 min)
- G: Recoger las maletas de casa (20 min)
- H: Llevar maletas a la oficina (25 min)
- I: Conversación sobre documentos requeridos (35 min)
- J: Dictar instrucciones para ausencia (25 min)
- K: Reunir documentos (15 min)
- L: Organizar documentos (5 min)
- M: Viajar al aeropuerto y facturar (25 min)

Dependencias entre tareas:

Algunas tareas deben ser realizadas antes que otras, por ejemplo, no se puede viajar al aeropuerto antes de haber recogido las maletas.
Además, la reserva del vuelo debe completarse antes de recoger el billete, y la preparación del billete debe ocurrir antes de llevar el billete a la oficina.

Objetivos del Reto:

- Definir el Objetivo del Proyecto: Identificar el propósito principal del proyecto (optimizar la gestión del tiempo para cumplir con el plazo de 100 minutos) y no solo las tareas.

- Diagrama de Flujo del Cronograma: Crear un diagrama de flujo para visualizar el cronograma del proyecto, teniendo en cuenta solo las dependencias entre tareas y no restricciones de recursos.

- Desarrollo de Algoritmo en C++:

- Crear un programa en C++ que:
  - Permita calcular el orden de ejecución de las tareas en función de sus dependencias.
  - Determine el tiempo total necesario para completar todas las tareas.
  - Evalúe si es posible completar las tareas en 100 minutos o menos.
  - Imprima el orden óptimo de ejecución de las tareas y su tiempo total.

Restricciones:

- El tiempo máximo permitido para completar las tareas es de 100 minutos.
- El algoritmo debe gestionar de forma eficiente las dependencias entre las tareas, de tal manera que optimice el tiempo de ejecución.
- 
Entrega:

- Código fuente en C++ que implemente la solución al problema.
- Diagrama de flujo que represente el cronograma de ejecución de las tareas.

## Resolución del problema
Cronograma de ejecución de las tareas

<div align="center">
  <img src="https://github.com/user-attachments/assets/1c6fa63b-424a-489a-afc6-12e126ee0e4a" alt="image" width="900">
</div>

El proyecto se organiza en torno a varias clases que gestionan la creación de tareas, la asignación de responsabilidades y la ejecución de eventos en secuencia. A continuación se describen los componentes principales:

**Componentes Principales del Proyecto**

- Launcher: Actúa como el punto central del programa, encargándose de coordinar todas las actividades principales.

- Actor: Representa a una entidad responsable de realizar un conjunto específico de tareas.

- Tarea: Modela las tareas individuales, cada una con una identificación única, descripción y duración estimada.

**Estructura de Archivos y Descripción de Clases**

`Launcher.h/Launcher.cpp`

La clase Launcher organiza el flujo de trabajo general del proyecto. Es responsable de crear las tareas y actores, asignar tareas y presentar los resultados al usuario.

**Métodos clave:**

`crearTareas()`: Genera y retorna una lista de tareas predefinidas.

`crearActores()`: Genera y retorna una lista de actores predefinidos.

`asignarTareas()`: Distribuye las tareas entre los actores según las responsabilidades definidas.

`ejecutar()`: Ejecuta el proceso completo, incluyendo la creación de elementos, asignación de tareas y visualización de resultados.

`Actor.h / Actor.cpp`

La clase Actor define las entidades que gestionan las tareas, como el CEO, el asistente personal, la agencia de viajes y el servicio de transporte.

**Métodos clave:**

`addTarea(const Tarea&)`: Asocia una tarea al actor.

`getDuracionTotal()`: Calcula la duración total de todas las tareas asignadas.

`toString()`: Retorna un texto formateado con el resumen de las tareas asignadas al actor.

`Tarea.h / Tarea.cpp`

La clase Tarea encapsula las características de cada tarea.

Atributos: Cada tarea tiene un identificador único, una descripción y una duración.

**Métodos clave:**

`getId(), getDesc(), getDuracion()`: Getters para obtener el ID, la descripción y la duración de una tarea.

`toString()`: Proporciona una representación textual de la tarea.

`main.cpp`

El archivo principal del programa que instancia la clase Launcher y llama al método ejecutar() para iniciar el flujo del programa.

**Descripción del Proceso**

**1. Creación de Tareas y Actores**

El proceso comienza con la generación de una lista de tareas y actores mediante los métodos crearTareas() y crearActores() de la clase Launcher. Estos representan las responsabilidades y actividades necesarias para la preparación del CEO de cara a su reunión.

**2. Asignación de Tareas**

El método asignarTareas() distribuye las tareas a los actores según sus roles específicos. 

- Actor 1: Ejecutivo
- Actor 2: Gestión de maletas
- Actor 3: Gestión de billetes
- Actor 4: Gestión de documentos

**3. Ejecución y Visualización de Resultados**

El método ejecutar() coordina la ejecución del flujo completo:

Crea los actores y las tareas.

Asigna tareas a los actores.

Imprime un resumen detallado de las tareas asignadas, el tiempo total requerido para completarlas y una validación sobre si el tiempo total supera el límite de 100 minutos.

**Ejecución del Proyecto**

**1. Compilación**

Asegúrate de que todos los archivos fuente estén correctamente configurados en el sistema de construcción (por ejemplo, CMake). Compila el proyecto para generar el ejecutable.

**2. Ejecución**

Ejecuta el archivo compilado. El programa mostrará el resultado del proceso, incluyendo el resumen de las tareas asignadas a cada actor, el tiempo total requerido y si cumplen con el límite de tiempo establecido.
