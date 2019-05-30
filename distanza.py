#funzione che calcola la distanza da 2 punti sul piano cartesiano 

def punti():
    print("inserisci le cordinate del punto")
    x = float(input())
    y = float(input())
    return (x, y)

def distanza(A, B):
    return abs(((B[1] - A[1]) ** 2 + (B[0]- A[0]) ** 2) ** 0.5)

def stampa(A):
    print("cordinate del punto A : ", A)


A = punti()
B = punti()
stampa(A)
stampa(B)
distanza = distanza(A, B)

print ("la distanza tra i punti A e B : ", distanza)