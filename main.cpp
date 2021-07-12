/*
Formato de archivo de entrada:
<Nro Etapa> <Tipo vehiculo> <Nro vehiculo> <Nombre Piloto> <Nombre Copiloto> <Marca vehiculo> <Tiempo en minutos>
    1 dig      1 dig            2 dig           str20           str20           str15               3 dig

Cantidad maxima de registros:
MAX_REGS = 500 

Cantidad de Etapas cinco (5)
Cantidad de Tipos de Vehículos cuatro (4). 
El número de vehículo está asociado a un único corredor y solo se repite si corresponde al mismo corredor. 
Máxima cantidad de vehículos cien (100). 
Si un vehículo abandona la carrera, el tiempo en minutos será de novescientos noventa y nueve (999), 
y en las próximas etapas restantes también por cada una de ellas el tiempo será de (999). 
Se deberán utilizar constantes con nombres para establecer los valores indicados anteriormente. 
Cada uno de los registros leídos del archivo EtapasRally.txt deberán ser volcados a una estructura de datos interna. 
Se podrán utilizar otras estructuras de datos adicionales para realizar determinados cálculos acumulativos de los tiempos obtenidos de cada etapa por cada número de vehículo. 
Se deberán determinar en algún momento del proceso las cantidades de: vehículos asociados a un corredor sin repetir, vehículos que abandonaron la carrera y registros leídos 
del archivo EtapasRally.txt.

*/

#include <iostream>
#include "modulos.cpp"

typedef struct tblEstapasTipos_t tblEstapasTipos;

typedef struct sTiempoTotal_t sTiempoTotal;

void main() {
    //declare ud. las variables de esta función y su inicialización, si corresponde.
    FILE* archivo = Abrir(EtapasRally);	    // Dentro del módulo ProcEtapasRally, invocar a LeeretapsRally.
                                           // Dentro de los módulos de los listados si corresponde     
    ProcEtapasRally(archivo);   // se deberá invocar al módulo de OrdxBur.
    ListadoCorredores();  // En el módulo ListadoCorredores debe existir un 
    ListadoLargada();      // freopen(nomFisArchivo, modo, stdout);
    ListadoPuestosFinal();  // En el módulo ListadoGanadoresxTipoVehic debe
    ListadoGanadoresxTipoVehic();  // volverse el freopen a la consola.
    Cerrar (EtapasRally);   
    return;
} //main

