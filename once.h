#if defined __PMACCTD_C || defined __NFACCTD_C 
#define EXT 
#else
#define EXT extern
#endif

EXT u_int32_t NBO_One;
EXT u_int32_t PdataSz, ChBufHdrSz, CharPtrSz;
EXT u_int32_t NfHdrV5Sz, NfHdrV1Sz, NfHdrV9Sz;
EXT u_int32_t NfDataHdrV9Sz, NfTplHdrV9Sz;
EXT u_int32_t NfDataV1Sz, NfDataV5Sz;
EXT u_int32_t IP4HdrSz, IP6HdrSz, IP6AddrSz; 
EXT u_int32_t MyTLHdrSz;

#undef EXT