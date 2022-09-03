########################
###     VARIABLES    ###
########################

### COLORS ###
RED		=	\033[0;91m
GREEN	=	\033[0;92m
YELLOW	=	\033[0;93m
BLUE	=	\033[0;94m
END_C	=	\033[0m

### FILES AND DIRECTORIES ###
NAME = libftprintf.a
GC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = include

DIR_PRINTF = src/
FILES_PRINTF = ft_print_hex ft_print_num ft_print_ptr\
	 ft_print_str ft_printf

FILES_SRC += $(addprefix $(DIR_PRINTF), $(FILES_PRINTF))

DIR_OBJ = obj/
FILES_OBJ = $(addprefix $(DIR_OBJ), $(addsuffix .o, $(FILES_PRINTF)))

DIRECTORIES	= .cache_exists

#####################
### PROGRAM RULES ###
#####################

all: $(NAME)

$(NAME): $(FILES_OBJ)
	@ar rsc $(NAME) $(FILES_OBJ)
	@echo "[$(BLUE)> PRINT LIBRARY COMPILED $(END_C)][$(GREEN) SUCCESS! $(END_C)] $(NAME)"

$(DIR_OBJ)%.o: $(DIR_PRINTF)%.c | $(DIRECTORIES)
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(GC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
#	@echo "[$(YELLOW) *PRINT* COMPILED OBJECT $(END_C)][$(GREEN)-->$(END_C)] $@"

$(DIRECTORIES):
	@mkdir -p $(DIR_OBJ)


###################
### CLEAN RULES ###
###################

clean:
	@make clean -C libft
	@rm -rf $(DIR_OBJ)
	@echo "[$(RED) -PRINT- OBJECTS DELETED $(END_C)][$(GREEN) CLEANED SUCCESS! $(END_C)]"

fclean: clean
	@rm -rf libft/libft.a
	@rm -rf $(NAME)
	@echo "[$(RED) -LIBFT- LIBRARY DELETED $(END_C)][$(GREEN) CLEANED SUCCESS! $(END_C)]"
	@echo "[$(RED) -PRINT- LIBRARY DELETED $(END_C)][$(GREEN) CLEANED SUCCESS! $(END_C)]"

re:	fclean all