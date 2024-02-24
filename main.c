#include "philo.h"

init_paras(t_paras *paras, char **argv)
{
	paras->number_of_philosophers = ft_atoi(argv[1]);
	paras->time_to_die = ft_atoi(argv[2]);
	paras->time_to_eat = ft_atoi(argv[3]);
	paras->time_to_sleep = ft_atoi(argv[4]);
	paras->must_eat = -1;
}

suseconds_t get_ms(void)
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

int	main(int argc, char **argv)
{
	t_paras	paras;
	struct timeval tv;

	if (argc != 5 && argc != 6)
		return (0);
	init_paras(&paras, argv);
	create_forks(&paras);
	create_philos(&paras);
}
