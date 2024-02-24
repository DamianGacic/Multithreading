#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h> // gettimeofday
# include <unistd.h> // usleep, write
# include <stdlib.h> // malloc free
# include <pthread.h> // mutex: init destroy lock unlock
# include <limits.h> // INT_MAX

typedef enum e_events
{
	FORK,
	EAT,
	SLEEP,
	THINK,
	DIE,
	DONE
}   t_events;

typedef enum e_error
{
	invalid_args,
}				t_error;

typedef struct s_philo
{
	int				id;
	t_fork			*left_fork;
	t_fork			*right_fork;
	int				meals_eaten;
	int				time_since_food;	
	suseconds_t		last_meal_time;
	pthread_t		*thread_id;
	t_paras			*params;
}   t_philo;

typedef struct s_fork
{ 
	int				id;
	pthread_mutex_t	*fork;
}	t_fork;

typedef struct s_paras
{
	int			number_of_philosophers;
	int			time_to_die;
	int			time_to_eat;
	int			time_to_sleep;
	int			must_eat;
	suseconds_t	start_time;
	int			death;
	int			done;
	t_fork		*forks;
	t_philo		*philosophers;
	 

	pthread_mutex_t	*forks;
}   t_paras;

#endif