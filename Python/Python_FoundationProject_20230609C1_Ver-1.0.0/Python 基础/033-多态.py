"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-11
Update Date: 2023-07-11
Update Log:
    - Update the code
"""

"""多态理解：同一个行为不同对象不同实现"""

"""class Animal:
    def speak(self):
        pass

class Dog(Animal):
    print("wang wang")

class Cat(Animal):
    print("miao miao")

def animal_noise(animal: Animal):
    animal.speak()

dog = Dog()
cat = Cat()

animal_noise(dog)
animal_noise(cat)"""

class AC:
    def cool_wind(self):
        pass
    def hot_wind(self):
        pass
    def swing_wind(self):
        pass

class Medi(AC):
    def cool_wind(self):
        print("Medi-cool_wind fuction")
    def hot_wind(self):
        print("Medi-hot_wind fuction")
    def swing_wind(self):
        print("Medi-swing_wind fuction")

class Geli(AC):
    def cool_wind(self):
        print("Geli-cool_wind fuction")
    def hot_wind(self):
        print("Geli-hot_wind fuction")
    def swing_wind(self):
        print("Geli-swing_wind fuction")

def makcool(ac: AC):
    ac.cool_wind()

medi_ac = Medi()
geli_ac = Geli()

makcool(medi_ac)