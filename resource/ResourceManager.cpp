//#include "resource/Station.h"
#include <iostream>
#include <vector>

#include "ResourceManager.h"



using namespace std;

#define STATION_NUM 14

ResourceManager::ResourceManager(){
}

ResourceManager::~ResourceManager(){
}
void ResourceManager::initStationName()
{
    //make sure stationName number is STATION_NUM
    //TODO: Make sure push_back can't overflow
    m_station_name.push_back("BJ");
    m_station_name.push_back("SH");
    m_station_name.push_back("TJ");
    m_station_name.push_back("HZ");
    m_station_name.push_back("GZ");
    m_station_name.push_back("NJ");
    m_station_name.push_back("SZ");
    m_station_name.push_back("WH");
    m_station_name.push_back("CQ");
    m_station_name.push_back("CD");
    m_station_name.push_back("DL");
    m_station_name.push_back("XM");
    m_station_name.push_back("NJ");
    m_station_name.push_back("ZZ");
}

void ResourceManager::initStation()
{
    vector<Station> stationMap;

    initStationName();
    
    int i =0;
    for(vector<string>::iterator it = m_station_name.begin(); it != m_station_name.end(); ++it) 
    {
        Station tmpsta = Station(true,i,*it);
        stationMap.push_back(tmpsta);
        i++;
    }
    //Test : make sure stationMap OK 
    for(vector<Station>::iterator it_map = stationMap.begin();it_map != stationMap.end(); ++it_map ) 
        cout<<"station name:"<<it_map->getStationName()<<endl;
}

int main()
{
    ResourceManager temp = ResourceManager();
    temp.initStation();
    return 0;
}
