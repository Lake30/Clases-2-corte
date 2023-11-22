import math

class Punto:
  def __init__(self, lat, lon):
    self.lat = lat
    self.lon = lon
    
  def __str__(self):
    return str(self.lat)+","+str(self.lon)

  def calc_dist(self, p):
    return math.sqrt((self.lat - p.lat)**2 + (self.lon - p.lon)**2)

class Rectangulo:
    def __init__(self, inf_izq, sup_der):
    self.inf_izq = inf_izq
    self.sup_der = sup_der
    
  def __str__(self):
    return str(self.inf_izq)+","+str(self.sup_der)

  def isCuadrado(self):
    return math.abs(self.sup_der.lat-self.inf_izq.lat) == math.abs(self.sup_der.lon-self.inf_izq.lon)

  def contains(self, p):
    #return si el punto se encuentra dentro del area del rectángulo

p = Punto(0,0)
p1 = Punto(1,1)

print(p)

print(p.calc_dist(p1))