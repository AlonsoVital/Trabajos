#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_CTYPE, "Spanish"); 
	system ("cls");
	cout<<"\033[0;032m";
	cout<<"Generaciones de las computadoras\n"<<endl;
	cout<<"\033[0;0m";
	cout<<"Las generaciones de computadoras se refieren a etapas históricas en el desarrollo y evolución de la tecnología informática. Estas generaciones se caracterizan por avances significativos en términos de hardware, arquitectura, capacidad de procesamiento y otras características clave. A continuación, se describen las cinco generaciones de computadoras:\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Primera Generación (Década de 1940-1950)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Durante esta época, las computadoras utilizaban válvulas electrónicas para el procesamiento de datos. Ejemplos notables de esta generación incluyen la ENIAC y la UNIVAC. Eran grandes, costosas y tenían una capacidad de procesamiento limitada.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Segunda Generación (Década de 1950-1960)"<<endl;
	cout<<"\033[0;0m";
	cout<<"En esta etapa, se introdujeron los transistores en lugar de las válvulas, lo que permitió la creación de computadoras más pequeñas, eficientes y confiables. Se desarrollaron lenguajes de programación de alto nivel como FORTRAN y COBOL. Ejemplos de computadoras de esta generación son la IBM 1401 y la UNIVAC 1107.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Tercera Generación (Década de 1960-1970)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Aquí aparecieron los circuitos integrados (chips) que permitieron empaquetar múltiples transistores en un solo componente. Esto llevó a un aumento significativo en la capacidad de procesamiento y la reducción del tamaño de las computadoras. Ejemplos notables incluyen la IBM System/360 y la DEC PDP-8.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Cuarta Generación (Década de 1970-1980)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Se destacó por el desarrollo de microprocesadores, que llevó a la creación de las computadoras personales (PCs). Marcas como Apple y IBM lanzaron modelos populares. También se vio la introducción de las interfaces gráficas de usuario (GUI) y sistemas operativos más amigables.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Quinta Generación (Década de 1980-actualidad)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Esta generación está marcada por avances en la inteligencia artificial y el procesamiento paralelo. Las computadoras se volvieron más potentes, compactas y asequibles. Surgieron tecnologías como la nanotecnología y la computación cuántica, aunque estas aún están en desarrollo.";
	return 0;
}
