# nom de la bibliotheque qui sera créée
NAME = libft.a

# compilateur utilisé
CC = cc

# flags de compilation 
CFLAGS = -Wall -Wextra -Werror

# commande pour créer une archive (bibliotheque)
AR = ar rcs

# commande pour supprimer des fichiers 
RM = rm -f

# tous les fichiers sources obligatoires presents dans le repertoire courant 
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_itoa.c  \
       ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
       ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
       ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
       ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
       ft_substr.c ft_tolower.c ft_toupper.c ft_strmapi.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	     ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# conversion des fichiers .c en fichiers objets .o 
OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS_SRCS:.c=.o)

# regle principale : creation de la bibliotheque 
# creation de la bibliotheque libft.a avec tous les fichiers objets 
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# regle all : Compile la bibliotheque 
all: $(NAME)

# regle bonus : complie les fichiers bonus et les ajoutes a la bibliotheque 
bonus: $(OBJS) $(BOBJS)  
	$(AR) $(NAME) $(OBJS) $(BOBJS)
# compilation avec tous les fichiers objets.

# regle clean : supprime tous les fichiers objets .o 
clean:
	$(RM) $(OBJS) $(BOBJS)

# regle fclean : supprime tous les fichiers objets et la bibliotheque 
fclean: clean
	$(RM) $(NAME)

# regle re : supprime tout et recommence la compilation 
re: fclean all

# generation des fichiers objets (.o) depuis les fichiers sources (.c)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# .PHONY evite les conflits entre les noms des fichiers et les noms des regles
.PHONY: all clean fclean re bonus
