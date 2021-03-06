#ifndef Map_h
#define Map_h

#include <memory>
#include <vector>

class Frame;
class MapPoint;

class Map {

public:
    std::vector<std::shared_ptr<Frame>> frames;
    std::vector<std::shared_ptr<MapPoint>> mapPoints;
    int maxFrame = 0, maxPoint = 0;

    //TODO: to implement last
    /* void serialize(char** filepath); */
    /* void deserialize(char** filepath); */

    int add_point(std::shared_ptr<MapPoint> point);
    int add_frame(std::shared_ptr<Frame> frame);

};

#endif
