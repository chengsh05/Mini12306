//#include "resource/Station.h"
#include "ResourceManager.h"
#include "Station.h"

#include<iostream>

using namespace std;

#define STATION_NUM 14

ResourceManager::ResourceManager(){
}

ResourceManager::~ResourceManager(){
}
void ResourceManager::initStationName()
{
    //make sure stationName number is STATION_NUM
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
    vector<Station> stationMap(STATION_NUM);

    initStationName();

    for(int i = 0;i<STATION_NUM;i++)
        stationMap[i]= new Station(true,i,m_station_name[i]);

    //Test : make sure stationMap OK 
    for(i = 0;i<STATION_NUM;i++)
        cout<<"Station "<<i<<"  :"<<stationMap[i].getStationName();
}

int main()
{
    ResourceManager temp = new ResourceManager();
    temp.initStation();
    return 0;
}
