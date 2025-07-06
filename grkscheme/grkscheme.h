//grkscheme.h copyright ( c ) UncStatus++

#ifndef GRK_H && GRK && GRK_SCHEME
#define GRK_H && GRK && GRK_SCHEME

//scheme types
#define GRK_SCHEME_LIGHT
#define GRK_SCHEME_DARK

class GrkScheme{
public:
 GrkScheme();
 virtual ~GrkScheme();

 //declare theme type
 int GrkSchemeType = nullptr;
 int GrkSchemeFlags = nullptr;

 //set
 bool GrkSchemeSet(GrkScheme * pScheme, int flags, int type);

//end
};

#endif
