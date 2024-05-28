import random

class Pato:
    def __init__(self):
        self.vivo = True

    def disparo(self):
        if random.choice([True, False]):
            self.vivo = False
            return "¡Has acertado al pato!"
        else:
            return "¡Has fallado!"

class Juego:
    def __init__(self):
        self.pato = Pato()

    def jugar(self):
        print("¡El juego ha comenzado!")
        while self.pato.vivo:
            input("Presiona Enter para disparar: ")
            print(self.pato.disparo())
        print("¡Has ganado!")

if __name__ == "__main__":
    juego = Juego()
    juego.jugar()
