class Rectangulo:
    def __init__(self, p0:Punto, p1:Punto, p2:Punto, p3:Punto):
        self.p0 = p0
        self.p1 = p1
        self.p2 = p2
        self.p3 = p3
        self.pts = [self.p0,
                    self.p1,
                    self.p2,
                    self.p3]
    
    def en_rectangulo(self, pt:Punto):
        return self.p0.x < pt.x < self.p1.x and self.p2.y < pt.y < self.p1.y

r = Rectangulo(Punto(0,0), Punto(1,0), Punto(1,-1), Punto(0,-1))
p = Punto(0.5, -1.5)
print(r.en_rectangulo(p))
