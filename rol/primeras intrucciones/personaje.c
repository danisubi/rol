//creacion del pj -- stats
#include<unistd.h>
#include<stdlib.h>

int main()
{
//deberia hacerlo con struct para introducir los diferentes pj
	int total = 35;
	int carisma = -4;
	int fuerza = 4;
	int destreza = 10;
	int inteligencia = 10;
	int percepcion = 10;
	int suerte = 5;
	int suma = 0;
	int diferencia = 0;
	char puntos;
	
	puntos = '0';
	suma = carisma + fuerza + destreza + inteligencia + percepcion + suerte;
	
	if (suma == total)
		write(1, "stats repartidos adecuadamente, puedes proseguir", 48);
		write(1,  "\n", 1);

		return(0);
	if (suma > total)
	{
		diferencia = suma - total;
		if (diferencia > 9)
		{
			write(1, "usa una calculadora mejor", 25);
			return(1);
		}
		write(1, "has posicionado puntos de mas", 29);
		write(1, "\n", 1);
		puntos = 'diferencia' + 48;
		write(1, puntos, 1);
		write(1, "\n", 1);
	}
	if (suma < total)
	{
		diferencia = total - suma;
		if (diferencia > 9)
		{
			write(1, "usa una calculadora mejor", 25);
			return(1);
		}
		write(1, "has posicionado puntos de menos", 31);
		write(1, "\n", 1);
		puntos = 'diferencia' + 48;
		write(1, puntos, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "usa una calculadora mejor", 25);
	}
	return(0);
}

