    #include <iostream>
    #include <cmath>
    using namespace std;
    const double G = 6.67e-11;

    class spaceship {
    private:
        int posx;
        int posy;
        int posz;
        long speed;

    public:
        spaceship(int x, int y, int z, long spd);
    };

    spaceship::spaceship(int x, int y, int z, long spd) {
        posx = x;
        posy = y;
        posz = z;
        speed = spd;
    }


    class celestialbody {
    private:
        int posX;
        int posY;
        int posZ;
        float Fg;

    public:
        celestialbody(int x, int y, int z, float fg);
        double time(int distance, long speed);
    };

    celestialbody::celestialbody(int x, int y, int z, float fg)
    {
        posX = x;
        posY = y;
        posZ = z;
        Fg = fg;
    }

    double celestialbody::time(int distance, long speed) {
        if (distance == 0) {
            return 0.0;
        }
        double distance_meters = distance * 1.0; // Convert distance to meters
        double speed_mps = speed * 1.0; // Convert speed to meters per second
        return (distance_meters / speed_mps);
    }
    int distancebetween2obj(int x1, int y1, int z1, int x2, int y2, int z2) { //distance in meters
        return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    }
        int main(){
        int xbody, ybody, zbody;
        float gravity;
        long speed;
        int xship, yship, zship;
        int distance;
        double shipmass, bodymass;
        cout << "Enter celestial Body data: (x,y,z,gravity)" << endl; //gravity in newton m/s^2
        cin >> xbody >> ybody >> zbody >> gravity;
        cout << "Enter space ship data:(x,y,z,speed)" << endl; //speed m/s
        cin >> xship >> yship >> zship >> speed;
        celestialbody body(xbody, ybody, zbody, gravity);
        spaceship ship(xship, yship, zship, speed);
        distance = distancebetween2obj(xbody, ybody, zbody, xship, yship, zship);
        cout << "Time needed to travel "<<distance<<" meter with vlocity "<<speed <<" is "<< body.time(distance, speed) << " Seconds " << endl;
        return 0;}
    
