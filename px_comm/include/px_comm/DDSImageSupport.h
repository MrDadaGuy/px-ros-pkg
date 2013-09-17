
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from DDSImage.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef DDSImageSupport_248003145_h
#define DDSImageSupport_248003145_h

/* Uses */
#include "DDSImage.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(px_comm_DDSImageTypeSupport, px_comm_DDSImage);

DDS_DATAWRITER_CPP(px_comm_DDSImageDataWriter, px_comm_DDSImage);
DDS_DATAREADER_CPP(px_comm_DDSImageDataReader, px_comm_DDSImageSeq, px_comm_DDSImage);


#else

DDS_TYPESUPPORT_C(px_comm_DDSImageTypeSupport, px_comm_DDSImage);
DDS_DATAWRITER_C(px_comm_DDSImageDataWriter, px_comm_DDSImage);
DDS_DATAREADER_C(px_comm_DDSImageDataReader, px_comm_DDSImageSeq, px_comm_DDSImage);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* DDSImageSupport_248003145_h */