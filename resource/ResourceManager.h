#include<string>
#include<vector>
using namespace std;

class ResourceManager {
    public:
        ResourceManager();
        ~ResourceManager();

    //    void initResource();
    //    bool SearchTicket(Station begin,Station end);
    //    bool SellTicket(Station begin,Station end); 

        void initStationName();
        void initStation();
    private:
        vector<string> m_station_name;
};
