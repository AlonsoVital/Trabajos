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
	cout<<"Las generaciones de computadoras se refieren a etapas hist�ricas en el desarrollo y evoluci�n de la tecnolog�a inform�tica. Estas generaciones se caracterizan por avances significativos en t�rminos de hardware, arquitectura, capacidad de procesamiento y otras caracter�sticas clave. A continuaci�n, se describen las cinco generaciones de computadoras:\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Primera Generaci�n (D�cada de 1940-1950)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Durante esta �poca, las computadoras utilizaban v�lvulas electr�nicas para el procesamiento de datos. Ejemplos notables de esta generaci�n incluyen la ENIAC y la UNIVAC. Eran grandes, costosas y ten�an una capacidad de procesamiento limitada.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Segunda Generaci�n (D�cada de 1950-1960)"<<endl;
	cout<<"\033[0;0m";
	cout<<"En esta etapa, se introdujeron los transistores en lugar de las v�lvulas, lo que permiti� la creaci�n de computadoras m�s peque�as, eficientes y confiables. Se desarrollaron lenguajes de programaci�n de alto nivel como FORTRAN y COBOL. Ejemplos de computadoras de esta generaci�n son la IBM 1401 y la UNIVAC 1107.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Tercera Generaci�n (D�cada de 1960-1970)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Aqu� aparecieron los circuitos integrados (chips) que permitieron empaquetar m�ltiples transistores en un solo componente. Esto llev� a un aumento significativo en la capacidad de procesamiento y la reducci�n del tama�o de las computadoras. Ejemplos notables incluyen la IBM System/360 y la DEC PDP-8.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Cuarta Generaci�n (D�cada de 1970-1980)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Se destac� por el desarrollo de microprocesadores, que llev� a la creaci�n de las computadoras personales (PCs). Marcas como Apple y IBM lanzaron modelos populares. Tambi�n se vio la introducci�n de las interfaces gr�ficas de usuario (GUI) y sistemas operativos m�s amigables.\n"<<endl;
	cout<<"\033[0;034m";
	cout<<"Quinta Generaci�n (D�cada de 1980-actualidad)"<<endl;
	cout<<"\033[0;0m";
	cout<<"Esta generaci�n est� marcada por avances en la inteligencia artificial y el procesamiento paralelo. Las computadoras se volvieron m�s potentes, compactas y asequibles. Surgieron tecnolog�as como la nanotecnolog�a y la computaci�n cu�ntica, aunque estas a�n est�n en desarrollo.";
	return 0;
}
