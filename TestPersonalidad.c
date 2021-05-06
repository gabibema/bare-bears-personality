#include <stdio.h>
#include <stdbool.h>

const char ANIME = 'A';
const char LIMPIEZA = 'L';
const char MUSICA_POP = 'M';

const char BAMBU = 'B';
const char FOCAS = 'F';
const char PESCADO = 'P';

const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';

const char BIENVENIDA = 'B';

const int PISO_MAS_BAJO = 1;
const int PISO_MAS_ALTO = 18;

const int GRITO_MINIMO = 1;
const int GRITO_MAXIMO = 18;

const int PUNTAJE_MINIMO_POLAR = 5;
const int PUNTAJE_MAXIMO_POLAR = 24;
const int PUNTAJE_MINIMO_PANDA = 25;
const int PUNTAJE_MAXIMO_PANDA = 43;

/*
 * Pre: El carácter sea BIENVENIDA, POLAR, PARDO o PANDA.
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
	} else if ((imagen == PARDO) ){

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
 * 		Devuelve false en caso contrario.
 */

bool es_canal_valido (char canal_tv){
	return (canal_tv == ANIME || canal_tv == MUSICA_POP || canal_tv == LIMPIEZA);
}

/*
 * Pre:
 * Pos:
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
 * 		Devuelve false en caso contrario.
 */

bool es_alimento_valido (char alimento){
	return (alimento == BAMBU || alimento == PESCADO || alimento == FOCAS);
}

/*
 * Pre:
 * Pos:
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
 * Pos: Devuelve True si el piso_elegido está dentro del rango.
 * 		Devuelve false en caso contrario.
 */

bool es_piso_elegido_valido (int piso_elegido){
	return (piso_elegido>=PISO_MAS_BAJO && piso_elegido<=PISO_MAS_ALTO);
}

/*
 * Pre:
 * Pos:
 */

void solicitar_piso_elegido(int* piso_elegido){

	printf ("\n\nTe compras una torre con tus dos hermanos de 18 pisos. ¿En que piso te gustaría vivir? ");
	scanf(" %i", piso_elegido);
	
	while (!es_piso_elegido_valido(*piso_elegido)){
		printf("ERROR!!! Polar está furioso! Ingresa un piso válido (1 a 18) o Polar no se calmará: ");
		scanf(" %i", piso_elegido);
	}

}

/*
 * Pre: -
 * Pos: Devuelve True si la fuerza_grito está dentro del rango.
 * 		Devuelve false en caso contrario.
 */

bool es_fuerza_grito_valida (int fuerza_grito){
	return (fuerza_grito>=GRITO_MINIMO && fuerza_grito<=GRITO_MAXIMO);
}

/*
 * Pre:
 * Pos:
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
 * Pre:
 * Pos:
 */

int calcular_multiplicador_canal_tv(char canal_elegido){

	int multiplicador_canal;

	if ( (canal_elegido==LIMPIEZA)){
		multiplicador_canal=1;
	} 
	else if ( (canal_elegido==ANIME) ){
		multiplicador_canal=2;
	}
	else if ( (canal_elegido==MUSICA_POP) ){
		multiplicador_canal=3;
	}

	return multiplicador_canal;
}

/*
 * Pre:
 * Pos:
 */

int calcular_puntaje_alimento (char alimento){
	
	int puntaje_alimento;

	if ( (alimento==FOCAS)){
		puntaje_alimento=3;
	} 
	else if ( (alimento==BAMBU) ){
		puntaje_alimento=6;
	}
	else if ( (alimento==PESCADO) ){
		puntaje_alimento=9;
	}

	return puntaje_alimento;

}

/*
 * Pre:
 * Pos:
 */

int calcular_puntaje_total (int piso_elegido, int fuerza_grito, int multiplicador_canal_tv, int puntaje_alimento){

	int puntaje_total = (puntaje_alimento * multiplicador_canal_tv) + piso_elegido + fuerza_grito;

	return puntaje_total;

}

/*
 * Pre:
 * Pos:
 */

void mostrar_personaje_coincidente (int piso_elegido,int fuerza_grito,char canal,char alimento) {

	int multiplicador_canal_tv=calcular_multiplicador_canal_tv(canal);

	int puntaje_alimento= calcular_puntaje_alimento(alimento);

	int puntaje_total= calcular_puntaje_total (piso_elegido,fuerza_grito,multiplicador_canal_tv,puntaje_alimento);

	printf("\n ---------- Después de un arduo análisis , se determino que la personalidad más adecuada para definirte es ------------ \n\n");
	if ( (puntaje_total >= PUNTAJE_MINIMO_POLAR ) && (puntaje_total <= PUNTAJE_MAXIMO_POLAR) ){

		mostrar_imagen(POLAR);
	
		printf("- Polar -Alonzo Corazón de tigre- (I) - \n\nSos el menor de los tres hermanos, casi siempre estas en tu mundo y no decis una palabra. Pero aunque seas un oso de pocas palabras, no hay que subestimarte. Posees un montón de talentos ocultos y hacer todo el trabajo sucio de los osos.");
	} else if ( (puntaje_total >= PUNTAJE_MINIMO_PANDA ) && (puntaje_total <= PUNTAJE_MAXIMO_PANDA ) ){

		mostrar_imagen(PANDA);
	
		printf (" - Panda (P) - \n\nSos el hermano del medio y no te parecés en nada a tus hermanos. A ellos les gusta bailar; vos te quedas contra la pared. Ellos comen carne; vos sos vegetariano. Participas voluntariamente en casi todas las ideas de Pardo, aunque seas un poco más inteligente.");
	} else if ( (puntaje_total >= 44) && (puntaje_total <= 63) ){

		mostrar_imagen(PARDO);
	}

		printf(" - Pardo (G) -\n\n Sos el mayor de los hermanos, un líder carismático, alegre y muy motivado. A lo mejor comiste pintura siendo osezno, nadie lo sabe. Te encanta divertirte y no tomarte nunca la vida demasiado en serio. Te dan miedo los pepinos. ");
}

int main (){

	char canal_tv;
	char alimento;

	int piso_elegido;
	int fuerza_grito;
	
	mostrar_imagen(BIENVENIDA);

	solicitar_canal_tv(&canal_tv);
	solicitar_alimento(&alimento);
	solicitar_piso_elegido(&piso_elegido);
	solicitar_fuerza_grito(&fuerza_grito);

	mostrar_personaje_coincidente(piso_elegido,fuerza_grito,canal_tv,alimento);

}
