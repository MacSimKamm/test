TARGET = build/hw
COMPILE = g++ -c -g -O0 -DDEBUG -Iinclude 
LINK = g++
SRC = src/
BUILD = build/

.PHONY: all clean install uninstall
	
all: $(TARGET)
	
clean:
	rm -rf $(TARGET) $(BUILD)*.o

$(TARGET): $(BUILD)hw.o $(BUILD)getname.o
	$(LINK) $(BUILD)hw.o $(BUILD)getname.o -o $(TARGET)

$(BUILD)hw.o: src/hw.cpp include/hw/getname.h
	$(COMPILE) $(SRC)hw.cpp -o $(BUILD)hw.o

$(BUILD)getname.o: src/getname.cpp include/hw/getname.h
	$(COMPILE) $(SRC)getname.cpp -o $(BUILD)getname.o

install:
	install $(TARGET) /usr/local/bin

uninstall:
	rm -rf /usr/local/bin/hw
