/*Um ponto no espaço é representado por uma coordenada x, uma coordenada y e uma coordenada z.

    Crie uma struct para representar um ponto.
    Declare três variáveis para v1, v2 e v3 do tipo criado para representar os pontos (1,0,5), (3,3,3) e (0,10,0).
    Exiba a coordenada y dos três pontos.
    Some 10 unidades na coordenada z dos três pontos.
    Exiba as três coordenadas de v2
*/


#include <stdio.h>

struct Ponto{
	int x, y, z;
};

int main(){
	struct Ponto v1 = {1,0,5};
	struct Ponto v2 = {3,3,3};
	struct Ponto v3 = {0,10,0};

	printf("coords y: %d %d %d \n", v1.y, v2.y, v3.y);
	
	v1.z += 10; v2.z += 10; v2.z += 10;

	printf("coords v2: %d %d %d \n", v2.x, v2.y, v2.z);



	return 0;
}
