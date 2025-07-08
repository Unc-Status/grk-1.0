//grkicon.h copyright ( c ) UncStatus++ 2025
//praise the Lord

#ifndef GRKICON_H
#define GRKICON_H

//path to the icons
char GRK_ICON_STR_PATH[2048];

class GrkIcon : public char {
public:
 GrkIcon();
 virtual ~GrkIcon();

 bool grkreset;

 void getbuffer();

 void grkloadicon(const char* gicon);

}

#endif
