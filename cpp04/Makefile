CC=g++
CUR_DIR=$(shell pwd;)
SRC=$(wildcard $(CUR_DIR)/*.cpp)
OBJ=$(SRC:%.cpp=%.o)
TARGET=out
INCLUDE=-I./
LIB=libfunc.so

lib:$(LIB)
all:$(LIB) $(TARGET)
$(TARGET):$(OBJ)
	$(CC) -o $@ -L./ -lfunc
$(LIB):$(OBJ)
	$(CC) -shared -fPIC -o $@ $^
# ar -crs -o $@ $^

%.o:%.cpp
	$(CC) -fPIC -c -o $@ $< $(INCLUDE)

.PHONY:clean run
clean:
	rm -rf $(LIB)
	rm -rf $(OBJ)
	rm -rf $(TARGET)
run:
#配置运行时动态库的加载路径
	$(shell export LD_LIBRARY_PATH=$(CUR_DIR)$LD_LIBRARY_PATH;)
	./out


