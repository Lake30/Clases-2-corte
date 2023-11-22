class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age
    self.isMayor()
    
  def isMayor(self):
    if self.age >= 18:
        self.mayor = True
    else:
        self.mayor = False
    return self.mayor

p1 = Person("John", 36)

print(p1.name)
print(p1.age)

if p1.isMayor():
    print("Puede votar!")
