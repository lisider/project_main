INCLUDE_DIRECTORIES(../inc)

AUX_SOURCE_DIRECTORY(. AM)
#AUX_SOURCE_DIRECTORY(aee AEE)
#AUX_SOURCE_DIRECTORY(amb AMB)
ADD_SUBDIRECTORY(aee )
ADD_SUBDIRECTORY(amb )

#ADD_LIBRARY(am ${AM} OBJECT  ${AEE}  OBJECT  ${AMB})
ADD_LIBRARY(am ${AM})
TARGET_LINK_LIBRARIES( am aee amb)
