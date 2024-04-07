#include <iostream>
using namespace std;

int
main ()
{
  //Declaracion de variables
  int op, contmen, tipllam, cantllam, duracion, cantllamloc, cantminloc,
	cantdinloc, cantllamlargdis, cantminlargdis, cantdinlargdis, cantllamcel,
	cantmincel, cantdincel;

  cout << "-----PROYECTO FINAL/GRUPO 8-----\n";

  do
	{
	  //Imprime el menu principal y solicita alguna de las opciones
	  cout << "\n";
	  cout << "MENU PRINCIPAL:\n\n";
	  cout << "1. Agregar llamadas a las lineas telefonicas\n";
	  cout << "2. Visualizar informacion de cada linea telefonica\n";
	  cout << "3. Visualizar informacion de todas las lineas telefonicas\n";
	  cout << "4. Reiniciar informacion de las lineas telefonicas\n";
	  cout << "5. Salir\n\n";
	  cout << ">>> ";
	  cin >> op;

	  //Imprime error y solicita nuevamente la opcion en caso de seleccionar una que no este dentro de las opciones del menu
	  while (op < 1 or op > 5)
		{
		  cout <<
			"\nERROR: La opcion que ingreso no es valida, intente de nuevo\n\n";
		  cout << ">>> ";
		  cin >> op;
		}

	  //Ejecuta las opciones del menu
	  switch (op)
		{
		case 1:
		  //Imprime y solicita alguno de los tres tipos de llamada
		  cout << "\nIngrese por favor el tipo de llamada que realizo:\n\n";
		  cout << "1. Local\n";
		  cout << "2. Larga distancia\n";
		  cout << "3. Celular\n\n";
		  cout << ">>> ";
		  cin >> tipllam;

		  //Imprime error y solicita nuevamente la opcion en caso de seleccionar una que no este dentro de las opciones
		  while (tipllam < 1 or tipllam > 3)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> tipllam;
			}

		  //Imprime y solicita la cantidad de llamadas que ingresara
		  cout <<
			"\nIngrese por favor la cantidad de llamadas que realizo:\n\n";
		  cout << ">>> ";
		  cin >> cantllam;

		  //Imprime error y solicita nuevamente ingresar la cantidad, en caso de haber digitado un valor negativo
		  while (cantllam < 0)
			{
			  cout <<
				"\nERROR: La cantidad que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> cantllam;
			}

		  //Ejecuta la asignacion de las llamadas segun su tipo
		  switch (tipllam)
			{
			case 1:
			  //Se asigna y/o acumula la cantidad de llamadas locales
			  cantllamloc += cantllam;

			  //Se ingresan los detalles de cada llamada local
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << "\n- Llamada " << i << ": \n\n";
				  cout << "Cuantos minutos duro?\n\n";

				  cout << ">>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas locales
				  cantminloc += duracion;

				}

			  //Se calcula el costo total de las llamadas locales en pesos    
			  cantdinloc = cantminloc * 35;

			  break;
			case 2:
			  //Se asigna y/o acumula la cantidad de llamadas de larga distancia
			  cantllamlargdis += cantllam;

			  //Se ingresan los detalles de cada llamada de larga distancia
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << "\n- Llamada " << i << ": \n\n";
				  cout << "Cuantos minutos duro?\n\n";

				  cout << ">>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas de larga distancia
				  cantminlargdis += duracion;

				}

			  //Se calcula el costo total de las llamadas de larga distancia en pesos    
			  cantdinlargdis = cantminlargdis * 380;

			  break;
			case 3:
			  //Se asigna y/o acumula la cantidad de llamadas a celular
			  cantllamcel += cantllam;

			  //Se ingresan los detalles de cada llamada a celular
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << "\n- Llamada " << i << ": \n\n";
				  cout << "Cuantos minutos duro?\n\n";

				  cout << ">>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas a celular
				  cantmincel += duracion;

				}

			  //Se calcula el costo total de las llamadas a celular en pesos    
			  cantdincel = cantmincel * 999;

			  break;
			}
		  break;
		case 2:
		  //Imprime y solicita alguno de los tres lineas
		  cout <<
			"\nIngrese por favor la linea de la cual desea obtener informacion:\n\n";
		  cout << "1. Local\n";
		  cout << "2. Larga distancia\n";
		  cout << "3. Celular\n\n";
		  cout << ">>> ";
		  cin >> tipllam;

		  //Imprime error y solicita nuevamente la opcion en caso de seleccionar una que no este dentro de las opciones
		  while (tipllam < 0 or tipllam > 3)
			{
			  cout <<
				"\nERROR: La cantidad que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> tipllam;
			}

		  //Ejecuta la visualizacion de alguna de las tres lineas
		  switch (tipllam)
			{
			case 1:
			  //Imprime la informacion de la linea de llamadas locales
			  if (cantllamloc <= 0)
				{
				  cout <<
					"\nLa linea local no registra aun ninguna llamada\n";
				}
			  else
				{
				  cout << "\nLINEA LOCAL:\n\n";
				  cout << "Numero total de llamadas realizadas: " <<
					cantllamloc;
				  cout << "\nDuracion total de las llamadas: " << cantminloc
					<< " minutos";
				  cout << "\nCosto total de las llamadas: $" << cantdinloc <<
					"\n";
				}

			  break;

			case 2:
			  //Imprime la informacion de la linea de llamadas de larga distancia
			  if (cantllamlargdis <= 0)
				{
				  cout <<
					"\nLa linea de larga distancia no registra aun ninguna llamada\n";
				}
			  else
				{
				  cout << "\nLINEA DE LARGA DISTANCIA:\n\n";
				  cout << "Numero total de llamadas realizadas: " <<
					cantllamlargdis;
				  cout << "\nDuracion total de las llamadas: " <<
					cantminlargdis << " minutos";
				  cout << "\nCosto total de las llamadas: $" << cantdinlargdis
					<< "\n";
				}
			  break;

			case 3:
			  //Imprime la informacion de la linea de llamadas de celular
			  if (cantllamcel <= 0)
				{
				  cout <<
					"\nLa linea de celular no registra aun ninguna llamada\n";
				}
			  else
				{
				  cout << "\nLINEA DE CELULAR:\n\n";
				  cout << "Numero total de llamadas realizadas: " <<
					cantllamcel;
				  cout << "\nDuracion total de las llamadas: " << cantmincel
					<< " minutos";
				  cout << "\nCosto total de las llamadas: $" << cantdincel <<
					"\n";
				}
			  break;
			}
		  break;

		case 3:
		  cout << "\nHa seleccionado la opcion 3.\n";
		  break;

		case 4:
		  cout << "\nHa seleccionado la opcion 4.\n";
		  break;
		}

	  //Pregunta si desea regresar al menu principal
	  if (op != 5)
		{
		  cout << "\nDesea regresar al menu principal (1: Si/0: No)?\n\n";
		  cout << ">>> ";
		  cin >> contmen;

		  while (contmen < 0 or contmen > 1)
			{
			  //Imprime error y solicita nuevamente la opcion en caso de seleccionar una que no este dentro de las opciones
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo.\n\n";
			  cout << ">>> ";
			  cin >> contmen;

			}
		}
	}
  while (op != 5 and contmen != 0);

  //Imprime creditos del proyecto
  cout <<
	"\nREALIZADO POR:\n\n> Jhon Alexander Perez (11162322761)\n> Yesica Diaz Pinzon (11162321517)\n> Juan Daniel Olaya (11162326190)";
}
