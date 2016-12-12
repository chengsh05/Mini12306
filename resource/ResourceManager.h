#include<string>
#include<vector>

#include "Station.h"

using namespace std;

class ResourceManager {
    public:
        ResourceManager();
        ~ResourceManager();

        void initMap();
    //    bool SearchTicket(Station begin,Station end);
    //    bool SellTicket(Station begin,Station end); 

        void initStationName();
        void initStation();
    private:
        vector<string> m_station_name;
        vector<Station> m_station_map;
};
