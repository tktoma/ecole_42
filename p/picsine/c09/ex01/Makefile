
#dossier sources et includes
SRCS_DIR = srcs
INCS_DIR = includes

# nom de la bibliotheque
NAME = libft.a

# fichier_sources
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c

#transforme les .c en objet .o
OBJS = $(SRCS:.c=.o)

#compilateur et flag
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#regles pour les commande demander
all: $(NAME)

#creation bibliotheque
$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)
	@echo "Bibliothèque $@ créée avec succès."

#compile le header
%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCS_DIR) -o $@ -c $<

#suprimer les fichier objet 
clean:
	@rm -f $(OBJS)
	@echo "Fichiers objets supprimés."

#suprime la bibliotheque et les objet
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) supprimée."

#suprimme tout et refait tout
re: fclean all

.PHONY: all clean fclean re
