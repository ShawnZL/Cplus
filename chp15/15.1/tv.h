//
// Created by Shawn Zhao on 2022/4/24.
//

#ifndef INC_15_1_TV_H
#define INC_15_1_TV_H

class Tv {
public:
    friend class Remote; //remote can access Tv private parts
    enum {Off, On}; //枚举定义int!!!
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv (int s = Off, int mc = 125): state(s), volume(5),
            maxchannel(mc), channel(2), mode(Cable), input(TV) {}
//    void onoff() {state = (state == On)? Off: On;}
    void onoff() {state ^= 1;} //异或 值相同定义为0， 不同定义为1
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
//    void set_input() {input = (input == TV)? DVD : TV;}
    void set_input() {input ^= 1;}
    void settings() const; // display all settings

private:
    int state; //On or Off
    int volume; // assumed to be digitized
    int maxchannel; //maxinum number of channels
    int channel; //current channel setting
    int mode; //broadcast or cable 广播or电缆
    int input; //Tv or DVD
};

class Remote {
private:
    int mode; //control TV or DVD
public:
    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv & t) { return t.volup();}
    bool voldown(Tv & t) {return t.voldown();}
    void onoff(Tv & t) { t.onoff();}
    void chanup(Tv & t) { t.chanup();}
    void chandown(Tv & t) { t.chandown();}
    void set_chan(Tv & t, int c) { t.channel = c;}
    void set_mode(Tv & t) {t.set_mode();}
    void set_input(Tv & t) {t.set_input();}
};
#endif //INC_15_1_TV_H
