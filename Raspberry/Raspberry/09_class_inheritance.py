class Car:   
    speed = 0  #멤버(인스턴스) 변수

    def upspeed(self,value):
        self.speed += value
        print("현재속도(부모클래스) : %d" %(self.speed))
    
    def downspeed(self,value):
        self.speed -= value

        if(self.speed <0):
            self.speed = 0
        print("현재속도(부모클래스) : %d" %(self.speed))

class Sedan(Car): #Car의 자식 클래스
    seatnum = 0

    def getsetnum(self):
        return self.seatnum

    def upspeed(self, value):
        self.speed += value
        if self.speed >150:
            self.speed =150
        print("현재 속도(서브 클래스) : %d "%self.speed)
    def downspeed(self, value):
        self.speed -= value
        if self.speed <0:
            self.speed =0
        print("현재 속도(서브 클래스) : %d "%self.speed)

class Truck(Car): #Car의  클래스
    capacity = 0

    def getcapacity(self):
        return self.capacity

sedan1 = Sedan()
truck1 = Truck()

sedan1.upspeed(100)
truck1.upspeed(80)

sedan1.seatnum = 5
truck1.capacity = 50

print("승용차의 속도는 %dkm, 좌석수는 %d개입니다." %(sedan1.speed,sedan1.getsetnum()))
print("트럭의 속도는 %dkm, 총중량은 %d톤입니다." %(truck1.speed , truck1.getcapacity()))
