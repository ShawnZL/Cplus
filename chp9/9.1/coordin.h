//
// Created by Shawn on 2022/2/13.
//

#ifndef INC_9_1_COORDIN_H
#define INC_9_1_COORDIN_H

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);


#endif //INC_9_1_COORDIN_H
