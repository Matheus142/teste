#Calculadora comum
numero1 = 0  #variavel
numero2 = 0  #variavel
resultado = 0 #variavel de armazenamento da operação
operacao ='  ' #string vazia

            
numero1 = int (input("Digite o  primeiro numero:" ))
operacao = input ("Digite a operação: " )
numero2 = int (input("Digite o  segundo numero:" ))

#Processo-operação

if operacao ==    '+'   :
            resultado = numero1 +   numero2
elif operacao == '-'   :
            resultado = numero1 -    numero2
elif operacao == '/'   :
            resultado = numero1 /    numero2
elif operacao ==  '*' :
            resultado = numero1  *  numero2
else:
            resultado = 'operacão inválida'

 #imprimir resultado

print (numero1,operacao,numero2,'=',resultado)




  

