import math as m

class Punto:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distancia(self, p2):
        return m.sqrt((self.x - p2.x)**2 + (self.y - p2.y)**2)


class Camino:
    def __init__(self, camino: list[Punto]):
        self.puntos = camino

    def distancia_total(self):
        distancia = 0
        for i in range(len(self.puntos)):
            try: 
                distancia += self.puntos[i].distancia(self.puntos[i + 1]) m                   
            except: pass
        return distancia
    
    def distancia_puntas(self):
        return self.puntos[0].distancia(self.puntos[-1])


camino = Camino([Punto(0,0), Punto(1,0), Punto(1,1), Punto(0,1)])
print(Camino.distancia_total(camino))
print(camino.distancia_puntas())
