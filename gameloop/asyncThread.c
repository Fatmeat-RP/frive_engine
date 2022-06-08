#include <thread.h>

thrd_start_t __render()
{
}

int main(int ac, char **av)
{
thrd_t *render_thrd;
t_instance *game;
int render_result;

thrd_create(render_thrd, __render, game);
while(!windowshouldclose)
{
}
thrd_join(render_thrd, &render_result);
return (0);
}