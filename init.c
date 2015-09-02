#include "TH.h"
#include "luaT.h"

#define torch_(NAME) TH_CONCAT_3(torch_, Real, NAME)
#define torch_Tensor TH_CONCAT_STRING_3(torch.,Real,Tensor)
#define zz_(NAME) TH_CONCAT_3(zz_, Real, NAME)

#include "generic/Sigmoid.c"
#include "THGenerateFloatTypes.h"

LUA_EXTERNC DLL_EXPORT int luaopen_libzz(lua_State *L);

int luaopen_libzz(lua_State *L)
{
  lua_newtable(L);
  lua_pushvalue(L, -1);
  lua_setglobal(L, "zz");

  zz_FloatSigmoid_init(L);
  
  zz_DoubleSigmoid_init(L);

  return 1;
}
