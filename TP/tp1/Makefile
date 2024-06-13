## Directorios
BUILD_DIR = build
	
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin
SRC_DIR = src

## Toolchain
CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -O
RM = rm

## Codigo
TARGET = $(BIN_DIR)/$(SRC)
SRC_FILE = $(addprefix $(SRC_DIR)/, $(SRC).c)
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC).o)

# Reglas
$(TARGET) : $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJ) : $(SRC_FILE)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<


# Phonies
.PHONY:	all clean run print

all: $(TARGET)

run: $(TARGET)
	$(TARGET)

clean:
	rm -rf $(BUILD_DIR)/*





