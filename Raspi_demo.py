import smbus

addr = 0x10
bus = smbus.SMBus(1)

print('Enter 1 for On and 0 for Off')

while True:
	led_status = input("Enter Number: ")
	
	if led_status == '1':
		bus.write_byte(addr,0x01)
	elif led_status == '0':
		bus.write_byte(addr,0x00)
	else:
		break
