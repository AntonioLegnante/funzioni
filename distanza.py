#funzione che calcola la distanza da 2 punti sul piano cartesiano 

def punti():
    print("inserisci le cordinate del punto")
    x = int(input())
    y = int(input())
    return (x, y)

A = punti()
B = punti()

distanza = abs(((A[1] - A[0]) ** 2 + (B[1]- B[0]) ** 2) ** 0.5)

print (distanza)