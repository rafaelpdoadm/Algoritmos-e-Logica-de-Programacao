N = int(input("Quantos numeros vc vai digitar? "))

vet = [0 for x in range(N)]

for i in range(0, N):
  vet[i] = float(input("Digite um numero: "))

print()
print("Valores = ", end="")

for i in range(0, N):
  print(f"{vet[i]:.1f} ", end="")

print()

soma = 0
for i in range(0, N):
  soma = soma + vet[i]

media = soma / N 

print(f"Soma = {soma:.2f}")
print(f"Media = {media:.2f}")
