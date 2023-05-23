#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    float x;
    float y;
    char *data;
} Point;

typedef struct
{
    int num_points;
    Point *points;
} Map;

Map *create_map(int num_points)
{
    Map *map = (Map *)malloc(sizeof(Map));
    if (map == NULL)
    {
        printf("Erro: não foi possível alocar memória para o mapa\n");
        exit(1);
    }
    map->num_points = num_points;
    map->points = (Point *)malloc(num_points * sizeof(Point));
    if (map->points == NULL)
    {
        printf("Erro: não foi possível alocar memória para os pontos do mapa\n");
        exit(1);
    }
    return map;
}

void add_point(Map *map, int id, float x, float y, char *data)
{
    Point *point = &(map->points[map->num_points]);
    point->id = id;
    point->x = x;
    point->y = y;
    point->data = data;
    map->num_points++;
}

void print_map(Map *map)
{
    printf("Mapa com %d pontos:\n", map->num_points);
    for (int i = 0; i < map->num_points; i++)
    {
        Point *point = &(map->points[i]);
        printf("Ponto %d: x=%f y=%f dados=%s\n", point->id, point->x, point->y, point->data);
    }
}

int main()
{
    int num_points;
    printf("Digite o número de pontos no mapa: ");
    scanf("%d", &num_points);

    Map *map = create_map(num_points);

    for (int i = 0; i < num_points; i++)
    {
        int id;
        float x, y;
        char data[256];
        printf("Digite as coordenadas e os dados do ponto %d (id x y dados): ", i + 1);
        scanf("%d %f %f %[^\n]", &id, &x, &y, data);
        add_point(map, id, x, y, data);
    }

    print_map(map);

    free(map->points);
    free(map);

    return 0;
}
