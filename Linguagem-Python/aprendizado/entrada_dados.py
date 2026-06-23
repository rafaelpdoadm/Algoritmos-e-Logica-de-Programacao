salario1, salario2: float
nome1, nome2: str
idade: int
sexo: str

nome1 = input("Nome da primeira pessoa: ")
salario1 = float(input("Salario da primeira pessoa: "))

nome2 = input("Nome da segunda pessoa: ")
salario2 = float(input("salario da segunda pessoa: "))

idade = int(input("Digite uma idade: "))
sexo = input("Digite um sexo (F/M): ")

print(f"Nome 1: {nome1}")
print(f"Salario 1: R${salario1:.2f}")
print(f"Nome 2: {nome2}")
print(f"Salario 2: R${salario2:.2f}")
print(f"Idade: {idade} anos")
print(f"Sexo: {sexo}")
