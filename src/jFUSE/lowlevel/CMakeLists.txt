
cmake_minimum_required(VERSION 2.6)
project(jFUSE Java)

find_package(Java)
include(UseJava)

add_subdirectory(lib)

FILE(GLOB source
    "${CMAKE_CURRENT_SOURCE_DIR}/*.java"
)

add_jar(jFUSE ${source})

#SET(JAVA_SRC fuselib.java JFuseFS.java FuseRequest.java FuseEntryParam.java 
#    Mode.java FuseStat.java FileInfo.java FuseCTX.java ConnInfo.java 
#    FLock.java FuseException.java FuseErrno.java FuseArgs.java FuseOpt.java
#    FuseBuffer.java FuseBufferCopyFlags.java Splice.java)*/
#include_directories(../..)
#add_library(jFUSE ${JAVA_SRC})
