#---------------------
# Author : Sandeep
#--------------------
include ./toolchain.mak
MOD_INC_DIR = ./
MOD_SRC_DIR = ./
MOD_OBJ_DIR = ../obj
MOD_LIB_DIR = ../lib
INCLUDES = -I./inc -I/usr/include
MOD_NAME = liboft
TARGET = $(MOD_LIB_DIR)/lib$(MOD_NAME).a
SKIP_TARGET_LIST := dirs clean tags cscope

all : dirs $(TARGET)
$(MOD_OBJ_DIR)/%.o: $(MOD_SRC_DIR)/%.cpp
	$(CC) -c $(CC_FLAGS) $(INCLUDES) -o $@ $<

MOD_SRC = $(notdir $(wildcard $(MOD_SRC_DIR)/*.cpp))
MOD_OBJ = $(addprefix $(MOD_OBJ_DIR)/, $(addsuffix .o, $(basename $(MOD_SRC))))
MOD_DEP = $(addprefix $(MOD_OBJ_DIR)/, $(addsuffix .d, $(basename $(MOD_SRC))))

$(TARGET): $(MOD_OBJ)
	$(AR) $@ $^


.PHONY: clean dirs tags cscope

dirs:
	@if [ ! -d $(MOD_OBJ_DIR) ] || [ ! -d $(MOD_LIB_DIR) ]; then \
		mkdir --parents $(MOD_OBJ_DIR) $(MOD_LIB_DIR); \
	fi


tags:
	ctags -R

cscope:
	cscope -bR 

clean:
	$(RM) -r $(MOD_OBJ_DIR) cscope.out ./tags $(TARGET) $(MOD_LIB_DIR)
