
NAME := libftprintf.a
SRC_DIRS := src src/buf src/src_num_to_str src/bonus libft
SRC_FILES := $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))
OBJ_FILES := $(notdir $(SRC_FILES))
OBJ_FILES := $(OBJ_FILES:.c=.o)
CC := gcc
LIBFT := libft.a
#INCLUDE_DIR := ./include
#INCLUDE_DIR := $(addprefix -I , $(INCLUDE_DIR))
INCLUDE_DIR := -I ./include
REMOVE := /bin/rm -f

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rc $@ $(OBJ_FILES)
	ranlib $@

VPATH := $(SRC_DIRS)

$(OBJ_FILES): %.o: %.c
	$(CC) -c $^ $(INCLUDE_DIR) -pipe

.PHONY: clean
clean:
	$(REMOVE) $(OBJ_FILES)

.PHONY: dclean
dclean:
	$(REMOVE) $(wildcard *.d)

.PHONY: fclean
fclean: clean
	$(REMOVE) $(NAME)

include $(wildcard *.d)