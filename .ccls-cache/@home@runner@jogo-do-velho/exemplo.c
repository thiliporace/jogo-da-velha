int main () {
	int game = 1;
	int num = 0;
	char userInpu[64];
	while (game == 1) {
		printf("Digite o numero da casa que voce quer prencher")
		fgets(userInput,63,stdin);
		if (sscanf(userInput, "%d", &num) == 1){
			if (num <= 9 || num >= 1){
				//coloca na casa correspondente
			}
		}
	}
	return 0
}