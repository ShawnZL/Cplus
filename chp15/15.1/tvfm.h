//
// Created by Shawn Zhao on 2022/4/24.
//

#ifndef INC_15_1_TVFM_H
#define INC_15_1_TVFM_H

class Tv; // forward declaration

class Remote{
public:
    enum State{Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};
private:
    int mode;
public:
    Remote(int m = TV) : mode(m) {}
    bool volup(Tv & t);  //prototype only
    bool voldown(Tv & t);
    void onoff(Tv & t);
    void chanup(Tv & t);
    void chandown(Tv & t);
    void set_mode(Tv & t);
    void set_input(Tv & t);
    void set_chan(Tv & t, int c);
};

class Tv {
public:
    friend void Remote::set_chan(Tv &t, int c);
    enum State{Off, On};
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

// Remote methods as inline functions
inline bool Remote::volup(Tv & t) { return t.volup();}
inline bool Remote::voldown(Tv &t) { return t.voldown();}
inline void Remote::onoff(Tv &t) { t.onoff();}
inline void Remote::chanup(Tv &t) { t.chanup();}
inline void Remote::chandown(Tv &t) { t.chandown();}
inline void Remote::set_mode(Tv &t) { t.set_mode();}
inline void Remote::set_input(Tv &t) { t.set_input();}
inline void Remote::set_chan(Tv &t, int c) { t.channel = c;}
#endif //INC_15_1_TVFM_H
