numbers = [] #define um vetor de números

for i in range(10): #laço para ler do 1° até 10° numero
    numbers.append(int(input())) # lendo e ja colocando no vetor "numbers" (casting para trasformar a string lida, em int)

for i in range(10): #laço para ler do 1° até 10° numero
    print("\t", numbers[i]) #mostrando os numeros que estão no vetor "numbers"
