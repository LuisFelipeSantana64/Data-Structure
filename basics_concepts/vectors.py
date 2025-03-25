
numbers = [] #define um vetor de números, vazia

for i in range(10): #laço para ler do 1° até 10° numero
    numbers.append(int(input())) # lendo e ja colocando no vetor "numbers" (casting para trasformar a string lida, em int)

for i in range(10): #laço para alterar o "i" do 1 até 10 
    print("\t", numbers[i]) #mostrando os numeros que estão no vetor "numbers"

for i in range(9, -1, -1): #laço para alterar o "i" do 10 até 1
    print("\t\t", numbers[i]) #mostrando os numeros que estão no vetor "numbers" agora de trás pra frente

maior = numbers[0] #definindo o maior numero do vetor como sendo o primeiro, apenas para iniciar a variavel
for i in range(10): #laço para alterar o "i" do 1 até 10 
    if numbers[i] > maior: #condicional, se a posição atual do vetor for maior que "maior"
        maior = numbers[i] #então "maior" recebe o valor atual do vetor
print(maior) #mostrando o maior numero do vetor



