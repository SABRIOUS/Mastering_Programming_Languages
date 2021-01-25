class Rectangle:
    def __init__(self,width,height):
        self.width = width
        self.height = height
    def get_area(self):
        return self.width * self.height

class Circle:
    def __init__(self,radius):
        self.radius = radius
        self.pi = 3.14
    def get_area(self):
        return self.pi * self.radius**2

r = Rectangle(2,5)
print(r.get_area())
c = Circle(5)
print(c.get_area())
