//grkframe.h copyright ( c ) UncStatus++

#ifndef GRKFRAME_H
#define GRKFRAME_H

#define GRKFRAME_X
#define GRKFRAME_Y

class GrkFrame{
public:
 GrkFrame();
 virtual ~GrkFrame();

 int x,y;
 int width, height;

 int FrameScheme;

 void GrkResizeFrame(GrkFrame * pFrame, int _x, int _y, bool bSized);

 bool resizeable;
};


#endif
