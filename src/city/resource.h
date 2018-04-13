#ifndef CITY_RESOURCE_H
#define CITY_RESOURCE_H

#include "city/constants.h"
#include "game/resource.h"

typedef struct {
    int size;
    int items[RESOURCE_MAX];
} resource_list;

int city_resource_count(resource_type resource);

const resource_list *city_resource_get_available();

const resource_list *city_resource_get_available_foods();

resource_trade_status city_resource_trade_status(resource_type resource);
void city_resource_cycle_trade_status(resource_type resource);

int city_resource_is_stockpiled(resource_type resource);
void city_resource_toggle_stockpiled(resource_type resource);

int city_resource_has_workshop_with_room(int workshop_type);

void city_resource_add_to_warehouse(resource_type resource, int amount);
void city_resource_remove_from_warehouse(resource_type resource, int amount);
void city_resource_calculate_warehouse_stocks();

void city_resource_determine_available();

void city_resource_calculate_food_stocks_and_supply_wheat();

void city_resource_calculate_workshop_stocks();

void city_resource_consume_food();

#endif // CITY_RESOURCE_H
