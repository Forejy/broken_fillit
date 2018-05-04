
#ifndef HEADER_H
# define HEADER_H

# define CHUNK_READ_SIZE (1024)
# define MIN_BUF_SPACE_TRESHOLD (CHUNK_READ_SIZE / 2)
# define ALLOW_SILENT_FAIL (1)
# define PIECE_CHAR_COUNT (21)
# define MIN(A, B) ((A <= B) ? A : B)
# define MAX(A, B) ((A > B) ? A : B)
# define POS_SUBSTRACT(A, B) ((t_pos){A.x - B.x, A.y - B.y})
# define DISTANCE(A, B) (ABS((A).x - (B).x) + ABS((A).y - (B).y))
# define ABS(X) ((X) > 0 ? (X) : (-(X)))
# define ERROR_CHARSET_INVALID "error"
# define ERROR_OPEN_FAILED "error"
# define ERROR_EMPTY_FILE "error"
# define ERROR_NOT_4_ELEMS "error"
# define ERROR_MALFORMED_PIECE "error"
# define ERROR_DISJOINT_ELEMS "error"
# define ERROR_INVALID_CHARACTER "error"
# define ERROR_MALLOC_FAIL "error"
# define ERROR_TOO_MANY_PIECES "error"
# include <stddef.h>

typedef struct	s_grid {
	char	size;
	char	**data;
}	t_grid;

typedef struct	s_pos {
	char x;
	char y;
}				t_pos;

typedef struct	s_piece {
	t_pos	pos_array[4];
	char	width;
	char	height;
	char	c;
}				t_piece;

typedef struct	s_piece_list {
	t_piece	*array;
	char	count;
}				t_piece_list;

t_grid			*create_grid(int size);
void			destroy_grid(t_grid *grid);
void			print_grid(t_grid *grid);
int				can_place_piece(char **grid, t_pos pos_array[4], char x, char y);
void			apply_piece(char **data, t_piece *p, t_pos pos);
void			remove_piece(char **grid, t_pos pos_array[4], t_pos pos);
char			*read_file(int entry);
void			resolve(t_piece_list *piece_array);
t_piece_list	*create_piece_list(char *file);
void			check_file(char const *str);
void			exit_with_msg(char const *message);
void			*ft_memcpy(void *dst, const void *src, size_t count);
void			*ft_memset(void *dest, int value, size_t count);
void			ft_putendl(char const *s);
void			ft_putchar(char c);
size_t			ft_strlen(const char *s);

#endif
