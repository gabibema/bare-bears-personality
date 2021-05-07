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

/*
 * Pre: Imagen sea BIENVENIDA, POLAR, PARDO o PANDA.
 * Pos: Imprime una imagen dependiendo del carácter ingresado.
 */

void mostrar_imagen(char imagen){

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

    printf("                                                            ▄▞▄                \n");
    printf("                                          ▄▄     ▗▗▄▄▄▄▄▄▄▄▟▚▞▞▜                \n");
    printf("                                        ▐▀▄▐▞▙▖▛▜▐▐▗▄▄▄▄▄▄▐▐▐▀▜▟▘               \n");
    printf("                                        ▙▜▐▐▐▐▐▐▐▐▐▐▄▙▚▖▌▞▞▞▞▞▛▜▜▚▖             \n");
    printf("                                        ▝▞▞▞▞▞▌▌▙▚▚▜▐▗▚▚▚▚▚▚▚▚▚▚▚▚▀▙▖           \n");
    printf("                                       ▗▀▛▞▞▞▞▞▞▞▞▞▞▞▟▟▟▟▐▞▞▞▞▞▌▘▘▝▘▙▖          \n");
    printf("                                      ▗▚▜▐▐▐▞▞▞▞▞▞▞▟▀    ▘▚▜▐▞▜  ▄▄ ▝▙          \n");
    printf("                                     ▗▜▐▐▐▐▐▐▐▞▞▟▐▞▌   ▗▄ ▝▚▚▞▙  ▝▘ ▐▞▙          \n");
    printf("                                     ▙▚▚▚▚▚▚▚▚▚▀▞▞▟     ▀  ▞▌▌▌▙   ▗▞▞▞▄▖       \n");
    printf("                                    ▟▐▐▐▐▞▚▚▚▚▚▜▐▐▐▖       ▟▐▐▐▐▀▜▜▙███▙▙▀▙▄    \n");
    printf("                                   ▞▌▌▌▙▚▚▚▜▐▚▚▚▚▚▚▚▄    ▗▞▌▌▙▚▚▜▐█████▛▌▛▄▐▚   \n");
    printf("                                  ▞▌▌▌▛▄▚▚▚▚▚▚▚▚▚▚▚▚▚▀▛▀▛▚▚▚▚▚▚▚▚▚▐▀▌▙▚▚▚▚▞▞▞▌  \n");
    printf("                                 ▞▌▌▙▚▚▚▚▚▚▌▌▌▌▙▚▚▌▌▙▜▞▙▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜  \n");
    printf("                               ▗▞▌▌▌▌▌▌▌▌▙▚▚▚▚▜▐▐▐▐▟▜▌  ▝▀▚▌▙▚▚▚▌▙▚▚▚▚▚▚▚▚▚▚▚▛  \n");
    printf("                              ▗▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▛▙▛▙▄▄▄  ▝▝▟▚▚▚▚▚▚▌▙▚▚▚▚▚▚▚▌  \n");
    printf("                            ▗▞▌▙▚▚▚▜▐▐▚▚▚▚▚▚▚▌▌▌▌▙▛▙▜▟▟▟▞▙▚▛▙▄▞▛▛█▞▞▞▞▞▞▌▙▜▐▚   \n");
    printf("                          ▗▞▚▚▚▚▚▚▌▌▌▌▌▌▙▚▚▚▚▚▚▚▜▗▛▙█▟▟▟▟▜▚█▟▞▛▛█▟▚▚▚▚▚▚▚▚▚▚▘   \n");
    printf("                        ▗▞▌▞▌▌▌▌▌▌▌▌▙▚▚▜▐▐▐▚▚▚▚▌▌▌▛▌▀▞▟▟▞▛▛▟▟▟▜▜▟▞▌▌▌▌▌▌▌▌▙▘    \n");
    printf("                     ▗▄▀▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▌▙▚▚▚▚▚▜▙▝▖▝▜▜▟▙▚▙▛▙▌▌▌▌▙▀▞▟▐▞      \n");
    printf("                  ▗▄▀▌▞▞▞▞▞▞▞▞▞▟▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▜▞▙▙█▟▟█▞▛▚▚▚▚▚▚▜▐▞▘       \n");
    printf("               ▗▄▀▙▐▐▐▐▞▞▞▞▞▟▐▞▞▞▞▞▌▙▜▐▐▞▞▟▐▚▚▚▚▜▐▐▞▞▚▞▞▖▌▌▞▖▌▌▌▌▙▚▚▚▚▌▘        \n");
    printf("            ▗▄▜▚▚▀▄▚▚▚▚▚▚▜▐▞▞▞▞▞▞▞▞▟▞▞▞▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▐▐▐▐▐▐▐▐▐▞▞▞▞▞▛▌▌         \n");
    printf("           ▟▐▗▚▚▚▜▐▐▐▚▚▚▚▚▚▚▚▚▚▚▚▙▛▞▞▞▞▌▌▌▌▌▌▙▛▛▜▀▛▙▙▌▌▌▌▌▙▚▚▙▚▚▚▚▚▚▚▚▜▖        \n");
    printf("   ▗▄▄▄  ▗▜▐▐▐▐▐▐▐▐▐▐▐▐▞▚▚▚▚▚▚▚▚▙▚▚▚▚▚▚▚▚▚▚▜▞▌▌▌▌▙▙▚▚▜▟▐▞▞▟▞▛▞▛▛▜▚▙▚▚▚▚▜        \n");
    printf("  ▞▌▌▄▐▚▞▌▌▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▙▌▌▌▌▌▙▚▚▚▚▛▌▌▌▌▌▌▌▌▌▙▜▐▌▌▛▌▛▟▞▞▜▞▞▞▙▌▙▚▚▙       \n");
    printf("  ▙▚▚▚▚▛▌▌▙▚▚▜▗▚▚▚▚▚▚▌▌▌▙▜▐▚▚▜▐▞▞▞▞▞▞▞▞▞▙▜▐▐▐▐▐▐▐▐▐▐▞▌▌█▐▜▐▐▞▟▐▚▚▚▜▝▙▚▚▚▞▖      \n");
    printf("  ▚▌▌▙▜▞▞▞▞▞▞▞▞▌▛▞▌▙▚▚▚▜▗▚▚▚▚▚▜▞▞▟▐▚▚▚▚▚▌▌▌▌▙▚▚▌▙▚▚▚▚▚▚▜▞▙▚▚▚▚▚▚▚▚▚▜▐▌▌▌▙▌      \n");
    printf("   ▀▟▟▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▐▐▐▐▐▚▚▚▚▜▐▐▐▐▚▚▚▚▚▚▚▚▚█▐▌▌▌▌▌▌▌▌▙▚▚▚▜▞▞▄▜      \n");
    printf("     ▞▞▞▞▞▞▞▌▌▙▚▚▚▚▚▚▚▚▚▚▌▙▚▚▌█▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▐▐▞▌▛▞▞▞▞▟▐▞▞▞▞▞▞▟▐▐▐▖     \n");
    printf("    ▐▚▚▚▚▜▐▐▐▐▐▐▐▐▐▐▐▐▚▚▚▚▚▚▚▚▜▐▐▞▞▞▞▞▞▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▛▞▛▞▞▞▌▌▌▌▌▌▌▙▀▞▞▞▟▖     \n");
    printf("    ▐▚▚▚▌▌▌▙▚▚▚▚▚▚▌▙▚▚▚▚▚▚▚▚▚▚▜▚▚▚▚▜▐▐▞▞▞▞▞▞▌▌▙▚▚▚▌▙▚▀▛▞▞█▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▖     \n");
    printf("    ▜▐▐▚▚▚▚▚▚▚▌▙▜▐▐▐▐▐▞▞▌▌▌▙▚▚▀█▐▐▐▐▐▐▐▐▐▞▞▞▞▞▞▞▞▌▌▌▌█▚▚▚▞▌▌▌▌▌▌▌▌▙▚▚▚▚▚▚▜▖     \n");
    printf("    ▜▐▐▐▐▐▐▐▐▐▐▖▌▌▌▌▌▌▌▌▌▌▛▄▚▚▜▐▚▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▛▞▞▞▌▙▜▞▞▟▐▞▞▞▞▞▞▌▙▜▐▞      \n");
    printf("    ▜▐▐▐▐▐▞▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▟▞▞▞▞▞▞▞▞▞▌▌▙▚▚▚▛▌▌▙▚▚▚▞▞▙▚▚▚▚▚▜▐▐▐▐▖▌▌▛      \n");
    printf("    ▐▚▚▚▚▚▚▚▌▙▚▚▚▚▚▚▌▙▚▚▚▌▌▌▌▙▚▚▚▌▌▛▙▙▙▜▐▞▞▞▟▐▟▞▛▌▌▌▌▌▌▌▌▌▛▘▙▚▚▚▚▚▚▚▚▚▚▚▛       \n");
    printf("     ▙▚▜▐▐▐▐▐▐▐▐▐▞▌▌▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▖▌▞▌▛▀▛▜▚▚▚▚▚▚▚▚▚▚▚▚▚▚▛ ▝▚▌▌▙▚▚▚▌▌▙▀        \n");
    printf("     ▝▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▌▌▌▙▚▚▚▚▚▚▚▚▚▜▐▐▐▐▐▐▐▐▐▚▚▌▙▜▐▚    ▝▀▞▟▞▌▌▀          \n");
    printf("      ▜▐▐▐▐▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▐▐▞▞▞▞▞▞▞▞▞▞▞▞▌▌▌▙▚▚▚▚▚▚▚▘                      \n");
    printf("       ▜▐▐▐▐▐▐▐▚▚▚▚▚▚▌▙▚▚▚▜▐▐▐▐▐▐▐▐▐▐▞▌▛▞▞▟▐▞▞▞▞▞▞▞▞▞▞▞▞▘                       \n");
    printf("        ▜▞▞▌▌▌▌▌▙▜▐▚▚▚▚▚▚▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▚▜▐▐▐▐▐▞▞▞▞▞▞▟▀                         \n");
    printf("         ▜▐▐▐▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▌▌▌▌▌▌▌▌▌▌▌▌▌▛▞▟▀                           \n");
    printf("          ▜▐▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▞▌▛▞▞▞▞▞▞▞▞▞▞▞▞▞▟▞▀                             \n");
    printf("           ▙▚▚▚▚▚▚▚▚▚▚▌▙▚▚▌▛▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▟▟▟▀▛▙▖                              \n");
    printf("           ▟▐▐▐▐▞▚▚▚▌▌▌▌▌▌▌▌▌▙▚▚▜▞▞▞▞▟▟▟▙▜▀▌▞▄▜▐▗▚▖                             \n");
    printf("           ▐▞▞▞▞▞▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▀▛▀▛▜▚▐▗▞▞▞▞▞▞▞▞▞▞▄                             \n");
    printf("           ▐▞▞▟▐▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▀▛▌▌▌▌▌▌▌▌▛▞▞▞▞▞▞▞▟▖                            \n");
    printf("           ▐▐▐▐▐▐▐▐▚▚▚▜▐▚▚▜▐▚▚▚▌▛▙▚▚▚▚▚▚▚▚▚▚▜▐▐▐▐▞▞▄                            \n");
    printf("           ▗▌▌▌▌▌▌▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▜▞▞▞▌▌▙▚▚▚▚▚▚▚▚▚▚▚▌                            \n");
    printf("           ▗▌▛▞▞▟▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▙▚▚▚▚▚▚▚▜▐▚▚▚▚▜▐▐▐▞                            \n");
    printf("           ▗▌▌▌▛▞▞▞▞▞▞▞▞▞▟▐▞▞▞▌▌▛▌▙▚▚▚▚▚▚▚▚▚▚▚▌▌▌▌▙▘                            \n");
    printf("           ▐▐▐▐▐▐▐▐▐▞▌▌▛▞▞▞▞▞▞▞▞▞ ▚▌▛▞▌▌▙▚▚▚▚▚▚▚▚▜▐▖                            \n");
    printf("           ▐▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▚▜▐▞▘ ▝▟▐▐▐▐▐▐▐▞▞▌▌▌▙▚▚▚                            \n");
    printf("           ▐▚▚▚▌▌▌▌▌▌▌▌▌▌▌▌▙▚▚▚▜  ▝▞▞▞▞▞▞▞▞▞▞▞▟▐▐▙▚▛                            \n");
    printf("            ▀▚▌▌▌▛▞▞▞▞▞▞▟▐▀▟▐▀▙▚▜  ▀▟▟▐▞▞▞▞▞▞▞▜▟▟▝▘                             \n");
    printf("              ▝▀▐▟▐▞▞▟▐▚▚▚▀▟▚▚▜▞▛      ▀▀▀▀▀▀▀▘                                 \n");
    printf("                  ▝▀▀▝▝▞▐▝▘▘▀▀▘                                                 \n");
    printf("                                                                                \n");            
                                                                    
	printf("                               ▗▖▄▄        ▗▄▖▄                                 ");
	printf("                              ▐▜▐▖▌▙▄▄▄▄▄▄▄▙▙▌▙▜                                ");
	printf("                              ▜▞▞▞▞▞▞▞▞▄▐▗▄▚▞▞▞▛▙▖                              ");
	printf("                            ▗▞▛▙▚▚▜▐▞▞▞▞▞▌▞▞▞▞▟▐▐▐▚▖                            ");
	printf("                          ▗▞▌▌▙▐▐▚▚▚▚▜▐▐▞▞▟▐▐▞▞▞▞▞▌▛▖                           ");
	printf("                         ▄▌▌▌▌▌▌▌▌▙▚▚▚▚▚▚▜▐▐▚▚▚▚▜▐▐▐▜▖                          ");
	printf("                       ▗▞▌▌▙▜▐▐▞▟▐▐▐▚▚▜▐▞▞▞▞▞▞▞▌▌▌▙▚▚▜▖                         ");
	printf("                      ▗▛▞▞▞▞▞▞▞▞▞▞▟▐▐▞▞▞▞▞▞▟▐▞▞▞▟▐▐▐▞▌▙                         ");
	printf("                     ▐▚▚▚▜▐▐▐▞▟▐▞▞▞▞▞▞▞▟▐▞▌▌▌▌▛▞▞▞▞▌▞▞▟▖                        ");
	printf("                    ▗▛▞▌▙▚▚▜▐▐▐▐▐▐▞▟▐▞▟▐▐▐▐▐▐▐▐▐▞▞▌▌▛▞▞▌                        ");
	printf("                   ▗▛▞▞▞▞▞▌▌▌▌▌▌▙▚▚▚▚▚▚▚▚▚▚▚▜▐▚▚▚▚▚▚▚▙▚▙                        ");
	printf("                  ▗▛▞▞▞▟▐▐▐▐▞▌▛▞▞▞▞▞▞▞▞▞▌▙▀█▙▚▚▚▚▌▛▞▜▛▌▞▌▄▄                     ");
	printf("                  ▙▚▚▚▜▐▐▞▌▌▌▌▌▌▙▚▜▐▚▜▐▞▞▞▟▐▐▐▞▌▌▌▌▛▄▚▜▐▐▐▐▀▙▖                  ");
	printf("                 ▟▚▚▚▜▐▐▐▐▐▐▐▐▞▞▞▞▞▞▞▞▞▞▞▟▐▐▞▚▞▞▞▟▐▟▟██▙▙▌▌▛▄▀▌                 ");
	printf("                ▐▚▚▚▜▐▐▐▞▞▞▞▌▌▌▛▞▟▐▞▟▐▞▞▟▐▜▌▞▌▌▙▜▐▐▜█████▜▐▐▐▐▀▌                ");
	printf("               ▗▛▞▞▌▌▌▙▚▚▚▜▐▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▟▌▌▌▌▌▌▌▌▌▌▌▞▞▞▞▞▞▞▌█  ▗▗            ");
	printf("               ▟▐▐▞▞▞▟▐▐▐▚▚▚▚▚▜▐▞▞▙▞▌▌▙▜▐▞▞▞▛▞▟▐▐▐▞▟▐▐▐▚▚▚▚▜▐▞▞▟  ▝▝ ▝▘         ");
	printf("              ▐▚▚▌▌▙▜▐▐▐▞▞▞▌▙▚▚▚▚▚▚▚▚▜▖▌▌▌▛▞▟▝▛▀▀▘▙▙▚▌▙▚▚▛▟▐▐▐▐▘  ▖             ");
	printf("             ▗▛▞▌▌▌▌▌▌▌▌▌▙▚▚▚▚▚▌▙▚▚▚▌▙▜▐▐▞▞▞▟▜▜▄▄▛▙▛▌▌▌▌▌▛▞▞▟▐▀  ▀▘             ");
	printf("             ▟▐▞▞▞▞▞▞▞▟▐▞▞▞▟▐▞▌▌▌▌▛▞▞▞▞▞▌▌▌▛▚▀▜▙▙▛▙▛▌▌▌▛▛▞▞▞▟▘                  ");
	printf("            ▗▌▌▌▌▛▞▞▌▛▞▞▞▞▞▞▞▞▞▞▞▞▞▞▟▐▞▞▞▟▟▜▚▙▙▚▙▛▌▌▌▛▞▞▞▞▞▛▘      ▖▖           ");
	printf("            ▟▞▞▟▐▐▐▞▞▞▞▞▞▞▌▙▚▚▚▚▜▐▞▌▌▌▌▛▞▌▌▌▙▐▗▌▌▌▙▜▐▐▐▞▟▀▛       ▝▖▘           ");
	printf("           ▐▚▚▜▐▐▚▚▚▚▌▙▜▐▞▞▞▞▞▌▛▟▐▐▐▐▐▞▞▞▟▐▐▐▐▚▙▙▜▐▐▐▞▀▟▘ ▝▖▗▄▐▐▚▄▖             ");
	printf("           ▛▞▞▞▞▞▞▞▞▌▌▌▌▌▌▌▙▜▐▐▞▞▛▟▞▌▌▌▙▜▐▐▚▚▛▘▀▗▟▄▟▘▜▀  ▖▗▟▚▚▚▚▌▌▛▙▖           ");
	printf("          ▐▜▐▚▚▌▛▞▞▌▌▌▌▌▌▙▀▄▚▚▚▚▚▚▚▚▜▞▟▟▟▟▟▟▞▙▄▖ ▀     ▖▘ ▟▞▞▟▐▚▚▚▚▚▚▖          ");
	printf("          █▐▞▞▞▞▞▞▞▞▞▞▟▐▞▞▞▞▞▞▌▌▙▜▐▐▚▚▚▚▚▚▚▚▚▚▚▜▜▄ ▖▗ ▌▖▖▜▚▜▐▐▐▐▐▐▞▞▌▙          ");
	printf("         ▐▌▌▌▙▜▐▐▞▌▛▞▌▌▌▌▌▛▞▟▐▐▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▛▞▞▞▙▐▐▐▐▐▐▐▙▜▜▐▞▞▞▌▌▌▌▙          ");
	printf("         ▛▞▞▞▞▞▞▞▞▞▞▞▞▞▞▞▟▐▐▐▐▚▚▚▚▜▐▞▞▌▛▞▞▌▛▞▌▌▙▛▛▟▞▞▚▘▌▌▌▙▌▌▌▙▜▐▐▐▐▟▘          ");
	printf("        ▗▛▞▌▛▞▞▞▟▐▐▞▞▟▐▚▜▐▐▚▚▚▚▚▚▌▌▌▌▌▌▌▛▞▞▞▞▞▞▌▌▌█▝▞▖▌▚▚▝▗▝▜▟▟▞▞▟▐▚▘           ");
	printf("        ▐▚▚▚▚▚▜▐▐▐▚▚▜▐▐▐▐▐▐▐▐▚▚▚▌▌▛▞▞▞▌▌▌▌▙▜▐▐▞▞▞▞▟▝▖▚▐▗▘▌▚▝▖▄▗▐▐▞▀             ");
	printf("        ▟▚▚▜▐▞▞▞▟▐▐▐▐▐▐▞▞▟▐▞▌▌▙▚▚▚▚▚▜▐▐▞▞▌▌▌▌▌▌▛▞▟▘▌▚▘▚▐▝▞▖▖▞ ▌▚▗▚              ");
	printf("        ▙▚▚▌▌▌▙▜▐▚▙▚▚▌▌▌▛▞▞▞▞▞▞▞▞▞▌▌▌▙▚▚▚▚▚▚▚▜▐▐▞▌▚▐▗▀▞▖▌▞▐▝▖▘▞▐▝▞▖             ");
	printf("        ▙▚▚▚▚▚▚▚▚▚▀▙▌▌▙▚▚▚▚▚▚▚▌▛▞▞▞▞▌▌▌▙▚▜▐▚▚▌▛▛▞▐▝▖▌▚▝▖▚▐▗▚▗▘▞▖▌▞▄             ");
	printf("       ▝▙▚▜▐▚▚▚▚▚▚▜▐▞▙▚▚▚▌▙▚▜▐▐▐▐▚▜▐▐▐▞▞▞▞▞▞▙▀▌▌▛▖▌▚▐▝▞▐▝▖▚▐▗▗▝▖▚▝▄             ");
	printf("       ▝▌▌▌▌▌▛▞▌▛▞▞▞▞▞▜▜▟▞▞▞▞▞▞▞▞▞▞▞▞▌▟▐▟▙▜▜▝▌▌▙▚▌▞▞▖▌▞▞▐▝▞▖▚▗▗▝▝▞▖▌            ");
	printf("       ▐▌▛▞▟▐▐▐▐▐▐▚▚▚▜▐▐▗▀▛▜▟▟▙█▟▙█▟▟▞▜▚▚▐▐▐▚▚▜▐▐▐▝▖▚▐▝▞▖▌▚▐▝▞▖▘▚▝▖▌            ");
	printf("       ▐▞▞▞▞▞▌▙▚▌▌▙▚▌▌▌▙▚▜▐▚▖▌▌▞▖▌▞▞▖▙▚▚▚▚▚▚▚▚▚▚▚▚▜▝▞▖▌▞▝▞▝▖▌▞▞▟▖▌▌▞            ");
	printf("       ▐▞▞▟▐▐▐▐▐▐▐▐▐▐▐▞▞▞▞▞▞▞▞▟▐▚▜▐▐▞▞▞▞▌▛▞▌▙▜▐▞▌▛▞▞▖▚▐▝▞▞▞▌▌▌▚▖▌▌▌▛            ");
	printf("       ▐▞▟▐▐▚▚▚▚▚▌▙▚▚▚▚▚▜▐▞▞▟▐▐▐▐▐▐▚▚▚▜▐▐▐▐▐▐▐▐▐▐▐▐▀▞▞▄▀▞▞▞▐▝▞▞▐▗▌▘             ");
	printf("        ▛▞▞▞▞▞▌▛▞▞▞▞▌▙▚▌▌▌▌▛▞▞▞▟▐▞▞▞▞▞▞▞▞▌▙▚▚▚▚▚▚▚▚▜▐▐▐▐▐▝▞▞▞▞▞▘▘      ▗▄       ");
	printf("        █▐▐▞▌▌▌▌▌▙▚▚▚▚▚▚▚▌▌▌▌▙▜▐▐▐▐▞▞▌▛▟▟▟▟▟▙▙█▟▚▜▞▙▚▛▙▚▚▜▐▐▐▜▜▀▞▞▞▛▛▌▛▌▞▜▖     ");
	printf("    ▗▟▜▀▜▞▚▚▚▜▐▞▞▞▞▞▌▌▌▙▚▚▜▐▐▐▐▐▐▐▚▚▚▚▚▚▞▞▞▞▞▞▞▞▟▚▜▐▞▟▐▜▞▞▞▞▞▟▚▜▐▐▚▚▚▚▚▚▜▞▌     ");
	printf("    ▛▞▞▞▛▙▚▚▚▚▚▚▜▐▐▞▞▟▐▐▐▐▐▐▚▚▚▚▚▌▌▌▙▚▌▌▌▌▌▌▌▌▌▌▌▌▙▚▀▞▙▜▌▙▜▐▚▛▞▞▞▞▞▞▌▙▜▐▚▀▙     ");
	printf("    ▛▞▞▞▞▟▚▜▐▚▚▚▚▚▚▚▜▐▐▞▞▌▙▚▚▚▌▛▞▞▞▞▞▞▞▞▞▞▟▐▞▟▐▞▞▟▞▜▚▙▚▚▜▞▞▞▟▚▚▜▐▞▌▌▌▌▌▙▜▞▙     ");
	printf("    ▜▞▞▌▌▙▜▞▞▞▞▌▙▜▐▞▞▞▞▞▞▞▞▞▞▌▌▌▌▙▜▐▞▞▟▐▚▜▐▐▐▐▐▐▞▞▞▞▌▙▜▞█▞▞▟▚▚▌▌▌▌▌▙▜▐▐▞▌▛▞     ");
	printf("     ▀▚▙█▝▀▟▐▐▞▞▞▞▞▞▞▞▞▞▟▐▞▞▞▞▞▞▟▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▐▞▛▞▌▖▌▛▟▞▟▚▜▐▐▐▞▞▞▞▞▞▞▞▙▘▛     ");
	printf("           ▝▙▚▚▚▚▚▚▚▜▐▚▜▐▐▐▐▚▜▐▞▞▞▞▞▞▌▌▙▚▌▙▚▜▐▚▚▚▚▜▜▝▞▝▟▞█▚▚▚▚▚▌▌▛▞▞▞▟▐▜▐▝▌     ");
	printf("            ▝▙▚▜▐▚▚▌▌▌▌▌▌▌▙▚▚▚▚▚▚▚▜▐▐▐▞▞▞▞▞▞▞▞▞▞▌▛▟▞▙▝▟▐▟▚▚▜▐▚▚▚▚▚▚▜▐▐▐▞▙▚▌     ");
	printf("              ▜▞▞▞▞▞▟▐▞▟▐▞▞▞▞▌▌▙▜▐▐▐▚▚▚▚▚▚▚▚▜▐▞▞▞▞▞▟▞▛▞▙▜▞▞▞▞▞▞▟▐▚▚▚▚▌▌▛▞█      ");
	printf("               ▝▜▟▞▞▞▞▞▞▞▞▞▟▐▐▞▞▞▞▌▌▌▙▚▚▜▐▚▜▐▐▐▐▚▜▐▚▚▜▟▐▛▞▞▌▙▜▐▐▐▐▞▌▌▌▛▞█▘      ");
	printf("                  ▝▀▟▟▐▐▐▞▞▞▞▌▌▌▌▌▌▙▜▐▐▚▚▚▚▚▚▚▚▚▚▚▚▀▛▌▙▜▘▀▞▞▟▐▟▟▟▙▟▟▟▟▝▀        ");
	printf("                      ▝▀▘▚█▟▟▐▐▐▞▌▛▄▚▚▚▚▚▌▙▚▜▐▚▜▐▞▌▛▞▟▞▘                        ");
	printf("                              ▝▝▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘▘▘▘                            ");

	} else if ( (imagen == PANDA) ){

    printf("                                                ▗ ▖                             \n");
    printf("                                        ▗▗ ▝▀▝       ▘▀▘▘▗▗                     \n");
    printf("                                    ▄ ▘▘        ▄▖         ▝▝▗                  \n");
    printf("                                ▗▖▝           ▞█▟▞█▖          ▝▗▖               \n");
    printf("                              ▖▘             ▗▛▟▐▞▙▜             ▚▟▜▜▄          \n");
    printf("                           ▗▝                ▝▟▚▛▟▚▌              ▝▛▙▜          \n");
    printf("                         ▗▝                    ▀▝▘▘                ▝▟▛          \n");
    printf("                       ▗▞▛                                          ▝           \n");
    printf("                      ▞▙▜▜                                           ▌          \n");
    printf("                    ▗▛▛▟▚▙▖                                          ▝          \n");
    printf("                   ▟▜▞▛▟▜▞▖                                          ▐          \n");
    printf("                 ▗▟▚▛▟▜▞▙▜▜                       ▄▄▚▙▚▄             ▝          \n");
    printf("                ▗▛▟▚▛▟▚▛▟▚▛▖                    ▄▜▞▟▚▙▜▞▛▖      ▖    ▌          \n");
    printf("               ▗▛▟▚▛▟▚▛▟▚▛▟▜▖                  ▞▞▙▜▞▙▙▜▞▛▖    ▗▛▟▙  ▗▘          \n");
    printf("              ▐▜▜▞▙▜▞▛▟▚▛▟▚▛▄                 ▗▜▜▞▙▜▟▞▙▜▜    ▗▜▞▙▚▌ ▞           \n");
    printf("             ▐▜▚▙▜▞▙▜▜▞▙▜▚▛▟▜▚                ▝▙▜▞▙▛▛▛▟▜     ▞▙█▙▛▖▞            \n");
    printf("            ▗▛▙▛▟▚▛▟▜▚▛▟▜▚▛▙▜▚▙                ▜▚▛▟▞▛▛▞      ▐▌▛▟▞▘▚            \n");
    printf("           ▗▛▛▟▞▙▜▟▚▛▙▜▞▙▜▟▞▙▛▞▙                ▘▀▝▝▘       ▖▖▀▀▝   ▖           \n");
    printf("          ▗▜▞▛▟▞▙▜▞▙▜▞▙▜▞▙▙▜▟▞▛▞▙▖                        ▜████▌    ▐           \n");
    printf("          ▖ ▜▜▟▞▙▛▟▚▛▟▚▛▟▚▙▜▞▟▜▜▞▟▖                        ▘▀▘▘     ▐           \n");
    printf("         ▞  ▝▟▐▞▙▜▞▙▜▞▙▜▞▙▙▙▜▞▙▙▜▟▟▙▖                      ▞▚▘▀▀▝▖▄▗▞           \n");
    printf("        ▗    ▝▙▜▞▙▜▞▙▜▞▙▛▟▞▞▙▜▟▐▙▚▌▙▜▚▖                   ▞▞▟█▙▙▙▄▗▗▝▝▗         \n");
    printf("        ▌      ▛▟▚▛▟▜▚▛▙▜▟▞▛▟▚▙▜▞▙▜▞▛▙▜▚▄             ▖▖ ▛▗▟▙▙▙▜▟██▛█▙▙█▖       \n");
    printf("       ▝       ▝▞▙▜▚▛▙▜▞▙▚▜▜▞▙▙▜▟▞▙▜▟▟▜▚▙▜▞▄            ▛ ▙█▟▙██▜▟▟█▙▛▙▛        \n");
    printf("       ▌         ▀▙▜▟▞▙▜▞▛▙▙▜▟▐▙▚▜▞▙▌▙▛█▞▙█▟▜▜▜▜▜▜▜▜▞▄▖▞▗▜█▟█▟▙██▜▙█▟██         \n");
    printf("      ▗▘          ▝▚▌█▞▙▜▞▙▚█▐▌▙▜▙▜▟▞▙▜▞▛▙▚▙▜▜▜▜▜▜▚▛▟▚▛█▟█▟█▟▜▟▙██▜▟█▟▙▜▙▖      \n");
    printf("      ▗             ▝▐▞▙▜▞▙▜▙▜▞▙▜▞▙▚▛▟▚▛▛▟▚▙▜▚▙▙▜▞▙▜▞▙▜▞▞█▙█▟█▛█▙▙▛▟▞▟▞█▟▞▙     \n");
    printf("      ▌               ▝▝▙▜▞▙▜▙▜▞▙▜▞▙▜▞▙▜▞▙▜▞▛▙▚▙▜▞▙▜▟▜▚▛▛█▟▙█▙█▙▌▙▛▙▜▟▞▙▚▛▙▛    \n");
    printf("      ▌                  ▘▜▐▙▜▙▜▞▙▜▞▙▜▞▙▜▞▙▜▟▞▙▙▜▞▙▜▞▙▜▜▜▟▜▟▙█▜▙▛▟▞▙▜▞▟▚▛▟▚▛▙   \n");
    printf("      ▌                      ▀▐▙▜▞▙▜▞▙▛▟▚▛▟▚▙▜▞▞▙▜▞▙▜▟▜▟▙██▜█▟█▞▛▙▜▞▙▜▞▙▜▞▛▟▚   \n");
    printf("      ▙                        ▚▛▟▜▚▛▙▜▞▛▟▚▛▞▙▜▜▞▙▜▟▚▙▛▟▟▙██▟▜▟█▜▞▙▜▞▙▜▞▙▜▜▞█   \n");
    printf("      ▛▙▖                       ▝▚▛▙▜▞▙▜▜▞▛▟▜▞▛▙▜▞▛▞▙▙▜▀▀▜▟▙███▜▙▜▞▙▛▙▜▜▞▛▙▜▞   \n");
    printf("      ▜▟▞▙▖                       ▝▙█▞▙▜▚▛▛▟▚▛▙▙▜▞▛█▟▝   ▟▟▞▙▜▞▙▜▙▛▟▟▞▛▟▜▟▞▙▘   \n");
    printf("      ▐▟▞▙▜▜▄▗                   ▄▛▟▞▛▛▛▙█▟▙█▟▟▟▙▛▛▙▚█ ▗▟▌▙▜▞▙▜▞▙▚▛▙▙▛▛▟▚▙▀     \n");
    printf("   ▗▞▛█▟▞▙▜▚▙▙▜▄▖▖              ▟▟▞▙▜▞▛▟▚▙▚▙▚▙▚▙▚▛▛▟▜▞█▟▐▞▙▙▜▞▙▜▞▙▜▚▙▜▜▖        \n");
    printf("   ▟▞▛▞▙▜▞▛▙▚▙▜▞▟▜▜▞▄▄▖▖▖     ▗▜▚▌█▞▙▜▜▞▙▙▜▞▙▚▛▞▙▜▞▙▙▜▞▟▙▜▟▞▙▜▞▙▜▞▛▙▚▛▙▙        \n");
    printf("   ▙▜▟▜▜▙▜▟▞▙▙▙▜▞▙▙▜▟▞▟▜▟▜▛▛▛▛▛▙▜▞▙▜▞▙▙▜▟▐▚▛▟▜▞█▞▙▜▞▞▙▜▞▛▙▚▜▞▙▜▞▙▜▚▛▙▜▞▟▖       \n");
    printf("   ▐▙▚▛▙▛▙▚▛▟▐▞▙▜▟▐▚▙▜▞▙▙▜▞▛▟▜▟▞▙▜▞▙▜▟▞▙▙▜▙▜▞▙▜▞▟▚▛▟▜▞▙▜▜▙▜▙▜▞▙▜▟▜▚▛▞▙▜▞▙       \n");
    printf("    ▝▀▟▝▀▟▚▛▟▚▛▟▚▙▜▙▚▛▟▚▙▜▞▛▟▚▙▜▞▙▜▞▙▚▜▞▞▙▚▛▟▚▛▟▚▛▟▚▛▟▚▛▙▛▙▚▛▟▚▛▞▙▜▞█▞▙▜▟       \n");
    printf("         ▝▛▟▚▛▟▚▛▟▚▙▜▞▙▜▞▙▜▜▞▙▙▜▞▙▛▟▚▛▙▜▜▞▙▜▞▙▜▞▛▟▚▛▟▚▛▟▞█▐▙▜▞▛▟▜▞▙▜▞▟▚▛▟▖      \n");
    printf("          ▝▜▚▛▟▚▛▟▚▙▜▞▙▜▟▞▙▜▞▙▚▛▟▚▜▟▛▟▚▛▙▜▞▙▜▞▙▜▜▞▛▟▚█▞▙▜▙▜▞▙▜▜▞▙▜▞▙▜▞▙▜▚▌      \n");
    printf("            ▜▟▚▛▟▚▛▟▚▛▟▙▚▛▟▚▛▟▚▛▟▜▚▙▛▟▚▛▞▙▜▞▙▛▙▜▚▛▛▟▜▞▟▚▙▛▙▜▞▙▜▞▙▜▟▚▛▛▟▜▚▘      \n");
    printf("             ▝▀▟▜▚▛▟▚▛▌▙▜▞▙▛▟▚▛▟▚▛▙▙▛▟▙▜▜▞▙▜▚▜▞▛▙▜▞▙▙▜▞▛▟▜▞▙▜▞▙▜▞▙▙▜▞▛▟▚▛▌      \n");
    printf("               ▝▀▙▜▞▙▜▜▞▙▜▟▞▙▛▟▚▛▟▞▟▜▞▞▙▜▞▙▛▛▙▜▟▞▙▜▟▐▙▜▜▟▙▜▞▙▜▞▙▛▟▞▙▜▜▞▙▜       \n");
    printf("                  ▝▀▚▛▙▜▞▙▌█▞▟▚▛▛▞▛▟▙▜▜▞▙▜▟▞▙▙▜▞▟▚▛▞▙▚▛▙▙▙▜▞▙▜▟▚▜▟▞▙▜▚▜▞█       \n");
    printf("                       ▀▀▘▀▞▞▙▜▞▀▀▀▝▟▜▚▛▟▚▙▜▞▞▙▜▞▙▜▜▞▙▛█▞▞▙▜▞▙▙▜▙▚▜▞▛▛▙▜▟       \n");
    printf("                                    ▙▜▚▜▞▛▞▙▜▜▞▙▜▟▜▚▛▟▜▚▜▜▞▙▜▟▞▙▚▛▙▜▚▛▟▙▘       \n");
    printf("                                    ▝▚▛▙▜▜▜▞▙▜▞▙▛▙▜▚█▙█▜▜▜▞▙█▚▜▞▙▜▞▛▙▀▘         \n");
    printf("                                      ▝▀▀▟▙▜▞▙▜▟▞█▙█▝▝ ▝▀▀▟▙▛▛▌▛▝▀▀▝            \n");
    printf("                                             ▝▝ ▝                               \n");
	
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
 * Pre: -
 * Pos: Devuelve True si el canal_tv es ANIME, MUSICA_POP o LIMPIEZA. 
 * 		Devuelve False en caso contrario.
 */

bool es_canal_valido (char canal_tv){
	return ( (canal_tv == ANIME) || (canal_tv == MUSICA_POP) || (canal_tv == LIMPIEZA) );
}

/*
 * Pre: -
 * Pos: La variable asociada se modificará a ANIME, MUSICA_POP o LIMPIEZA.
 */

void solicitar_canal_tv(char* canal_tv){

	printf("\n\nVas a ver televisión un rato, pones el canal de Anime (A), Musica Pop (M) o Limpieza (L): ");
	scanf(" %c", canal_tv);
	
	while (!es_canal_valido(*canal_tv)){
		printf("ERROR!!! Polar está furioso, ingresa un canal válido o Polar no se calmará: ");
		scanf(" %c", canal_tv);
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
 * Pos: Modifica la variable por FOCAS, BAMBU o PESCADO
 */

void solicitar_alimento(char* alimento){

	printf("\n\nSolo podes guardar un alimento en tu vianda: Bambú (B), Pescado (P), Focas (F): ");
	scanf(" %c", alimento);
	
	while (!es_alimento_valido(*alimento)){
		printf("ERROR!!! Polar está furioso! Ingresa un alimento válido o Polar no se calmará: ");
		scanf(" %c", alimento);
	}
}

/*
 * Pre: -
 * Pos: Devuelve True si el piso_torre está entre PISO_MAS_BAJO y PISO_MAS_ALTO.
 * 		Devuelve False en caso contrario.
 */

bool es_piso_torre_valido (int piso_torre){
	return ( (piso_torre>=PISO_MAS_BAJO) && (piso_torre<=PISO_MAS_ALTO) );
}

/*
 * Pre: - 
 * Pos: Modifica variable asociada por un valor entre PISO_MAS_BAJO y PISO_MAS_ALTO.
 */

void solicitar_piso_torre(int* piso_torre){

	printf ("\n\nTe compras una torre con tus dos hermanos de 18 pisos. ¿En que piso te gustaría vivir? ");
	scanf(" %i", piso_torre);
	
	while (!es_piso_torre_valido(*piso_torre)){
		printf("ERROR!!! Polar está furioso! Ingresa un piso válido (1 a 18) o Polar no se calmará: ");
		scanf(" %i", piso_torre);
	}

}

/*
 * Pre: -
 * Pos: Devuelve True si la fuerza_grito está entre GRITO_MINIMO y GRITO_MAXIMO.
 * 		Devuelve False en caso contrario.
 */

bool es_fuerza_grito_valida (int fuerza_grito){
	return (fuerza_grito>=GRITO_MINIMO && fuerza_grito<=GRITO_MAXIMO);
}

/*
 * Pre: -
 * Pos: La variable asociada estará entre GRITO_MINIMO y GRITO_MAXIMO.
 */

void solicitar_fuerza_grito(int* fuerza_grito){

	printf("\n\n¡Oh, una rata! ¿Que tan fuerte gritas del 1 al 18? Siendo 1 no gritar y 18 desgarrarse la garganta: ");
	scanf(" %i", fuerza_grito);

	while (!es_fuerza_grito_valida(*fuerza_grito)){
		printf("ERROR!!! Ningún escandaloso puede descifrar lo que hiciste, el grito debe ser entre 1 a 18: ");
		scanf(" %i", fuerza_grito);
	}
}

/*
 * Pre: El canal_elegido sea LIMPIEZA, ANIME o MUSICA_POP
 * Pos: Devuelve un entero asociado al multiplicador del canal_elegido
 */

int calcular_multiplicador_canal_tv(char canal_elegido){

	int multiplicador_canal;

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

int calcular_puntaje_alimento (char alimento){
	
	int puntaje_alimento;

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

void mostrar_personalidad_escandalosa (int piso_torre,int fuerza_grito,char canal,char alimento) {

	int multiplicador_canal_tv = calcular_multiplicador_canal_tv(canal);
	int puntaje_alimento = calcular_puntaje_alimento(alimento);
	int puntaje_total = calcular_puntaje_total (piso_torre,fuerza_grito,multiplicador_canal_tv,puntaje_alimento);

	printf("\n ---------- Después de un arduo análisis , se determino que la personalidad más adecuada para definirte es ------------ \n\n");

	if ( (puntaje_total >= PUNTAJE_MINIMO_POLAR ) && (puntaje_total <= PUNTAJE_MAXIMO_POLAR) ){

		mostrar_imagen(POLAR);
		printf("- Polar -Alonzo Corazón de tigre- (I) - \n\nSos el menor de los tres hermanos, casi siempre estas en tu mundo y no decis una palabra. Pero aunque seas un oso de pocas palabras, no hay que subestimarte. Posees un montón de talentos ocultos y hacer todo el trabajo sucio de los osos.");
		
	} else if ( (puntaje_total >= PUNTAJE_MINIMO_PANDA ) && (puntaje_total <= PUNTAJE_MAXIMO_PANDA ) ){

		mostrar_imagen(PANDA);
		printf (" - Panda (P) - \n\nSos el hermano del medio y no te parecés en nada a tus hermanos. A ellos les gusta bailar; vos te quedas contra la pared. Ellos comen carne; vos sos vegetariano. Participas voluntariamente en casi todas las ideas de Pardo, aunque seas un poco más inteligente.");

	} else {

		mostrar_imagen(PARDO);
		printf(" - Pardo (G) -\n\n Sos el mayor de los hermanos, un líder carismático, alegre y muy motivado. A lo mejor comiste pintura siendo osezno, nadie lo sabe. Te encanta divertirte y no tomarte nunca la vida demasiado en serio. Te dan miedo los pepinos. ");
	}

}

int main (){

	char canal_tv;
	char alimento;

	int piso_torre;
	int fuerza_grito;
	
	mostrar_imagen(BIENVENIDA);

	solicitar_canal_tv(&canal_tv);
	solicitar_alimento(&alimento);
	solicitar_piso_torre(&piso_torre);
	solicitar_fuerza_grito(&fuerza_grito);

	mostrar_personalidad_escandalosa(piso_torre,fuerza_grito,canal_tv,alimento);

	return 0;

}
