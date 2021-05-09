#include <stdio.h>
#include <stdbool.h>

const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';

const char LIMPIEZA = 'L';
const char ANIME = 'A';
const char MUSICA_POP = 'M';

const char FOCAS = 'F';
const char BAMBU = 'B';
const char PESCADO = 'P';

const char BIENVENIDA = 'B';
const char DESPEDIDA = 'D';

const int PISO_MAS_BAJO = 1;
const int PISO_MAS_ALTO = 18;

const int GRITO_MINIMO = 1;
const int GRITO_MAXIMO = 18;

const int MULTIPLICADOR_LIMPIEZA=1;
const int MULTIPLICADOR_ANIME=2;
const int MULTIPLICADOR_MUSICA_POP=3;

const int PUNTAJE_FOCAS = 3;
const int PUNTAJE_BAMBU = 6;
const int PUNTAJE_PESCADO = 9;

const int PUNTAJE_MINIMO_POLAR = 5;
const int PUNTAJE_MAXIMO_POLAR = 24;
const int PUNTAJE_MINIMO_PANDA = 25;
const int PUNTAJE_MAXIMO_PANDA = 43;

const int PUNTAJE_MINIMO = 5;
const int PUNTAJE_MAXIMO = 63;

void mostrar_imagen (char imagen);
void mostrar_mensaje (char mensaje);


void preguntar_canal_tv (char* canal_tv);
bool es_canal_valido (char canal_tv);
void preguntar_alimento (char* alimento);
bool es_canal_valido (char canal_tv);
void preguntar_alimento (char* alimento);
bool es_alimento_valido (char alimento);
void preguntar_piso_torre (int* piso_torre);
bool es_piso_torre_valido (int piso_torre);
void preguntar_fuerza_grito (int* fuerza_grito);
bool es_fuerza_grito_valida (int fuerza_grito);

int calcular_multiplicador_canal_tv (char canal_elegido);
int calcular_puntaje_alimento (char alimento);
int calcular_puntaje_total (int piso_torre, int fuerza_grito, int multiplicador_canal_tv, int puntaje_alimento);

void mostrar_personalidad_escandalosa (int piso_torre, int fuerza_grito, char canal, char alimento);


int main (){

	char canal_tv = '0';
	char alimento = '0';

	int piso_torre = 0;
	int fuerza_grito = 0;
	
	mostrar_imagen(BIENVENIDA);
	mostrar_mensaje(BIENVENIDA);

	preguntar_canal_tv(&canal_tv);
	preguntar_alimento(&alimento);
	preguntar_piso_torre(&piso_torre);
	preguntar_fuerza_grito(&fuerza_grito);

	mostrar_personalidad_escandalosa(piso_torre,fuerza_grito,canal_tv,alimento);

	mostrar_mensaje(DESPEDIDA);

	return 0;

}

/*
 * Pre: Imagen sea BIENVENIDA, POLAR, PARDO o PANDA.
 * Pos: Imprime una imagen dependiendo del carácter ingresado.
 */

void mostrar_imagen (char imagen){

	if( (imagen == BIENVENIDA) ){

		printf("                   ▖▖         ▗ ▖                                                         \n");
    	printf("                 ▗█▛▘      ▞▘▀   ▘▀▀▘▄          ▗▄         ▗▀▀▀▀▀▀▘▀▘▚▖    ▝▌▀▝▘▀▝▘▀▝▀▀   \n");
    	printf("         ▗▗      ▛▙        ▌          ▚        ▖▌ ▀▖       ▚           ▀▖  ▐          ▐   \n");
    	printf("       ▗▟▛▘ ▗█▘ ▗█▘ ▗█▜▙▖  ▌   ▝▀▘▚   ▝▘      ▗▘   ▚       ▚    ▗▗▗     ▚  ▐    ▖▖▖▄▗▝▝   \n");
    	printf("    ▗▄█▙▟▝  ▟▜  ▟▟ ▐█ ▗█▘  ▌   ▚▖▖▞   ▗▘     ▗▘     ▌      ▚    ▌  ▝▚   ▐▖ ▐   ▝▖         \n");
    	printf("  ▗▟▛▘ ▟▙  ▗▜▘  ▙▌▗▛▌▄▜▀   ▌          ▌▘     ▞      ▝▚     ▙   ▝▖ ▗▗▘   ▗▖ ▐    ▘▀▘▚▖     \n");
    	printf(" ▐▛▘  ▐█   ▟▜  ▐▛▖▐▟▀▘▘ ▖▖ ▌          ▝▖    ▞   ▞▀▖  ▝▖    ▞    ▝▝      ▌  ▐       ▗▘     \n");
    	printf(" ▐█▄  ▟▛   ▙▛  ▛▙  █▄ ▄▟▀  ▌   ▗▘▀▐▗   ▝▌  ▐▝  ▗▘ ▐▖  ▐▖   ▞          ▗▀   ▐▖   ▗▖▄▖▘     \n");
    	printf("  ▀▀▘▝▟▘  ▟▚▌ ▐█▘  ▝▀▀▘    ▌   ▚▘ ▗▐    ▌ ▐▝   ▝▀▀▝    ▐   ▜   ▗▄▗    ▐▖   ▐   ▝▄         \n");
    	printf("     ▐█  ▄▙▟▄▄█▘     ▖▄▄▖  ▌▘   ▘▀▝    ▗▘▗▘             ▙  ▚   ▗▖ ▀▖   ▝▄  ▐     ▀▝▀▘▀▚   \n");
    	printf("     ▐▜▄▙▛ ▝▀▘▘ ▄▄▚▛▛▛▀    ▚          ▗▞ ▌▘  ▗▗▄▄▄▄▄▄▖   ▙ ▜   ▐   ▝▌   ▝▖ ▐          ▐   \n");
    	printf("      ▝▝      ▗▜▀▝▘▘       ▝▞▄▄▄▄▄▄▗▖▌▘ ▝▞▖▄▖▌       ▝▚▄▄▐ ▝▄▗▖▛    ▝▚▄▄▖▜ ▝▚▄▄▄▄▖▄▗▖▖▀   \n");
    	printf("      ▖▖▄▄▗▖▖            ▗                                   ▗                            \n");
    	printf("    ▞▘       ▘▀▝▚▄   ▄▀▀▀▝▝▀▝▝ ▘▝▝▖      ▖▘▘▘▀▝▘▘▖      ▗▝▝▘▘▘ ▘▀▀▀▝▄       ▗▖▘▘▘▘▀▝▖▖    \n");
    	printf("   ▝▌             ▚  ▌            ▞     ▗▘       ▐      ▐            ▘▄    ▐         ▝▌   \n");
    	printf("   ▐      ▄▗      ▝▚ ▌           ▗▝     ▌         ▚     ▚      ▗      ▝▖  ▗▘          ▐   \n");
    	printf("   ▗▘     ▞ ▜      ▌ ▌      ▗▘▀▝▀▝     ▗▘    ▗    ▝▖    ▚     ▝▘▝▖     ▚  ▐      ▞▘▚▗▄▘   \n");
    	printf("   ▐      ▝▞▝     ▗▘ ▌       ▘▘▖▄      ▞    ▗▀▖    ▚    ▙     ▝▌ ▌     ▐  ▝▌     ▝▀▗▖     \n");
    	printf("   ▐             ▗▘  ▌          ▗▘    ▗▘    ▞▖▀    ▝▖   ▄      ▚▝      ▛   ▚         ▀▄   \n");
    	printf("   ▗▘            ▝▄ ▝▞          ▗▘    ▞     ▙ ▞▘    ▚   ▐             ▞     ▀▄▖▖       ▚▖ \n");
    	printf("   ▝▖     ▞▝▖      ▌ ▌      ▗▖▌▞▝    ▗▘      ▘▘▘    ▐▖  ▚             ▌     ▖▖ ▘▚▖      ▄ \n");
    	printf("   ▝▌     ▜ ▐▘     ▞ ▌      ▗▖▖▖▖▖   ▌▘              ▐  ▚      ▟▖     ▘▚▐▗ ▛  ▀▝▄▝      ▚ \n");
    	printf("    ▌      ▀       ▞ ▞           ▝▌ ▐                ▝▖ ▞      ▖▚        ▐▐             ▌ \n");
    	printf("    ▌            ▗▞  ▞            ▌▘▚      ▛▀▀▀▚      ▚ ▐      ▌▚▘      ▗▘▐▖          ▗▀  \n");
    	printf("    ▚▖▖      ▖▖▄▐▝   ▝▄ ▖       ▖▗▘▝▄▗   ▗▐     ▌▖ ▗ ▖▌▘▐▖   ▗▗▞ ▝▄▗ ▗▗▞▘  ▝▖▄     ▗▗▞▘   \n");
    	printf("      ▝▝▝▘▀▝▘          ▘▘▀▝▀▝▀▝▘▝     ▘▀▀▝       ▝▝ ▘    ▝▘▀▝▝      ▀▝        ▝▘▘▀▝ ▘     \n");   
	
    	printf("                              ▖▄▄▄▄▄▄▄▄▄▄▄▄▗                                         \n"); 
    	printf("                       ▗▗▄▝▀▀▘              ▀▀▀▄▄▗▖▄  ▖▄▄▖▄ ▄▄                        \n"); 
    	printf("                    ▗▄▀▘                        ▝▘  ▛▘    ▝ ▀▐▖                       \n"); 
    	printf("              ▗▄  ▗▛▘                            ▘           ▝▄                      \n"); 
    	printf("             ▟▘ ▀▛▘                                           ▝▌                     \n"); 
    	printf("             ▌ ▗▞                                              ▐▖                   \n");  
    	printf("             ▚▖▟                                        ▗▄    ▝▀▄▄▄▖                 \n"); 
    	printf("              ▟▘                                         ▘     ▄▄▄ ▝▚                \n"); 
    	printf("              ▞                                               ▝▀▛▀  ▝▙               \n"); 
    	printf("             ▗▌                                                      ▟               \n"); 
    	printf("             ▗▌                                                      ▟               \n"); 
    	printf("              ▌                                               ▗▖    ▐▘               \n"); 
    	printf("              ▙                                                    ▗▛                \n"); 
    	printf("              ▐▖                                                  ▄▀                 \n"); 
    	printf("               ▚                                                ▄▀                   \n"); 
    	printf("               ▝▙                                            ▄▞▀                     \n"); 
    	printf("                 ▙                      ▖                ▄▄▀▀                        \n"); 
    	printf("                 ▝▙         ▗           ▌        ▐ ▄▄▄▌▀▀                            \n"); 
    	printf("                  ▝▖        ▗▘▖▄▄▄▄▄▄▄▄▟▘        ▟▀  ▐                               \n"); 
    	printf("                   ▜        ▗▘   ▌      ▌        ▞   ▐                               \n"); 
    	printf("                   ▐▖       ▐   ▐       ▙       ▗▘   ▐▘                              \n"); 
    	printf("                    ▙       ▟▄▐▞▀▀▝▝▗▗▗▄▟       ▟    ▛ ▞▀▗                               \n"); 
    	printf("                    ▝▙  ▖▗▖▗▘ ▞        ▗▘▙ ▗ ▗▗▞▀▗▄▞▀▀▀▘▚▟▜▄                         \n"); 
    	printf("                    ▄▀▚▖▛▗▙▀ ▞        ▗▘  ▚▟ ▟▞  ▟         ▝▚▄                       \n"); 
    	printf("                ▞▀▗▟▘  ▝▝   ▗▘        ▛     ▀ ▛▘▀            ▝▚                      \n"); 
    	printf("               ▐▘ ▟▘        ▌        ▗▘      ▐          ▄▄▖  ▞▝▚▖                    \n"); 
    	printf("               ▐▖▗▌        ▗▘        ▟       ▐        ▗▘   ▙ ▌▗▞▌                    \n"); 
    	printf("                ▀▟         ▐         ▞       ▐        ▌  ▄▖ ▐ ▝▘▗▜▀▀▙               \n"); 
    	printf("                 ▌         ▌         ▌       ▐        ▌       ▞   ▜█▙             \n"); 
    	printf("                 ▌         ▌         ▌       ▝▖       ▝▘▄▖▀         ▐                \n"); 
    	printf("                 ▌         ▌         ▌        ▛                     ▛                \n"); 
    	printf("                 ▙         ▌         ▚        ▐▖                   ▞▘                \n"); 
    	printf("                 ▚         ▚         ▐         ▚              ▝▀  ▞▘                 \n"); 
    	printf("                 ▝▌        ▐         ▝▌        ▝▙               ▗▛                   \n"); 
    	printf("                  ▜▖        ▌         ▌         ▝▄           ▗▄▀▘                    \n"); 
    	printf("                   ▐        ▜         ▐▖▗        ▝▚      ▗▄▄▀▘                       \n"); 
    	printf("                   ▐        ▐▖         ▚▞        ▐▗▜▄▄▞▝▀▘                           \n");
    	printf("                   ▐▘       ▐▝▌        ▖▛        ▛▘  ▙                               \n"); 
    	printf("                    ▌       ▟▀▀█▀▀▀▀▀▀▘ ▜       ▐▘ ▗▖▌   ▗▄▖                         \n"); 
    	printf("                    ▜      ▗▛▀▀▀▀▀▀▀▀▀▀▀▜       ▟ ▞▘ ▐▘ ▖▟ ▐▖                        \n"); 
    	printf("                   ▄▟▌ ▝▖▐ ▞             ▙  ▖▗ ▐▘▝▜   ▛▘ ▘▀▀▄▖                       \n"); 
    	printf("             ▗▄▖▄▄▀  ▝▚▟▄▟▀              ▝▄▖▌ ▙▘   ▘         ▝▚▖                     \n"); 
    	printf("             ▞  ▞▘                         ▝▀▀▘                ▝▖                    \n"); 
    	printf("             ▐▖▟▘                                               ▜▖                   \n"); 
    	printf("              ▜▖                                               ▗▖▚▖                  \n"); 
    	printf("              ▟                                           ▐▖    ▘ ▝▀▄▖               \n"); 
    	printf("              ▞                                                 ▗▟█▙▖▝▚              \n"); 
    	printf("              ▙                                                  ▀▀▀  ▝▖             \n"); 
    	printf("              ▐                                                       ▗▌             \n"); 
    	printf("              ▐▖                                                      ▞              \n"); 
    	printf("               ▙                                                ▄▖  ▄▀               \n"); 
    	printf("               ▝▖                                    ▌           ▄▞▀                 \n"); 
    	printf("                ▜▄                                   ▝▙      ▗▄▀▀                    \n"); 
    	printf("                 ▞           ▖                         ▙  ▄▞▀▘                       \n"); 
    	printf("                ▟▘         ▗▞               ▗           █▀                           \n"); 
    	printf("               ▗▘         ▄▚▄▄▄▄▄▖▄▗▖▖▄▗▄▄▄▄▖▛▄         ▝▖                           \n"); 
    	printf("               ▛▖       ▗▞  ▀▖      ▐▖   ▄▘    ▀▄        ▝▌                          \n"); 
    	printf("              ▗▙▘      ▄▘    ▝▚     ▖▌  ▞▗▌     ▄▜▖       ▜                          \n"); 
    	printf("              ▝▌▌   ▗▄▀        ▀▄ ▝▖▐▌ ▝▛▙   ▗▞▀  ▝▚▖   ▗ ▄▌                         \n"); 
    	printf("                ▀▀▀▀             ▀▀▀▘   ▚▄▄▖▀       ▝▀▄▄▗▚▟▘                         \n"); 
    	printf("                                                         ▘                           \n ");
	} else if ( (imagen == PARDO) ){

	printf("                                         ▞▛▛▄                                   \n");
	printf("                                     ▄▖▌▛▌▌▛▞▜▜▐▗                               \n");
	printf("                             ▗▄▖▖ ▄▐▚▚▞▞▞▞▟▐▐▚▚▚▚▜▄                             \n");
	printf("                             ▙▖▙▀▌▌▌▌▌▌▛▞▟▐▐▞▞▞▞▟▐▗▙                            \n");
	printf("                             ▝▐▟▐▞▞▟▐▞▞▞▞▞▞▞▞▞▟▐▐▐▐▝▙                           \n");
	printf("                              ▌▌▌▌▛▞▞▞▟▐▚▚▚▌▙▀▞▞▞▞▌█▟▗                          \n");
	printf("                             ▛▞▟▐▞▞▞▞▞▞▞▞▞▌▌▙▛▞▞▌▌▌▌▌▌▛▜▐▗▖                     \n");
	printf("                            ▞▞▞▞▞▞▞▟▐▞▞▟▐▞▞▞▞▌▌▌▙▜▐▟███▛▞▌▙▖                    \n");
	printf("                           ▗▚▜▐▞▞▞▟▐▐▐▐▐▐▐▐▞▌▌▛▞▞▞▞▞▞▞▞▞▞▞▄▜                    \n");
	printf("                           ▞▞▞▞▞▞▌▌▌▌▙▜▐▞▛▙▚▚▚▚▚▚▚▚▚▜▐▐▞▞▞▞▞▖      ▗▗▗▄▄▖▌▄▄    \n");
	printf("                           ▌▛▞▟▐▞▞▞▞▞▞▞▞▟▛█▟▞▘▛▞▌▙▜▐▐▞▚▚▜▐▞▟▗▗▄▖▌▙▀▌▌▙▄▐▐▐▞▞▜   \n");
	printf("                         ▗▐▞▞▞▞▞▞▞▞▌▛▞▞▞▙▀▐▐▟▜▄▝▞▟▟▐▚▞▌▌▌▌▙▜▚▚▚▚▚▚▜▐▐▖▌▙▚▚▚▚▚   \n");
	printf("                      ▄▐▀▞▌▌▛▞▟▐▐▞▌▌▌▙▜▐▐▐▝▖▀█▟▜▜▙▜▚▚▚▚▚▚▙▜▐▐▞▞▞▟▐▐▐▐▐▞▖▌▌▙▀    \n");
	printf("                   ▗▐▚▚▚▜▐▐▐▐▐▐▐▚▚▚▚▚▚▚▚▀▙▚▝▞▟▟▜▙▜▜▚▚▚▚▜▟▐▞▞▌▌▙▀▞▞▞▌▙▚▚▚▚▀      \n");
	printf("                  ▄▚▚▚▚▚▚▚▚▌▙▚▌▌▌▌▌▙▜▐▐▞▌▌▙▙▐▐▟▙▜▚▚▚▚▜▐▌▌▌▌▌▌▌▌▛▞▞▞▞▞▞▞▌▘       \n");
	printf("                 ▞▞▞▌▙▜▐▚▜▟▞▌▛▀▛▟▟▐▐▐▐▐▐▐▐▄▐▐▚▚▞▞▞▞▌▙▜▚▚▚▚▚▌▙▚▚▚▚▜▐▚▙▀▝         \n");
	printf("                ▐▞▟▐▐▐▐▞▜▚▞▞▞▞▙▜▚▜▞▌▌▙▚▚▚▚▞▞▞▞▞▞▞▟▐▐▐▐▐▐▞▌▌▌▌▌▙▚▌▙▚▘            \n");
	printf("                ▌▌▌▌▙▚▚▚▚▚▚▚▚▌▌▌▙▜▚▌▛▞▞▌▙▚▚▜▐▚▚▚▜▐▐▚▚▙▚▚▚▚▚▚▚▜▐▝▝               \n");
	printf("               ▗▜▐▞▞▞▞▟▐▚▚▚▚▚▚▚▜▐▐▌▌▌▌▌▌▌▌▌▌▌▌▙▜▐▐▐▐▐▟▐▚▚▚▜▞▀                   \n");
	printf("               ▗▌▌▌▛▞▞▞▞▞▞▌▙▚▌▙▚▚▛▞▟▐▞▞▞▞▟▐▞▟▐▐▐▐▐▞▞▌▟▞▟▝▘                      \n");
	printf("                ▚▚▚▚▚▜▐▐▞▞▞▞▞▞▞▟▜▐▞▞▞▞▞▌▛▞▞▞▞▞▞▞▞▌▌▌▙▚▘                         \n");
	printf("                ▐▙▜▐▚▚▚▚▚▜▐▞▞▟▟▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▚▚▚▚▚▚▚                          \n");
	printf("               ▗▌▌▛▟▟▞▙▚▙▙▙▙▜▚▚▚▚▚▚▌▛▞▌▙▚▚▌▛▞▞▞▞▞▟▐▚▚▌                          \n");
	printf("               ▞▞▞▟▐▗▜▐▚▚▞▄▐▐▐▐▐▞▌▌▌▌▌▌▌▌▌▌▌▙▜▐▐▚▚▚▚▚▘                          \n");
	printf("               ▌▙▀▞▞▞▞▞▞▞▞▞▞▞▌▙▚▚▚▚▚▚▜▐▐▞▌▌▛▄▚▚▚▚▚▚▌▛▘                          \n");
	printf("               ▙▚▜▐▐▞▌▌▙▚▚▚▚▌▌▌▌▌▙▚▜▐▐▐▚▞▞▞▞▞▞▞▌▙▜▐▐▞                           \n");
	printf("            ▞▞▛▞▞▞▞▞▞▞▞▞▞▞▌▌▌▌▌▙▀▞▞▞▞▌▌▌▌▌▛▞▞▞▞▞▞▞▞▟                            \n");
	printf("           ▐▞▞▟▜▐▞▟▐▞▞▟▐▞▞▞▞▟▐▚▚▜▐▐▞▞▞▞▞▞▞▞▞▞▌▛▞▞▞▟                             \n");
	printf("            ▚▜▐▚▚▚▚▚▚▜▐▐▐▐▚▜▐▐▐▐▐▐▐▐▞▌▛▞▌▛▞▌▌▌▌▙▜▐▞                             \n");
	printf("             ▝▀▚▌▙▚▚▚▚▚▚▚▚▚▚▚▚▚▌▙▚▚▚▚▚▚▚▚▚▚▚▜▐▞▞▞▞                              \n");
	printf("               ▐▐▐▐▞▌▌▙▚▜▐▚▚▚▌▌▌▌▌▛▞▞▞▞▟▐▞▞▌▌▌▌▙▜                               \n");
	printf("                ▙▚▚▚▚▚▚▚▚▚▚▚▌▌▙▚▚▚▚▚▜▐▞▞▞▞▞▞▞▞▟▞▌▙                              \n");
	printf("                ▟▞▌▌▌▙▚▚▌▙▜▐▐▐▐▐▚▜▐▚▚▚▚▚▚▚▜▐▞▛▌▌▌▌▛▖                            \n");
	printf("               ▟▐▐▐▐▞▞▞▌▌▌▌▌▌▙▚▚▚▚▚▚▚▚▚▌▛▞▞▟▞▌▙▜▐▐▞▀▌                           \n");
	printf("              ▞▞▞▞▞▌▌▌▌▌▌▌▌▙▀▞▞▌▌▙▚▌▛▞▌▌▙▜▜▐▐▐▐▐▐▚▞▜▐                           \n");
	printf("             ▞▞▌▛▞▞▞▞▟▐▞▟▐▞▞▟▐▐▐▞▞▞▞▞▟▟▞▙▚▚▚▌▙▚▚▚▚▚▚▀▌                          \n");
	printf("            ▞▟▐▐▐▐▞▞▞▞▞▞▞▞▞▟▟▞▌▌▌▀▝▀▜▐▗▚▚▚▜▐▐▐▐▚▚▚▚▜▐▚                          \n");
	printf("           ▞▞▞▞▌▙▚▚▜▐▞▞▞▞▞▟▐         ▝▌▙▚▚▚▚▚▚▚▚▚▜▐▞▞▌                          \n");
	printf("          ▞▞▟▐▞▞▞▞▞▞▞▞▞▌▛▟▝           ▜▐▐▚▜▐▚▚▌▙▜▐▐▐▞                           \n");
	printf("        ▗▐▐▐▐▐▐▐▐▞▞▌▌▙▚▚▜▞▞▄▚▄▚▞▞▞▞▞▞▟▟▐▐▐▐▐▐▐▐▐▐▐▞▟▞▄▄▄▄▄▄▄▗▖▖▖▗               \n");
	printf("     ▗▗▞▌▙▚▜▐▐▐▞▚▚▚▚▜▐▐▛▌▙▜▐▞▞▞▟▐▚▜▞▜▐▞▞▌▙▚▚▌▙▚▚▚▌▙▜▟▐▐▖▙▐▄▞▌▙▜▐▚▜▀▛▞▌▙▄▄▗▗     \n");
	printf("   ▞▜▞▌▙▜▞▌▌█▐▚▚▚▚▌▙▚▛▙▚▜▐▞▌▙▜▞▞▌▛▞▞▙▀▛▟▟▟▟▚▙▙▙█▟▜▞▛▞▞▌▛▞▞▄▚▌▌▙▚▜▐▚▌▛▟▐▖▙▜▐▞▌   \n");
	printf("    ▘▘▀▞▀▛▞▙▜▟▟▞▙▙▙▜▚▌▙▜▐▚▚▚▚▚▚▜▐▞▙▜▐▚▜▐▖▙▐▚▚▞▄▚▞▌▙▜▞▙▜▐▞▜▐▚▚▜▐▚▜▐▚▚▜▐▐▐▝▞▘▘    \n");
	printf("            ▘ ▘▀▝ ▘▚▘▀▞▞▚▚▀▌▛▞▙▜▐▞▞▞▟▐▚▚▜▐▞▌▙▚▚▌▌▛▞▞▞▞▞▚▀▞▚▘▀▝▘▘▘▘▘▘           \n");

                                                                      
	printf("            ▞▜▐▀▖                                                   \n");  
	printf("            ▛▟▞▛▞▛▀▛▀▛▀▛▚▚▄▖▖                                       \n");  
	printf("           ▄▜▗▚▚▚▚▜▐▚▚▜▐▚▚▚▚▚▙▄  \n");
	printf("         ▞▞▞▞▞▌▙▜▐▞▞▞▌▙▚▚▌▌▙▚▄▚▜▄                                   \n");  
	printf("       ▗▜▐▞▟▐▞▞▞▞▞▞▟▐▐▐▐▚▚▜▐▐▖▌▙▐▐                                  \n");  
	printf("      ▐▞▞▞▞▞▞▞▟▐▞▞▞▞▞▌▙▚▚▚▚▚▚▚▜▐▐▐▜▖                                \n");  
	printf("     ▐▚▚▜▐▞▟▐▞▞▞▞▞▌▛▞▞▞▞▞▌▙▚▌▙▚▚▚▌▌▀▌             ▌▌▙▖    \n");
	printf("     ▌▌▌▌▌▌▌▌▌▙▚▜▐▐▐▐▞▟▐▚▚▚▚▚▚▚▚▌▌▛▌▛▙  ▞▞▄▖▗▖▄▞▞▄▚▙▚▞              \n");  
	printf("    ▗▚▜▐▞▌▙▚▌▛▞▞▞▞▌▛▞▞▞▞▞▟▐▞▞▟▐▚▚▚▚▚▚▞▚▐▐▞▞▞▌▌▌▌▌▌▙▐▐▞▌▖            \n");  
	printf("    ▞▌▌▌▌▌▌▌▌▌▌▙▜▐▐▐▐▞▞▟▐▐▐▐▞▞▞▞▞▞▌▙▚▚▜▟▚▚▚▚▚▌▙▚▜▐▐▐▚▚▙▜▄           \n");  
	printf("    ▙▚▜▐▞▞▟▐▞▟▐▐▐▐▚▚▌▌▛▞▞▌▙▚▚▚▜▐▞▌▌▌▌▙▌▌▙▜▐▚▚▚▘▚▚▌▙▚▘   ▐▄ \n");
	printf("    ▙▚▚▚▚▜▐▐▐▐▐▞▟▐▐▚▚▚▚▚▚▚▚▚▚▜▐▐▐▐▐▞▟▐▐▐▐▐▐▐▚    ▚▚▚▘▐▌ ▞▞▀▛▞▜▗▖    \n");  
	printf("    ▌▙▜▐▞▞▞▞▞▞▌▌▌▌▙▚▚▌▛▞▌▙▚▌▛▞▞▟▐▞▌▌▌▌▙▜▐▐▞▌▌ ▐▘ ▞▞▌▛▄▗▚███▙▜▐▞▞▄   \n");  
	printf("    ▐▐▐▐▐▐▞▌▛▞▞▞▞▟▐▐▐▐▐▐▐▐▐▐▐▐▞▞▞▞▞▞▞▞▞▞▞▌▌▌▀▙▄▐▚▜▐▐▞▞▞██▛▛▛▞▞▞▞▞   \n");  
	printf("    ▝▞▞▟▐▚▚▚▚▚▜▐▚▚▚▚▌▙▜▐▚▚▌▙▜▐▐▞▞▞▟▐▚▜▐▐▞▞▞▞▚▗▐▐▐▐▞▚▚▚▜▗▚▚▚▚▚▌▙▜▐▘  \n");  
	printf("     ▜▐▐▐▐▐▞▌▙▚▚▚▚▌▌▌▌▌▌▙▚▚▚▚▚▚▚▜▐▐▐▐▐▞▌▌▚▚▞▞▄▘▚▚▚▚▌▙▜▐▐▞▞▌▌▌▌▚▚▘   \n");  
	printf("     ▝▞▌▙▚▚▚▚▚▚▜▐▚▚▜▐▞▟▐▐▐▞▞▞▌▙▚▚▌▙▚▜▐▐▝▞▞▞▞▞▄▀▖▌▌▌▞▖▌▌▌▚▚▘▌▌▞▌▞▞▌  \n");
	printf("     ▗▞▟▐▐▚▚▚▌▙▚▚▚▚▌▌▌▌▙▚▚▚▜▐▐▐▐▚▚▚▚▚▚▚▚▚▜▐▞▞▞▞▘▌▙▚▚▜▐▐▐▚▚▐▞▐▐▞▌▙▜  \n");  
	printf("     ▌▙▚▌▌▙▜▐▐▐▐▚▚▌▛▟▐▞▞▞▌▙▚▚▌▙▚▚▚▚▜▐▐▐▐▚▚▚▚▜▐▝▚▚▚▚▜▐▐▞▞▞▞▖▌▙▚▚▚▚▚  \n");  
	printf("     ▛▞▞▞▟▐▐▐▞▞▞▞▌▌▌▛▞▞▞▞▞▞▞▌▌▌▙▚▜▝▖▌▌▙▚▚▚▌▙▚▘▌▙▚▌▙▚▚▌▌▛▞▌▛▐▐▐▐▞▞▞  \n");  
	printf("     ▐▞▞▟▐▐▐▞▞▞▌▌▌▌▙▚▛▞▞▌▛▞▞▞▞▞▞▞▞▞▌▙▜▐▐▞▌▌▌▌▌▛▞▞▞▞▞▌▌▌▌▌▌▚▚▚▚▚▚▜▐  \n");  
	printf("      ▚▜▐▐▞▌▌▌▙▚▜▐▞▞▟▐▞▌▌▌▙▜▐▞▌▙▜▐▞▞▞▞▞▞▞▞▞▞▄▚▚▚▚▚▌▌▌▌▀▞▞▞▌▌▙▜▐▚▚▜  \n");  
	printf("       ▝▞▞▞▞▟▞▞▞▞▞▞▟   ▝▝▌▌▌▌▌▌▌▌▌▌▙▚▚▚▌▙▚▜▐▝▞▘▌▜▐▐▝ ▐▚▚▚▚▚▚▚▚▚▚▚▜  \n");  
	printf("         ▘▚▚▚▜▞▛▀▘▘       ▝▐▞▞▟▐▞▞▞▞▞▌▌▌▌▌▚▞▌▌▛▞▌▌▘   ▘▛▞▌▙▚▌▙▚▜▐▞  \n");  
	printf("                            ▝▝▞▞▞▞▌▛▞▞▟▐▞▞▌▌▌▘▘▘        ▘▙▚▚▚▚▚▚▌▘  \n");  
	printf("                               ▝▝▘▚▚▚▀▝                    ▘▀▝▘▘    \n");  
     
	printf("                         ▟▀▛▙  ▖▖▖▖▟▀▛▚                          \n");
	printf("                        ▐▚▜▐▗▛▛▞▞▞▞▞▛▀▛▄                         \n");
	printf("                       ▄▀▌▌▌▌▌▌▙▚▚▜▐▐▚▜▐▀▄                       \n");
	printf("                     ▄▜▐▐▞▞▟▐▚▜▐▐▚▚▚▚▚▚▚▜▝▙                      \n");
	printf("                   ▗▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▌▙▜▐▐▐▚▚▙                     \n");
	printf("                  ▗▌▌▙▚▚▌▛▞▟▐▞▞▟▐▞▞▞▞▞▞▌▌▌▙▐▖                    \n");
	printf("                 ▐▚▚▜▐▐▚▚▚▚▚▚▚▜▐▐▐▐▞▞▞▞▞▞▟▐▐▜                    \n");
	printf("                ▐▚▚▌▌▌▌▌▌▙▚▌▙▚▚▚▚▚▚▚▜▐▞▞▌▌▌▌▙▖                   \n");
	printf("               ▗▙▚▚▚▚▌▙▚▚▚▚▚▚▚▚▌▙▜▐▟▞▞▞▞▞▞▟▙▚▚                   \n");
	printf("              ▗▜▐▐▞▞▌▌▌▌▛▞▞▞▞▞▌▌▌▌▌▛▞▞▟▐▚▜▗▜▐▐▞▛▄▖               \n");
	printf("              ▙▚▚▚▚▚▚▚▚▚▚▚▜▐▞▞▞▞▞▟▞▟▐▚▚▚▚▙█▟▙▙▌▙▚▜▚              \n");
	printf("             ▟▐▐▚▚▚▌▙▚▌▛▞▌▌▌▌▛▞▟▐▐▟▞▞▞▞▞▞▞███▛▛▞▞▞▞▙             \n");
	printf("            ▗▌▌▌▌▙▚▚▚▚▚▚▚▚▚▙▜▐▐▐▐▐▗▜▞▞▌▛▞▞▄▐▗▚▚▚▚▚▌▙  ▚ ▖▖       \n");
	printf("            ▙▚▜▐▞▞▞▞▞▞▞▟▐▚▚▞▞▌▙▚▜▐▚▚▛▐▟▟▞▙▚▚▌▙▚▌▛▞▞▞             \n");
	printf("           ▞▌▌▌▌▌▌▛▞▌▛▞▞▞▞▞▞▞▞▞▌▌▌▌▙█▜▄▄▟▜▌▌▌▌▌▌▌▙▜  ▀           \n");
	printf("          ▗▜▐▐▞▞▞▟▐▐▐▐▐▞▞▟▐▞▌▛▞▞▞▟▐▞▝▜▟▟▞▙▜▐▞▜▚▜▐▞               \n");
	printf("          ▟▚▚▚▚▜▐▐▐▞▞▌▌▌▛▞▞▞▞▞▞▞▌▙▜▞▛▄▐▐▜▐▞▞▞▌▙▚▘     ▝▖         \n");
	printf("         ▐▞▞▞▌▌▌▙▚▚▚▚▚▚▚▚▚▌▌▙▚▜▐▞▞▌▟▐▞▌▌▌▌▌▙▚▙▘▚  ▄▄▄ ▘          \n");
	printf("         ▙▚▚▌▌▛▞▞▞▌▌▙▜▐▚▚▌▛▟▞▞▞▞▞▞▞▞▞▞▘▜▛▞▛▄▞   ▛▛▄▚▚▜▚▖         \n");
	printf("        ▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▜▞▟▟▟▙▙▜▄▄ ▀     ▖█▞▞▞▞▞▞▞▙▖        \n");
	printf("        ▛▞▞▟▐▞▌▛▞▌▛▞▞▞▞▞▌▙▜▐▐▚▚▚▚▚▖▌▙▟▟▟▙ ▄▄▐▐▐▞▞▞▞▞▟▐▞▄▌        \n");
	printf("       ▐▚▚▜▐▐▐▐▐▐▐▐▐▚▜▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▄▖▙▞▙▄▐▐▝▄▜▞▀▛▞▞▞▞▄▌        \n");
	printf("       ▛▞▌▌▌▌▌▌▙▚▚▌▌▌▌▌▌▌▌▌▙▜▐▚▚▜▐▐▚▚▞▟▐▐▌▖▌▚▚▚▘▀▙▌▙▚▌▛▞         \n");
	printf("       ▙▚▚▚▌▛▞▟▐▐▚▚▜▐▞▟▐▞▌▛▄▚▚▚▚▚▚▚▚▚▚▚▚▚▚▐▝▖▚▗▘▚▖▚▐▐▝▘          \n");
	printf("      ▐▐▐▚▚▚▚▚▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▙▚▜▐▚▜▐▚▚▌▛▀▞▖▌▚▘▌▚▘▝▐▗▘▌           \n");
	printf("      ▐▚▚▚▚▌▙▚▜▟▐▞▞▟▐▐▐▐▐▐▞▞▞▞▞▞▞▞▞▞▞▞▟▀▞▖▚▐▗▚▐▝▞▝▗▘▌▚           \n");
	printf("      ▞▌▙▜▐▐▐▐▞▞▙▌▛▞▞▌▙▜▐▚▚▚▜▐▐▞▌▛▞▟▞▛▞▌▞▐▝▖▌▘▚▚▐▝▖▌▞▞▖          \n");
	printf("      ▟▐▐▐▐▐▐▐▐▐▗▚▜▟▞▞▞▞▞▞▞▞▞▞▌▌▙▙▀▌▌▌▌▙▚▘▌▚▞▞▞▖▚▗▖▖▚▝▞          \n");
	printf("      ▞▌▌▌▙▜▐▚▚▚▜▐▚▐▐▀▛▟▟▟▞▙▜▞▀▜▄▐▚▚▚▜▐▐▐▝▞▖▞▖▚▐▝▄▝▖▖▌▚          \n");
	printf("      ▜▐▞▌▌▌▌▌▙▚▚▚▚▚▚▜▐▗▄▐▐▐▐▐▜▐▗▌▌▙▚▚▚▚▌▌▚▐▗▚▚▐▐▗▚▚▚▚▚▘         \n");
	printf("      ▜▐▐▐▐▐▐▞▞▞▌▙▜▐▚▚▚▚▚▚▚▌▌▌▌▌▌▌▌▌▙▜▐▚▚▜▐▗▚▞▞▞▞▞▞▖▌▞▝          \n");
	printf("      ▜▐▐▐▞▌▌▌▌▌▌▌▌▌▌▙▜▐▞▌▌▌▛▞▞▞▌▙▜▐▐▐▐▐▐▐▞▞▞▖▌▞▖▙▞▝▝     ▗      \n");
	printf("     ▗▐▚▚▌▌▌▌▙▜▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▙▙▚▙▚▙▚▙▙▛▌▛▜▟▐▞▞▟▖▛▛▌▛▀▛▚▜▚▜▖    \n");
	printf("   ▗▜▚▀▙▚▚▚▚▜▗▚▚▚▜▐▚▜▐▐▐▐▐▞▌▛▞▌▌▞▞▞▞▞▞▄▚▚▚▜▞▞▙▚▜▗▜▚▚▚▀▌▙▜▐▐▚▙    \n");
	printf("   ▜▐▐▚▜▞▞▞▌▌▙▚▌▌▌▌▌▌▌▙▜▐▚▚▚▚▚▚▚▜▐▐▐▐▐▐▐▞▜▞▞▛▟▚▚▚▛▌▙▚▜▐▐▐▐▚▌▙    \n");
	printf("   ▐▚▚▚▚▛▞▌▌▌▌▌▌▙▜▐▐▞▟▐▐▐▐▐▐▐▞▞▌▌▌▙▜▐▚▚▚▜▖▛▟▞▟▌▙▜▞▞▞▞▞▞▞▞▞▙▜▐    \n");
	printf("    ▀▚▚▚▀▌▌▙▜▐▐▞▞▞▞▌▌▌▌▌▌▙▚▚▌▌▌▌▙▀▞▞▞▞▞▌▙▜▞▖▜▐▌▙▌▌▙▚▜▐▞▌▛▞▟▗▚    \n");
	printf("         ▝▟▐▐▐▐▐▐▐▐▐▐▐▐▞▌▌▌▌▌▌▛▞▞▞▞▞▞▟▐▐▐▞▞▝▞▌▛▌▌▌▌▌▌▌▌▌▌▛▟▐▞    \n");
	printf("          ▝▚▌▙▚▚▌▙▚▚▌▙▚▚▚▚▜▐▐▞▞▞▞▞▌▛▞▞▞▌▙▜▞▌▙▜▜▐▐▞▞▟▐▞▞▞▞▟▞▌▌    \n");
	printf("            ▀▟▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▚▚▚▚▚▚▚▚▚▜▟▞▛▌▌▌▌▛▞▞▞▞▞▌▌▙▛     \n");
	printf("              ▝▘▙▙▜▐▞▞▞▌▛▞▌▛▞▞▌▌▌▌▙▚▜▐▚▚▌▛▌▌▙▜▐▐▐▐▐▞▟▞▟▚▌▀       \n");
	printf("                  ▝▝▀▘▌▙▚▙▙▙▙▙▚▜▞▟▞▟▟▟▞▙▙▙▚▀▘                    \n");
	printf("                              ▝ ▝            \n");

	} else if ( (imagen == PANDA) ){

	printf("                                                ▗▄▄▄▄                 \n");
	printf("                                                ▚▞▟█▟▛▌               \n");
	printf("                                 ▗▄▄▖           ▝▞▜▟▙██▖              \n");
	printf("                                ▗█▟▞▀▗▗▗▖        ▚▀▟▙█▟▙              \n");
	printf("                             ▗▖▀  ▗      ▝▘▄      ▌▚█▟▟▜▌             \n");
	printf("                           ▗▝  ▄▀▀ ▀▚  ▗▀▀▀▗▞▄▄▖  ▐▖▙▙▜▙█▖            \n");
	printf("                          ▖▘  ▐▞   ▝▘▌ ▛   ▘▌ ▚▛  ▄▜▙▜▚▙▙█            \n");
	printf("                         ▞    ▝▙    ▟▘ ▀▖   ▛  ▌▗▟▞▙▙▜▜▟▞▟▘           \n");
	printf("                        ▞     ▖▞▀▛▛▀ ▟█▙▖ ▟▀   ▚█▞█▟▞▛▙▙▜▚▌           \n");
	printf("                ▗▄▄▄▄▄▖▗▘   ▐▐▝           ▗   ▄▛▟▞▙▚▛▛▟▞▛█            \n");
	printf("              ▄▜▙▙▙▚▙▙▜▘   ▟▝▖▘   ▗         ▗▟▚▛▙▜▟▜▟▜▚▛▛▖            \n");
	printf("            ▗▟▜▚▙▚▙▛▟▞█  ▖▚▖▘     ▖        ▞▙▜▙▜▟▜▞▙▙▜▙▜▛             \n");
	printf("            ▟▞▛▙▜▙▙▜▚█▟▜▖▞▚              ▗▞█▟▚▙▛▟▙▜▙▜▚▛▌▘             \n");
	printf("           ▐▚▛▛▟▙▚▙▛▛▟▞▚▐▐▞▌            ▄▙▜▟▞█▞▛▙▚▛▟▜▚▛               \n");
	printf("           ▝█▟▜▚▙▛▟▟▜▞▛▙▚▛▞▞▙▄▄▗      ▄▟▞▟▜▟▞▙▜▟▚▛█▞▛▀                \n");
	printf("            ▚▙▛▛▟▟▚▙▛▛▛▟▜▟▙▛▙▜▞▙▛▛▛▛▛█▟▞▟▙▜▟▟▚█▞▛▛▟▞▘                 \n");
	printf("             ▚▛▛▟▞█▟▞▛▟▜▜▟▟▞▛▙▛▙▜▜▜▟▜▟▐▟▙▜▚▙▙▛▟▟▜▀                    \n");
	printf("              ▝▀▙█▞▟▟▜▜▜▛▟▟▟▜▟▞▙▛▙▛▟▚▙█▞▟▜▜▞▟▟▙▜▚▖                    \n");
	printf("                  ▀▘▘█▜▚▛▙▌▙▛▞▛▟▜▟▟▚█▟▞▟▙▜▚▀▘▘▘  ▝▗                   \n");
	printf("                    ▗▛▛▛▟▚▛▙▜▜▜▚▛▟▞█▞▟▞▘▘▘         ▀▖                 \n");
	printf("                    ▗▛▟▜▚█▞▙▛▛▛▙▛▙▜▝▝                ▚                \n");
	printf("                    ▐▜▙▜▜▞▛▟▜▟▜▝▝                 ▗▗▗▗▚               \n");
	printf("                    ▐ ▝▀▘▀▀▝                 ▗▄▞▛█▜▜▜▚▛▌              \n");
	printf("                    ▐                      ▄▟▚▙▜▜▞▙▛▙▛▛█▖             \n");
	printf("                    ▐                    ▄▜▟▞▛▟▜▚▛▙▜▟▟▜▞▌             \n");
	printf("                    ▐                  ▄▛▟▜▟▟▜▚▛█▞▙▛▟▞▙▜▜             \n");
	printf("                     ▌              ▗▄▛▙▜▜▚▙▚▛█▞▙▜▙▜▙▜▜▜▜             \n");
	printf("                     ▚            ▗▞▙▙▜▟▜▚█▞█▞▙▜▟▚▙▛▟▜▜▚▛             \n");
	printf("                     ▝▖        ▗▄▜▜▟▚▙▜▞▛▛▟▟▚█▞█▞█▟▟▚▛▛▛▌             \n");
	printf("                      ▗     ▖▄▜▚▙▛▙▜▚▛▙▛▛▟▙▙▜▟▞▙▜▟▐▞▛▛▛▛              \n");
	printf("                       ▜▙▜▟▜▟▜▜▚▙▜▟▜▜▞▙▜▜▚▙▚█▞▟▜▚▙▛▛▛▟▛               \n");
	printf("                        ▐▛▟▚▙▛▙█▞▛▟▜▚▛▙▛▛▙▙█▟▟▜▜▚▙▜▟▜▌                \n");
	printf("                         ▝▜▜▟▞▙▙▜▜▟▜▚█▟▞█▟▞▟▞▟▚▛▛▟▛▟▜                 \n");
	printf("                           ▀▟▟▚▙▜▙▙▜▜▞▞▛▟▞▟▙▜▟▜▟▜▙▜▙▛                 \n");
	printf("                             ▐▛▟▙▌▙▛▙▛▛█▞▛▙▚█▞▛▟▙▙▜▟                  \n");
	printf("                             ▜▟▚▙▜▚█▟▟▜▟▞▛▟▜▞▛▛▙▚▙▛▟                  \n");
	printf("                             ▟▟▜▞▛▛▟▞▟▚▙▜▜▚▛█▞▛▟▜▟▟▘                  \n");
	printf("                            ▗▟▞▙▛▛▟▙▜▚█▞▛▛▛▛▟▟▜▙▜▟▟                   \n");
	printf("                            ▐▟▟▚▛▛▙▚▛▛▟▟▜▟▛█▟▟▙▙▛▝▘                   \n");
	printf("                               ▀▀▀▝▀▀▀▀▝                              \n");

	} else{

    printf("                                                        ▖                       \n");
    printf("                                           ▝▀  ▖▖▗ ▖▖▖▞  ▝                      \n");
    printf("                                           ▄ ▘           ▐     ▄  ▘▘      ▗▞▄▗  \n");
    printf("                                         ▗▝              ▘▝▖ ▘              ▗ ▘ \n");
    printf("                                       ▗▗                   ▚                ▗▘ \n");
    printf("                                   ▗ ▝  ▘                   ▖▖             ▄▘▘  \n");
    printf("                                ▗ ▘    ▝                     ▝          ▗▖▘     \n");
    printf("                              ▗▝       ▌▗▌     ▗▖            ▚        ▄▝        \n");
    printf("                            ▗▝     ▗ ▀                        ▌     ▖▘          \n");
    printf("                          ▗▝          ▝██▛                   ▖▌  ▗▝             \n");
    printf("                         ▞        ▘                           ▌▗▝               \n");
    printf("                      ▖▗          ▖                          ▝▝                 \n");
    printf("                    ▝ ▗▘          ▗                          ▚                  \n");
    printf("                   ▐ ▗              ▖                        ▝                  \n");
    printf("                    ▄                ▘▗                     ▝▘                  \n");
    printf("                                         ▘                  ▐                   \n");
    printf("                   ▞                                        ▘                   \n");
    printf("                 ▖▘▖                     ▗             ▗▗ ▖▟                    \n");
    printf("               ▖▘                                            ▘▖                 \n");
    printf("             ▗     ▖        ▝             ▘                    ▘                \n");
    printf("            ▖                ▖            ▘                    ▝▖               \n");
    printf("          ▗                  ▗            ▘                     ▌               \n");
    printf("         ▝                    ▖           ▌                    ▗                \n");
    printf("       ▗▝                     ▘           ▖       ▞            ▝                \n");
    printf("      ▖              ▚▗       ▝           ▘     ▖▘▘           ▗▘                \n");
    printf("    ▗▝              ▘  ▜▗▖▖    ▘          ▌  ▗▖▀ ▐           ▗▘                 \n");
    printf("  ▖▝              ▖▚▝▝▘    ▀▝▗▖▙         ▗▚ ▀    ▝          ▗▘                  \n");
    printf(" ▗▗▝           ▄▝▝              ▘        ▐       ▝         ▝▗                   \n");
    printf("  ▝ ▝▖▖▗▗▗▖▖▝▘▘                  ▘       ▘       ▝▗       ▗ ▗▗                  \n");
    printf("                                 ▝      ▐           ▀ ▖▄▗▄▗▖▞▘                  \n");
    printf("                                   ▘▖▚ ▟                                        \n");
    printf("                                      ▘                                         \n");
	}
}

/*
 * Pre: Mensaje sea BIENVENIDA o DESPEDIDA
 * Pos: Imprime un mensaje dependiendo del carácter ingresado.
 */

void mostrar_mensaje (char mensaje){

	if ( (mensaje==BIENVENIDA) ){
		printf("¡BIENVENIDO AL DETECTOR-DE-PERSONALIDAD-ESCANDALOSA-2021 (DDPE-2021)!\n\n");
		printf("¡A través de 4 preguntas, se calculará un puntaje que determinará que oso escandaloso coincide con tu personalidad!\n");
		printf("Para ello ello el test cuenta con dos reglas:\n(1)No mentir\n(2)NO HACER ENOJAR A POLAR\n\n");
	} else {
		printf("¡GRACIAS POR PROBAR EL DETECTOR-DE-PERSONALIDAD-ESCANDALOSA-2021 (DDPE-2021)\n\n");
		printf("--En futuras actualizaciones se implementarán nuevos personajes del universo escandaloso--\n");
		printf("*con voz de locutor* NoNosHacemosResponsablesDePosiblesDañosPsicológicosPorNoConseguirLaPersonalidadDeseada.");
	}

}

/*
 * Pre: -
 * Pos: La variable asociada se modificará a ANIME, MUSICA_POP o LIMPIEZA.
 */

void preguntar_canal_tv (char* canal_tv){

	printf("Vas a ver televisión un rato, pones el canal de Anime (%c), Musica Pop (%c) o Limpieza (%c): ", ANIME, MUSICA_POP, LIMPIEZA);
	scanf(" %c", canal_tv);
	
	while (!es_canal_valido(*canal_tv)){
		printf("ERROR!!! Polar está furioso, ingresa un canal válido o Polar no se calmará: ");
		scanf(" %c", canal_tv);
	}
}

/*
 * Pre: -
 * Pos: Devuelve True si el canal_tv es ANIME, MUSICA_POP o LIMPIEZA. 
 * 		Devuelve False en caso contrario.
 */

bool es_canal_valido (char canal_tv){
	return ( (canal_tv == ANIME) || (canal_tv == MUSICA_POP) || (canal_tv == LIMPIEZA) );
}

/*
 * Pre: -
 * Pos: Modifica la variable por FOCAS, BAMBU o PESCADO
 */

void preguntar_alimento (char* alimento){

	printf("\n\nSolo podes guardar un alimento en tu vianda: Bambú (%c), Pescado (%c), Focas (%c): ", BAMBU, PESCADO, FOCAS);
	scanf(" %c", alimento);
	
	while (!es_alimento_valido(*alimento)){
		printf("ERROR!!! Polar está furioso! Ingresa un alimento válido o Polar no se calmará: ");
		scanf(" %c", alimento);
	}
}

/*
 * Pre: -
 * Pos: Devuelve True si el alimento es BAMBU, PESCADO o FOCAS. 
 * 		Devuelve False en caso contrario.
 */

bool es_alimento_valido (char alimento){
	return ( (alimento == BAMBU) || (alimento == PESCADO) || (alimento == FOCAS) );
}

/*
 * Pre: - 
 * Pos: Modifica variable asociada por un valor entre PISO_MAS_BAJO y PISO_MAS_ALTO.
 */

void preguntar_piso_torre (int* piso_torre){

	printf ("\n\nTe compras una torre con tus dos hermanos de %i pisos. ¿En que piso te gustaría vivir? ", PISO_MAS_ALTO);
	scanf(" %i", piso_torre);
	
	while (!es_piso_torre_valido(*piso_torre)){
		printf("ERROR!!! Polar está furioso! Ingresa un piso válido (%i a %i) o Polar no se calmará: ", PISO_MAS_BAJO, PISO_MAS_ALTO);
		scanf(" %i", piso_torre);
	}

}

/*
 * Pre: -
 * Pos: Devuelve True si piso_torre está entre PISO_MAS_BAJO y PISO_MAS_ALTO.
 * 		Devuelve False en caso contrario.
 */

bool es_piso_torre_valido (int piso_torre){
	return ( (piso_torre>=PISO_MAS_BAJO) && (piso_torre<=PISO_MAS_ALTO) );
}

/*
 * Pre: -
 * Pos: La variable asociada tendrá un valor entre GRITO_MINIMO y GRITO_MAXIMO.
 */

void preguntar_fuerza_grito (int* fuerza_grito){

	printf("\n\n¡Oh, una rata! ¿Qué tan fuerte gritas del %i al %i? Siendo 1 no gritar y 18 desgarrarse la garganta: ", GRITO_MINIMO, GRITO_MAXIMO);
	scanf(" %i", fuerza_grito);

	while (!es_fuerza_grito_valida(*fuerza_grito)){
		printf("ERROR!!! Ningún escandaloso puede descifrar lo que hiciste, el grito debe ser entre %i a %i: ", GRITO_MINIMO, GRITO_MAXIMO);
		scanf(" %i", fuerza_grito);
	}
}

/*
 * Pre: -
 * Pos: Devuelve True si fuerza_grito está entre GRITO_MINIMO y GRITO_MAXIMO.
 * 		Devuelve False en caso contrario.
 */

bool es_fuerza_grito_valida (int fuerza_grito){
	return (fuerza_grito>=GRITO_MINIMO && fuerza_grito<=GRITO_MAXIMO);
}

/*
 * Pre: El canal_elegido sea LIMPIEZA, ANIME o MUSICA_POP
 * Pos: Devuelve un entero asociado al multiplicador del canal_elegido
 */

int obtener_multiplicador_canal_tv (char canal_elegido){

	int multiplicador_canal = 0;

	if ( (canal_elegido==LIMPIEZA) ){
		multiplicador_canal=MULTIPLICADOR_LIMPIEZA;
	} 
	else if ( (canal_elegido==ANIME) ){
		multiplicador_canal=MULTIPLICADOR_ANIME;
	}
	else if ( (canal_elegido==MUSICA_POP) ){
		multiplicador_canal=MULTIPLICADOR_MUSICA_POP;
	}

	return multiplicador_canal;
}

/*
 * Pre: El alimento sea FOCAS, BAMBU o PESCADO
 * Pos: Devuelve el puntaje correspondiente a cada alimento
 */

int obtener_puntaje_alimento (char alimento){
	
	int puntaje_alimento = 0;

	if ( (alimento==FOCAS) ){
		puntaje_alimento=PUNTAJE_FOCAS;
	} else if ( (alimento==BAMBU) ){
		puntaje_alimento=PUNTAJE_BAMBU;
	} else {
		puntaje_alimento=PUNTAJE_PESCADO;
	}

	return puntaje_alimento;

}

/*
 * Pre: El piso_torre esté entre PISO_MAS_BAJO y PISO_MAS_ALTO .
 *		La fuerza_grito esté entre GRITO_MINIMO y GRITO_MAXIMO.
 *		El multiplicador de canal sea MULTIPLICADOR_LIMPIEZA, MULTIPLICADOR_MUSICA_POP o MULTIPLICADOR_ANIME.
 *		El puntaje_alimento sea PUNTAJE_FOCAS, PUNTAJE_BAMBU o PUNTAJE_PESCADO.
 * Pos:	Devuelve un puntaje entre PUNTAJE_MINIMO y PUNTAJE_MAXIMO.
 */

int calcular_puntaje_total (int piso_torre, int fuerza_grito, int multiplicador_canal_tv, int puntaje_alimento){

	int puntaje_total = (puntaje_alimento * multiplicador_canal_tv) + piso_torre + fuerza_grito;

	return puntaje_total;

}

/*
 * Pre: El piso_torre esté entre PISO_MAS_BAJO y PISO_MAS_ALTO .
 *		La fuerza_grito esté entre GRITO_MINIMO y GRITO_MAXIMO.
 *		El canal sea ANIME, LIMPIEZA o MUSICA_POP.
 *		El alimento sea BAMBU, FOCAS o PESCADO.
 * Pos: Imprime por pantalla el personaje coincidente con el usuario.
 */

void mostrar_personalidad_escandalosa (int piso_torre, int fuerza_grito, char canal, char alimento) {

	int multiplicador_canal_tv = obtener_multiplicador_canal_tv(canal);
	int puntaje_alimento = obtener_puntaje_alimento(alimento);
	int puntaje_total = calcular_puntaje_total (piso_torre,fuerza_grito,multiplicador_canal_tv,puntaje_alimento);

	printf("\n ---------- Después de un arduo análisis con un puntaje de %i , se determinó que la personalidad más adecuada para definirte es ------------ \n\n", puntaje_total);

	if ( (puntaje_total >= PUNTAJE_MINIMO_POLAR ) && (puntaje_total <= PUNTAJE_MAXIMO_POLAR) ){

		mostrar_imagen(POLAR);
		printf("- Polar -Alonzo Corazón de tigre- (I) - \n\nSos el menor de los tres hermanos, casi siempre estás en tu mundo y no decís una palabra. Pero aunque seas un oso de pocas palabras, no hay que subestimarte. Posees un montón de talentos ocultos y sueles hacer todo el trabajo sucio de los osos. Te dan miedo los pepinos.\n\n");
		
	} else if ( (puntaje_total >= PUNTAJE_MINIMO_PANDA ) && (puntaje_total <= PUNTAJE_MAXIMO_PANDA ) ){

		mostrar_imagen(PANDA);
		printf (" - Panda (P) - \n\nSos el hermano del medio y no te parecés en nada a tus hermanos. A ellos les gusta bailar, vos te quedas contra la pared. Ellos comen carne, vos sos vegetariano. Participas voluntariamente en casi todas las ideas de Pardo, aunque seas un poco más inteligente. Y como dice Pardo, sos el vínculo que une a tus hermanos.\n\n");

	} else {

		mostrar_imagen(PARDO);
		printf(" - Pardo (G) - \n\nSos el mayor de los hermanos, un líder carismático, alegre y muy motivado. A lo mejor comiste pintura siendo osezno, nadie lo sabe. Te encanta divertirte y no tomarte nunca la vida demasiado en serio.\n\n");
	}

}