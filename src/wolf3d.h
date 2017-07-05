#ifndef  WOLF3D_H
# define WOLF3D_H
# include <math.h>
# include <string.h>
# include <mlx.h>
# include <stdio.h>
# define WINHEIGHT 200
# define WINWIDTH 320
# define FOV 60
# define MAPW 5;
# define MAPH 5;
# define GRIDH 64;
# define GRIDW 64;

typedef struct	s_mlx
{
	void		*mlx;
	void		*win;
}				t_mlx;
typedef struct s_player
{
	int			x;
	int			y;
	int			view;
}				t_player;
typedef struct s_inter
{
	int			x;
	int			y;
}				t_inter;
typedef struct	s_line
{
	int			dx;
	int			dy;
	int			sx;
	int			sy;
	int			err;
	int			e2;
	int			x0;
	int			y0;
	int			x1;
	int			y1;
}				t_line;
#endif