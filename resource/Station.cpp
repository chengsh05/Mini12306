#include "Station.h"
using namespace std;

Station::Station(bool is_head,int map_key,string station_name)
    : m_is_head(is_head)
    , m_map_key(map_key)
    , m_station_name(station_name)
    , m_next_station(nullptr) 
{

}

void Station::setNextStation(string nextStation,int map_key)
{
   //TODO:: effectiveness is low and improve it
    if(m_next_station == nullptr)
    {
        m_next_station = new Station(false,map_key,station_name);
        return ;
    }

    Station * temp_ptr = m_next_station->getNextStation();
    if(temp_ptr != nullptr)
        temp_ptr->setNextStation(nextStation,map_key);
}

Station::~Station()
{
    m_next_station = nullptr;
}

