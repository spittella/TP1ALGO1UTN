/*
FUNCIONES QUE DEBEN SER INVOCADAS EN ALGUNA PARTE:
•	void OrdxBur(tblEtapasTipos vE, short card); ordenar por burbuja CARD es por cardinalidad https://es.wikipedia.org/wiki/Ordenamiento_de_burbuja

 



	void IntCmb(tipoX elem1, tipoX elem2);                // Para cada tipo de ordenamiento y/o tbl
*	bool LeerEtapaRally(argumentos… );                   // se realizará ajustado a c/u. de esos casos.
	short BusBinVec(tblEtapasTipos vrE, short nVehic, short ult); SE REFIERE A BUSQUEDA BINARIA
•	sTiempoTotal BusSecMinTmpxTipoV(tblTiemposTotales vrT, short tipoVehic, short cVehic);
	void OrdxBur(tblTiemposTotales vT, short card); // TipoX representa un tipo de dato a pasar.
*/

typedef unsigned int sTiempoTotal;

sTiempoTotal BusSecMinTmpxTipoV(tblTiemposTotales vrT, short tipoVehic, short cVehic){
    //funcion que busca por TipoVehic y va sumando los tiempos.
    //while vrT si tipoVehic y cVehic, sTiempoTotal += tiempo;
}

short BusBinVec(tblEstapasTipos vrE, short nVehic, short ult){ //ult es para cardinalidad
    short prim = 1, med;
    while (prim <= ult){
        med = (prim + ult) / 2;
        if (nVehic == vrE[med]) return med;
        else{
            if (nVehic > vrE[med]) pri = med+1;
            else ult = med-1;
        }
    }
    return 0;
}

void IntCmb(tipoX elem1, tipoX elem2){ //funcion swap
    /*
    Funcion que swapea dos elementos de un arreglo.
    */
   tipoX auxiliar = elem1;
   elem1 = elem2;
   elem2 = auxiliar;
}
    

void OrdxBur(tblEtapasTipos vE, short card){
    short k = 0;
    bool ordenado;

    do{
        ordenado = true;
        k++;
        for (short i = 1; i <= card - k; i++){
            if (vE[i] > vE[i+1]){
                ordenado = false;
                IntCmb(vE[i], vE[i+1]);
            }
        }
    } while (!ordenado);
}



bool leerEtapasRally(){
    /*
    La función bool LeerEtapasRally(argumentos…), el cual lee una componente de datos del archivo y los almacena en una estructura interna. 
    La función retorna un boolean, verdadero, si la lectura fue exitosa, caso contrario, falso.
    */
}
void ProcEtapasRally(){
    /*
    Debe utilizar la funcion leerEtapasRally.
    */
}

void ListadoCorredores(){
    /*
            Listado de corredores........
    Etp.    Tp Vehiculo     Nombre Piloto   Nombre Copiloto     Marca Vehiculo      Tiempo
    9           9               str20           str20               str15           999
    Esto se hace a medida que se lee el archivo original.
    */
}

void ListadoLargada(){
    /*
            Listado de Largada
    Nro Etapa: 9
        Tipo Vehiculo: 9
            Nro vehiculo    Nom. Piloto     Nom. Copiloto      Marca Vehiculo
            9               str20           str20               str15
    Ordenar forma ascendente segun: nro etapa + tipo vehiculo
    */
}

void ListadoPuestosFinal(){
    /*
            Listado de puestos finales
    Puesto T.Vehiculo   Nro.Vehiculo    Nom.Piloto  Nom.Copiloto Marca Vehic. Tiempo Total
    1       9               99          str20       str20           str15       999
    .
    .
    .

    ordenado ascendente por Tiempo Total (en Minutos)
    */
}

void ListadoGanadoresxTipoVehic(){
    /*
            Listado ganadores por tipo de Vehiculos
    Tipo Vehic. Nro. Vehic. Nombre Piloto       Tiempo Total
    1           99          str20               999
    .
    .
    .
    cantidad de abandonos: 99

    Ordenado tipo de vehiculo ascendente
    */
}