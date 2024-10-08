## Directorios
BUILD_DIR = build
	
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin
SRC_DIR = src

## Toolchain
CC = gcc
RM = rm
CPPCHECK = cppcheck


# Flags
CFLAGS = -Wall -Wextra
LDFLAGS = -O

## Codigo
TARGET = $(BIN_DIR)/$(SRC)
SRC_FILE = $(addprefix $(SRC_DIR)/, $(SRC).c)

## Utilerias
LIBS_SRC = \
	src/utils.c

SOURCES = \
	$(SRC_FILE)\
	$(LIBS_SRC)\

OBJ_NAMES = $(notdir $(SOURCES:.c=.o))
OBJ = $(addprefix $(OBJ_DIR)/, $(OBJ_NAMES))

# SOURCES := $(shell find $(SRC_DIR) -name '*.c')

# Reglas
$(TARGET): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<


# Phonies
.PHONY:	all clean run print cppcheck

all: $(TARGET)

run: $(TARGET)
	$(TARGET)

clean:
	rm -rf $(BUILD_DIR)/*


cppcheck: 
	@$(CPPCHECK) --enable=all --error-exitcode=1\
	--inline-suppr \
	--suppress=missingIncludeSystem \
	$(SOURCES)\
	--check-config



