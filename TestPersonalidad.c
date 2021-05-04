#include <stdio.h>
#include <stdbool.h>

const char ANIME = 'A';
const char MUSICA_POP = 'M';
const char LIMPIEZA = 'L';

const char BAMBU = 'B';
const char PESCADO = 'P';
const char FOCAS = 'F';

const int PISO_MAS_BAJO = 1;
const int PISO_MAS_ALTO = 18;

const int GRITO_MINIMO = 1;
const int GRITO_MAXIMO = 18;

const char POLAR = 'I';
const char PANDA = 'P';
const char PARDO = 'G';


bool es_canal_valido (char canal_tv){
	return (canal_tv == ANIME || canal_tv == MUSICA_POP || canal_tv == LIMPIEZA);
}

bool es_alimento_valido (char alimento){
	return (alimento == BAMBU || alimento == PESCADO || alimento == FOCAS);
}

bool es_piso_elegido_valido (int piso_elegido){
	return (piso_elegido>=PISO_MAS_BAJO && piso_elegido<=PISO_MAS_ALTO);
}

bool es_fuerza_grito_valida (int fuerza_grito){
	return (fuerza_grito>=GRITO_MINIMO && fuerza_grito<=GRITO_MAXIMO);
}
void preguntar_canal_tv_favorito(){
	printf("Vas a ver televisión un rato, pones el canal de Anime (A), Musica Pop (M) o Limpieza (L): ");
}

void preguntar_alimento_favorito(){
	printf("Solo podes guardar un alimento en tu vianda: Bambú (B), Pescado (P), Focas (F) ");
}

void preguntar_piso_preferido(){
	printf ("Te compras una torre con tus dos hermanos de 18 pisos. ¿En que piso te gustaría vivir? ");
}

void preguntar_fuerza_grito(){
	printf("¡Oh, una rata! ¿Que tan fuerte gritas del 1 al 18? Siendo 1 no gritar y 18 desgarrarse la garganta.");
}

char obtener_canal_tv(){

	char canal_tv;

	preguntar_canal_tv_favorito();
	scanf("%c", &canal_tv);
	
	while (!es_canal_valido(canal_tv)){
		printf("Un verdadero escandaloso no mira otros canales, ingresa un canal correcto: ");
		scanf(" %c", &canal_tv);
	}

	return canal_tv;
}


char obtener_alimento(){
	char alimento;

	preguntar_alimento_favorito();
	scanf("%c", &alimento);
	
	while (!es_alimento_valido(alimento)){
		printf("ERROR! Alimento no válido, ingresa un alimento válido: ");
		scanf(" %c", &alimento);
	}

	return alimento;
}

int obtener_piso_elegido(){
	int piso_elegido;

	preguntar_piso_preferido();
	scanf(" %i", &piso_elegido);
	
	while (!es_piso_elegido_valido(piso_elegido)){
		printf("ERROR! Ingresa un piso dentro del rango (1 a 18): ");
		scanf(" %i", &piso_elegido);
	}

	return piso_elegido;
}

int obtener_fuerza_grito(){
	int fuerza_grito;
	preguntar_fuerza_grito();
	scanf(" %i", &fuerza_grito);

	while (!es_fuerza_grito_valida(fuerza_grito)){
		printf("ERROR! Ese es un grito que los escandalosos no pueden escuchar, el grito debe ser entre 1 a 18: ");
		scanf(" %i", &fuerza_grito);
	}

	return fuerza_grito;

}
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

int calcular_puntaje_total (int piso_elegido, int fuerza_grito, int multiplicador_canal_tv, int puntaje_alimento){
	int puntaje_piso_elegido = piso_elegido;
	int puntaje_fuerza_grito = fuerza_grito;
	int puntaje_total = (puntaje_alimento * multiplicador_canal_tv) + puntaje_piso_elegido + puntaje_fuerza_grito;

	return puntaje_total;

}

void mostrar_personaje_coincidente (int piso_elegido,int fuerza_grito,char canal,char alimento) {
	char personaje;

	int multiplicador_canal_tv=calcular_multiplicador_canal_tv(canal);

	int puntaje_alimento= calcular_puntaje_alimento(alimento);

	int puntaje_total= calcular_puntaje_total (piso_elegido,fuerza_grito,multiplicador_canal_tv,puntaje_alimento);

	if ( (puntaje_total >= 5) && (puntaje_total <= 24) ){
		printf("- Polar - ");
	}

	else if ( (puntaje_total >= 25) && (puntaje_total <= 43) ){
		printf (" - Panda - ");
	}

	else if ( (puntaje_total >= 44) && (puntaje_total <= 63) ){
		printf(" - Pardo - ");
	}

}
int main (){

	char canal_tv;
	char alimento;

	int piso_elegido;
	int fuerza_grito;

	canal_tv=obtener_canal_tv();

	alimento=obtener_alimento();

	piso_elegido=obtener_piso_elegido();

	fuerza_grito=obtener_fuerza_grito();

	mostrar_personaje_coincidente(piso_elegido,fuerza_grito,canal_tv,alimento);

}
