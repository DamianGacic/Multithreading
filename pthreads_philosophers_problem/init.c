#include "philo.h"

create_forks(t_paras *paras)
{
    //pthread_mutex_t	*forks;
    int	i;

    i = 0;
    paras->forks = malloc(sizeof(pthread_mutex_t) * paras->number_of_philosophers);
    while (i < paras->number_of_philosophers)
    {
        pthread_mutex_init(&paras->forks[i], NULL);
        i++;
    }
}

create_philos(t_paras *paras)
{
    int	i;

    i = 0;
    paras->philos = malloc(sizeof(t_philos) * paras->number_of_philosophers);
    while (i < paras->number_of_philosophers)
    {
        i++;
    }
}