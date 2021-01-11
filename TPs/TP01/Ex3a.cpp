#include <cstdio>
#include <utility>

// But: comprendre quels sont les différentes déclarations possibles et les différentes combinaisons d'appel.
// A savoir: 
// 1) décommenter une fonction, puis regarder quels sont les appels qui fonctionnent (le code ne devrait pas compiler, mettre en commentaire les appels
//    qui provoquent des erreurs de compilation). Recommencer pour la fonction suivante.
// 2) essayer de décommenter deux fonctions, et voir quelles celles qui sont compatibles, et les appels qu'elles prennent en charge.
// vous devriez retrouver les résultats de l'exercice 3 du TD (voir aussi page 29 du polycopié).
 
int fun(int  x)             { printf("call fun(int x)\n"); return x; }
//int fun(const int  x)       { printf("call fun(const int x)\n"); return x; }

//int fun(int &x)             { printf("call fun(int &x)\n"); return x; }
//int fun(const int &x)       { printf("call fun(const int &x)\n"); return x; }

//int fun(int &&x)            { printf("call fun(int &&x)\n"); return x; }
//int fun(const int &&x)      { printf("call fun(const int &&x)\n"); return x; }

int main() {
	int  		a=3, &b=a;
	const int	&c=a;
	const int   &&d = std::move(a+3); // en pratique inutile si ce n'est pour avoir le bon type
	
	printf("calling fun with %-11s => ","int");
	fun(a);
	printf("calling fun with %-11s => ","const int");
	fun(3);
	printf("calling fun with %-11s => ","int&");
	fun(b);
	printf("calling fun with %-11s => ","const int&");
	fun(c);
	printf("calling fun with %-11s => ","int&&");
	fun(3+a);
	printf("calling fun with %-11s => ","const int&&");
	fun(d);
}
