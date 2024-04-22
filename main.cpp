#include <iostream>
using namespace std;

int
main ()
{
  //Declaracion e iniciacion de variables
  int op, contmen, tipllam, cantllam, duracion, cantllamloc, cantminloc,
	cantdinloc, cantllamlargdis, cantminlargdis, cantdinlargdis, cantllamcel,
	cantmincel, cantdincel, cantdinlin, cantminlin, cantllamlin, relin,
	tarloc = 35, tarlargdis = 380, tarcel = 999, modlin, horas, minutos;

  cout << "-----PROYECTO FINAL/GRUPO 8-----\n";
  do
	{
	  //Imprime el menu principal y pide seleccionar alguna de las opciones, en caso de digitar una que no este, imprime error y la pide nuevamente.
	  cout << "\n";
	  cout << "MENU PRINCIPAL:\n\n";
	  cout << "1. Agregar llamadas a las lineas telefonicas\n";
	  cout << "2. Visualizar informacion de cada linea telefonica\n";
	  cout << "3. Visualizar informacion de todas las lineas telefonicas\n";
	  cout << "4. Modificar las tarifas de las lineas telefonicas\n";
	  cout << "5. Reiniciar informacion de las lineas telefonicas\n";
	  cout << "6. Salir\n\n";
	  cout << ">>> ";
	  cin >> op;
	  while (op < 1 or op > 6)
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
		  //Imprime y pide seleccionar el tipo de llamada realizada, en caso de digitar alguna que no este, imprime error y la pide nuevamente.
		  cout << "\nIngrese por favor el tipo de llamada que realizo:\n\n";
		  cout << "1. Local\n";
		  cout << "2. Larga distancia\n";
		  cout << "3. Celular\n\n";
		  cout << ">>> ";
		  cin >> tipllam;
		  while (tipllam < 1 or tipllam > 3)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> tipllam;
			}

		  //Imprime y pide la cantidad de llamadas que ingresara, en caso de ingresar una cantidad inferior a cero, imprime error y la pide nuevamente.
		  cout <<
			"\nIngrese por favor la cantidad de llamadas que realizo:\n\n";
		  cout << ">>> ";
		  cin >> cantllam;
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
			  cout << "\nCuantos minutos duro?\n\n";
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << i << " >>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas locales
				  cantminloc += duracion;

				}

			  //Se calcula el costo total de las llamadas locales en pesos    
			  cantdinloc = cantminloc * tarloc;

			  break;

			case 2:
			  //Se asigna y/o acumula la cantidad de llamadas de larga distancia
			  cantllamlargdis += cantllam;

			  //Se ingresan los detalles de cada llamada de larga distancia
			  cout << "\nCuantos minutos duro?\n\n";
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << i << " >>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas de larga distancia
				  cantminlargdis += duracion;

				}

			  //Se calcula el costo total de las llamadas de larga distancia en pesos    
			  cantdinlargdis = cantminlargdis * tarlargdis;

			  break;

			case 3:
			  //Se asigna y/o acumula la cantidad de llamadas a celular
			  cantllamcel += cantllam;

			  //Se ingresan los detalles de cada llamada a celular
			  cout << "\nCuantos minutos duro?\n\n";
			  for (int i = 1; i <= cantllam; i++)
				{
				  cout << i << " >>> ";
				  cin >> duracion;

				  //Se acumula el tiempo total de las llamadas a celular
				  cantmincel += duracion;

				}

			  //Se calcula el costo total de las llamadas a celular en pesos    
			  cantdincel = cantmincel * tarcel;

			  break;
			}
		  break;

		case 2:
		  //Imprime y pide alguna de los tres lineas, en caso de digitar alguna que no este, imprime error y la pide nuevamente.
		  cout <<
			"\nIngrese por favor la linea de la cual desea obtener informacion:\n\n";
		  cout << "1. Local\n";
		  cout << "2. Larga distancia\n";
		  cout << "3. Celular\n\n";
		  cout << ">>> ";
		  cin >> tipllam;
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
			  //Imprime la informacion de la linea de llamadas locales
			case 1:
			  //Se condiciona la existencia de registro de llamadas locales
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
				  //Imprime la cantidad de minutos de las llamadas locales. Cuando este es superior a 60, la imprime en horas y minutos.
				  if (cantminloc > 60)
					{
					  horas = cantminloc / 60;
					  minutos = cantminloc % 60;
					  cout << "\nDuracion total de las llamadas: ";
					  if (horas == 1 and minutos == 1)
						{
						  cout << horas << " hora y " << minutos << " minuto";
						}
					  if (horas == 1 and minutos > 1)
						{
						  cout << horas << " hora y " << minutos <<
							" minutos";
						}
					  if (minutos == 1 and horas > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minuto";
						}
					  if (horas > 1 and minutos > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minutos";
						}
					}
				  else
					{
					  cout << "\nDuracion total de las llamadas: " <<
						cantminloc << " minutos";
					}

				  cout << "\nCosto total de las llamadas: $" << cantdinloc
					<< "\n";
				}

			  break;

			  //Imprime la informacion de la linea de llamadas de larga distancia
			case 2:
			  //Se condiciona la existencia de registro de llamadas de larga distancia
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
				  //Imprime la cantidad de minutos de las llamadas de larga distancia. Cuando este es superior a 60, la imprime en horas y minutos.
				  if (cantminlargdis > 60)
					{
					  horas = cantminlargdis / 60;
					  minutos = cantminlargdis % 60;
					  cout << "\nDuracion total de las llamadas: ";
					  if (horas == 1 and minutos == 1)
						{
						  cout << horas << " hora y " << minutos << " minuto";
						}
					  if (horas == 1 and minutos > 1)
						{
						  cout << horas << " hora y " << minutos <<
							" minutos";
						}
					  if (minutos == 1 and horas > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minuto";
						}
					  if (horas > 1 and minutos > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minutos";
						}
					}
				  else
					{
					  cout << "\nDuracion total de las llamadas: " <<
						cantminlargdis << " minutos";
					}

				  cout << "\nCosto total de las llamadas: $" << cantdinlargdis
					<< "\n";
				}
			  break;
			  //Imprime la informacion de la linea de llamadas de celular
			case 3:
			  //Se condiciona la existencia de registro de llamadas de celular
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
				  //Imprime la cantidad de minutos de las llamadas de celular. Cuando este es superior a 60, la imprime en horas y minutos.
				  if (cantmincel > 60)
					{
					  horas = cantmincel / 60;
					  minutos = cantmincel % 60;
					  cout << "\nDuracion total de las llamadas: ";
					  if (horas == 1 and minutos == 1)
						{
						  cout << horas << " hora y " << minutos << " minuto";
						}
					  if (horas == 1 and minutos > 1)
						{
						  cout << horas << " hora y " << minutos <<
							" minutos";
						}
					  if (minutos == 1 and horas > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minuto";
						}
					  if (horas > 1 and minutos > 1)
						{
						  cout << horas << " horas y " << minutos <<
							" minutos";
						}
					}
				  else
					{
					  cout << "\nDuracion total de las llamadas: " <<
						cantmincel << " minutos";
					}

				  cout << "\nCosto total de las llamadas: $" << cantdincel <<
					"\n";
				}
			  break;
			}
		  break;

		case 3:
		  //Se calcula y almacena la sumatoria de los datos de todas las lineas
		  cantllamlin = cantllamloc + cantllamlargdis + cantllamcel;
		  cantminlin = cantminloc + cantminlargdis + cantmincel;
		  cantdinlin = cantdinloc + cantdinlargdis + cantdincel;

		  //Se condiciona la existencia de registro general de datos
		  if (cantllamlin == 0)
			{
			  cout << "\nNo hay informacion registrada en ninguna linea\n";
			}
		  else
			{
			  //Imprime la informacion general de todas las lineas
			  cout << "\nINFORMACION GENERAL: \n";
			  cout << "\nNumero total de llamadas realizadas: " <<
				cantllamlin;
			  //Imprime la cantidad de minutos de todas las llamdas. Cuando este es superior a 60, la imprime en horas y minutos.
			  if (cantminlin > 60)
				{
				  horas = cantminlin / 60;
				  minutos = cantminlin % 60;
				  cout << "\nDuracion total de las llamadas: ";
				  if (horas == 1 and minutos == 1)
					{
					  cout << horas << " hora y " << minutos << " minuto";
					}
				  if (horas == 1 and minutos > 1)
					{
					  cout << horas << " hora y " << minutos << " minutos";
					}
				  if (minutos == 1 and horas > 1)
					{
					  cout << horas << " horas y " << minutos << " minuto";
					}
				  if (horas > 1 and minutos > 1)
					{
					  cout << horas << " horas y " << minutos << " minutos";
					}
				}
			  else
				{
				  cout << "\nDuracion total de las llamadas: " <<
					cantminlin << " minutos";
				}
			  cout << "\nCosto total de llamadas: $" << cantdinlin;
			  cout << "\nCosto promedio por minuto de las llamadas: $" <<
				cantdinlin / cantminlin << " x minuto";

			  //Imprime un promedio de llamadas por linea en caso de haber registros en todas
			  if (cantllamloc > 0 and cantllamlargdis > 0 and cantllamcel > 0)
				{
				  cout << "\nPromedio de llamadas por linea: " << cantllamlin
					/ 3;
				}

			  //Imprime notas de aclaracion con respecto a cual/es linea/s no registraron llamadas
			  if (cantllamloc == 0 or cantllamlargdis == 0 or cantllamcel ==
				  0)
				{
				  cout << "\n\nNOTAS:\n";
				  if (cantllamloc == 0)
					{
					  cout << "\n - La linea local no registro llamadas";
					}
				  if (cantllamlargdis == 0)
					{
					  cout <<
						"\n - La linea de larga distancia no registro llamadas";
					}
				  if (cantllamcel == 0)
					{
					  cout << "\n - La linea de celular no registro llamadas";
					}
				}
			  cout << "\n";
			}
		  break;

		case 4:
		  //Imprime y pide alguna de las lineas, en caso de digitar alguna que no este, imprime error y la pide nuevamente.
		  cout <<
			"\nSeleccione la linea a la cual desea modificar su tarifa:\n\n";
		  cout << "1. Linea local\n";
		  cout << "2. Linea larga distancia\n";
		  cout << "3. Linea celular\n";
		  cout << "\n>>> ";
		  cin >> modlin;
		  while (modlin < 1 or modlin > 3)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> modlin;
			}
		  //Ejecuta la modificacion de la tarifa de alguna de las lineas
		  switch (modlin)
			{
			case 1:
			  //Pide digitar el nuevo valor de la tarifa para la linea local, en caso de ser inferior a cero, imprime error y la solicita de nuevo.
			  cout << "\nIngrese el valor de la tarifa para la linea local\n";
			  cout << "\n>>> $";
			  cin >> tarloc;
			  while (tarloc < 1)
				{
				  cout <<
					"\nERROR: El valor ingresado no puede ser inferior de 0, intente de nuevo\n\n";
				  cout << ">>> $";
				  cin >> tarloc;
				}

			  //Se asigna el nuevo valor a la tarifa de la linea local
			  cantdinloc = cantminloc * tarloc;

			  break;

			case 2:
			  //Pide digitar el nuevo valor de la tarifa para la linea de larga distancia, en caso de ser inferior a cero, imprime error y la solicita de nuevo.
			  cout <<
				"\nIngrese el valor de la tarifa para la linea de larga distancia\n";
			  cout << "\n>>> $";
			  cin >> tarlargdis;
			  while (tarlargdis < 1)
				{
				  cout <<
					"\nERROR: El valor ingresado no puede ser inferior de 0, intente de nuevo\n\n";
				  cout << ">>> $";
				  cin >> tarlargdis;
				}

			  //Se asigna el nuevo valor a la tarifa de la linea de larga distancia
			  cantdinlargdis = cantminlargdis * tarlargdis;

			  break;

			case 3:
			  //Pide digitar el nuevo valor de la tarifa para la linea de celular, en caso de ser inferior a cero, imprime error y la solicita de nuevo.
			  cout <<
				"\nIngrese el valor de la tarifa para la linea celular\n";
			  cout << "\n>>> $";
			  cin >> tarcel;
			  while (tarcel < 1)
				{
				  cout <<
					"\nERROR: El valor ingresado no puede ser inferior de 0, intente de nuevo\n\n";
				  cout << ">>> $";
				  cin >> tarcel;
				}

			  //Se asigna el nuevo valor a la tarifa de la linea de celular
			  cantdincel = cantmincel * tarcel;

			  break;
			}

		  break;

		case 5:
		  //Imprime y pide alguna de las lineas, en caso de digitar alguna que no este, imprime error y la pide nuevamente.
		  cout <<
			"\nSeleccione la linea a la cual desea reiniciar su informacion:\n\n";
		  cout << "1. Linea local\n";
		  cout << "2. Linea larga distancia\n";
		  cout << "3. Linea celular\n";
		  cout << "4. Todas las lineas\n";
		  cout << "\n>>> ";
		  cin >> relin;
		  while (relin < 1 or relin > 4)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo\n\n";
			  cout << ">>> ";
			  cin >> relin;
			}

		  //Ejecuta el reinicio de alguna o todas las lineas
		  switch (relin)
			{
			case 1:
			  //Reinicia la informacion de la linea local
			  cantllamloc = cantminloc = cantdinloc = 0;
			  tarloc = 35;
			  cout << "\nAVISO: Informacion de la linea local reiniciada\n";
			  break;

			case 2:
			  //Reinicia la informacion de la linea de larga distancia
			  cantllamlargdis = cantminlargdis = cantdinlargdis = 0;
			  tarlargdis = 380;
			  cout <<
				"\nAVISO: Informacion de la linea de larga distancia reiniciada\n";
			  break;

			  //Reinicia la informacion de la linea de celular
			case 3:
			  cantllamcel = cantmincel = cantdincel = 0;
			  tarcel = 999;
			  cout << "\nAVISO: Informacion de la linea celular reiniciada\n";
			  break;

			case 4:
			  //Reinicia la informacion de todas las lineas
			  cantllamloc = cantminloc = cantdinloc = cantllamlargdis =
				cantminlargdis = cantdinlargdis = cantllamcel = cantmincel =
				cantdincel = 0;
			  tarloc = 35;
			  tarlargdis = 380;
			  tarcel = 999;
			  cout <<
				"\nAVISO: Informacion de todas las lineas reiniciadas\n";
			  break;

			}
		  break;

		}

	  //Pregunta si desea regresar al menu principal, en caso de digitar alguna que no este, imprime error y la pide nuevamente.
	  if (op != 6)
		{
		  cout << "\nDesea regresar al menu principal? (1: Si/0: No)\n\n";
		  cout << ">>> ";
		  cin >> contmen;
		  while (contmen < 0 or contmen > 1)
			{
			  cout <<
				"\nERROR: La opcion que ingreso no es valida, intente de nuevo.\n\n";
			  cout << ">>> ";
			  cin >> contmen;
			}
		}
	}
  while (op != 6 and contmen != 0);

  //Imprime creditos del proyecto
  cout <<
	"\nREALIZADO POR:\n\n> Jhon Alexander Perez (11162322761)\n> Yesica Diaz Pinzon (11162321517)\n> Juan Daniel Olaya (11162326190)";
}
