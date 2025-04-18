vetorA = [] #define um vetor, vazio
vetorB = [] #define outro vetor que receberá B
soma = 0 #definindo a variavel que será usada para calcular a média, posteriormente

for i in range(10): #laço para ler do 1° até 10° numero
    vetorA.append(int(input())) # lendo e ja colocando no vetor "vetorA" (casting para trasformar a string lida, em int)

for i in range(10): #laço para alterar o "i" do 1 até 10 
    print("\t", vetorA[i]) #mostrando os numeros que estão no vetor "vetorA"
for i in range(9, -1, -1): #laço para alterar o "i" do 10 até 1
    print("\t\t", vetorA[i]) #mostrando os numeros que estão no vetor "vetorA", agora de trás pra frente

menor = vetorA[0] #definindo o menor numero do vetor como sendo o primeiro, apenas para iniciar a variavel
maior = vetorA[0] #definindo o maior numero do vetor como sendo o primeiro, apenas para iniciar a variavel
for i in range(10): #laço para alterar o "i" do 1 até 10 
    if vetorA[i] > maior: #condicional, se a posição atual do vetor for maior que "maior"
        maior = vetorA[i] #então "maior" recebe o valor atual do vetor
    if vetorA[i] < menor: #condicional, se a posição atual do vetor for menor que "menor"
        menor = vetorA[i] #então "menor" recebe o valor atual do vetor   
print("\n Maior: ",maior) #mostrando o maior numero do vetor
print("\n Menor:" ,menor) #mostrando o menor numero do vetor

numero = int(input("\nDigite um numero para saber quantas vezes ele aparece:")) #lendo e ja colocando na variavel "numero" o valor que o usurio quer saber quantas vezes aparece
posicao = [] #criando vetor de posições para saber onde o "numero" solicitado aparece
cont = 0 #iniciando contador que será usadao para contar a quantidade de vezes que o "numero" aparece
for i in range(10): #laço para alterar o "i" do 1 até 10 
    soma += vetorA[i] #somando cada numero em uma variavel que futuramente será usada para calcular a média entre os valores
    if vetorA[i] == numero: #condicional, se a posição atual do vetor for igual a "numero"
        posicao.append(i) # então ele adiciona no vetor a posição que o numero aparece
        cont += 1 # e também incrementa o contador de quantidade de aparições

if cont: #condicional, se "cont" diferente de 0, significa que pelo menos 1 vez o numero foi encontrado no vetor
    print(f"\nO numero {numero} aparece {cont} vezes, nas posições{posicao} ") #então é mostrado quantas vezes e em que posições o "numero" aparece
else: #caso "cont" seja 0
    print("\nO numero não aparece nenhuma vez") #então mostrará uma mensagem informando que o "numero" não está no vetor

print("\n Média entre os valores: ", soma/10) #mostrando a média entre os valores do "VetorA"

vetorA.reverse() #inverte a ordem dos elementos no vetor
vetorB = vetorA #transfere oque tinha em "VetorA" para ""VetorB", NÃO É CÓPIA
print("VetorB (VetorA em ordem inversa):", vetorB) #mostra o "VetorB"



