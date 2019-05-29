#funzione che calcola la distanza da 2 punti sul piano cartesiano 

def punti():
    print("inserisci le cordinate del punto")
    x = float(input())
    y = float(input())
    return (x, y)

def distanza(A, B):
    return abs(((A[1] - A[0]) ** 2 + (B[1]- B[0]) ** 2) ** 0.5)

def stampa(A, B):
    print("cordinate del punto A : ", A)
    print("cordinate del punto B : ", B)

A = punti()
B = punti()
stampa(A, B)
distanza = distanza(A, B)

print ("la distanza tra i punti A e B : ", distanza)