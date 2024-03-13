def perimetro_quadrato(lato):
    perimetro = lato*4
    print(perimetro)

def circonferenza_cerchio(raggio):
    pi = 3.14
    circonferenza = 2*pi*raggio
    print(circonferenza)

def perimetro_rettangolo(base, altezza):
    perimetro = base*2 + altezza*2
    print(perimetro)

prompt = "Inserisci 'calcola' per avviare e 'esci' per terminare: "

stringa = ""

while stringa != 'esci':
    
    stringa = input(prompt)
    
    if stringa == 'calcola':
        
        print("Quale operazione vuoi eseguire: ")
        print("1) perimetro quadrato\n")
        print("2) circonferenza cerchio\n")
        print("3) perimetro rettangolo\n")
        
        scelta = int(input("Inserisci la tua scelta:"))

        if scelta in [1, 2, 3]:
            if scelta == 1:
                lato = float(input("Inserisci il lato: "))
                perimetro_quadrato(lato)
            elif scelta == 2:
                raggio = float(input("Inserisci il raggio: "))
                circonferenza_cerchio(raggio)
            elif scelta == 3:
                base = float(input("Inserisci la base del rettangolo: "))
                altezza = float(input("Inserisci l'altezza del rettangolo"))
                perimetro_rettangolo(base, altezza)
            else:
                print("Scegli una delle tre opzioni")

