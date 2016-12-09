#include "Station.h"

Station::Station(bool is_head,int map_key,string station_name)
    : m_is_head(is_head)
    , m_map_key(map_key)
    , m_station_name(station_name)
    , m_next_station(nullptr) 
{

}

Station::~Station()
{

}

