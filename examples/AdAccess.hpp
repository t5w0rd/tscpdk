// Generated by the ProtoType compiler.  DO NOT EDIT!
// File:      AdAccess.hpp
// Create on: Mon Dec 23 16:56:37 2013
//

#ifndef __ADACCESS_HPP__
#define __ADACCESS_HPP__

#include <stdint.h>
#include <string.h>
#include <vector>

namespace AdTriggerServer
{

class CType_stAdAccessInfo
{
public:
    CType_stAdAccessInfo();
    ~CType_stAdAccessInfo();

    uint16_t& wVersion();
    uint16_t& wAdPos();
    uint32_t& dwUin();
    uint32_t& dwRelayUin();
    uint64_t& ddwRootTid();
    uint32_t& dwAdUin();
    uint64_t& ddwAdTid();
    uint32_t& dwTime();
    uint16_t& wInteractType();
    size_t GetNumberOf_acReserved() const;
    uint8_t& acReserved(size_t uIndex);
    uint8_t* acReserved();
    void Assign_acReserved(const uint8_t acReserved[6]);

    size_t SerializeToArray(void* pBuf, size_t uBufSize);
    size_t ParseFromArray(const void* pBuf, size_t uBufSize);

public:
    uint16_t m_wVersion;
    uint16_t m_wAdPos;
    uint32_t m_dwUin;
    uint32_t m_dwRelayUin;
    uint64_t m_ddwRootTid;
    uint32_t m_dwAdUin;
    uint64_t m_ddwAdTid;
    uint32_t m_dwTime;
    uint16_t m_wInteractType;
    uint8_t m_acReserved[6];
};

class CType_stAdAccess
{
public:
    CType_stAdAccess();
    ~CType_stAdAccess();

    uint8_t& cFlags();
    uint32_t& dwSrcAddr();
    uint32_t& dwUin();
    CType_stAdAccessInfo& stAdAccessInfo();
    size_t GetNumberOf_acReserved() const;
    uint8_t& acReserved(size_t uIndex);
    uint8_t* acReserved();
    void Assign_acReserved(const uint8_t acReserved[7]);

    size_t SerializeToArray(void* pBuf, size_t uBufSize);
    size_t ParseFromArray(const void* pBuf, size_t uBufSize);

public:
    uint8_t m_cFlags;
    uint32_t m_dwSrcAddr;
    uint32_t m_dwUin;
    CType_stAdAccessInfo m_stAdAccessInfo;
    uint8_t m_acReserved[7];
};

};



///////////////// - Inline Implementation - /////////////////

namespace AdTriggerServer
{

#ifndef ___constant_swab64
#define ___constant_swab64(x) \
    ((uint64_t)( \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x00000000000000ffULL) << 56) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x000000000000ff00ULL) << 40) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x0000000000ff0000ULL) << 24) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x00000000ff000000ULL) <<  8) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x000000ff00000000ULL) >>  8) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x0000ff0000000000ULL) >> 24) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0x00ff000000000000ULL) >> 40) | \
    (uint64_t)(((uint64_t)(x) & (uint64_t)0xff00000000000000ULL) >> 56) ))
#endif // ___constant_swab64

inline uint64_t htonl64(uint64_t host)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return ___constant_swab64(host);
#else
    return host;
#endif
}

inline uint64_t ntohl64(uint64_t net)
{
#if __BYTE_ORDER == __LITTLE_ENDIAN
    return ___constant_swab64(net);
#else
    return host;
#endif
}

inline CType_stAdAccessInfo::CType_stAdAccessInfo()
: m_wVersion(uint16_t()), m_wAdPos(uint16_t()), m_dwUin(uint32_t()), m_dwRelayUin(uint32_t()), m_ddwRootTid(uint64_t()), m_dwAdUin(uint32_t()), m_ddwAdTid(uint64_t()), m_dwTime(uint32_t()), m_wInteractType(uint16_t())
{
    memset(m_acReserved, 0, sizeof(m_acReserved));
}

inline CType_stAdAccessInfo::~CType_stAdAccessInfo()
{
}

inline uint16_t& CType_stAdAccessInfo::wVersion()
{
    return m_wVersion;
}

inline uint16_t& CType_stAdAccessInfo::wAdPos()
{
    return m_wAdPos;
}

inline uint32_t& CType_stAdAccessInfo::dwUin()
{
    return m_dwUin;
}

inline uint32_t& CType_stAdAccessInfo::dwRelayUin()
{
    return m_dwRelayUin;
}

inline uint64_t& CType_stAdAccessInfo::ddwRootTid()
{
    return m_ddwRootTid;
}

inline uint32_t& CType_stAdAccessInfo::dwAdUin()
{
    return m_dwAdUin;
}

inline uint64_t& CType_stAdAccessInfo::ddwAdTid()
{
    return m_ddwAdTid;
}

inline uint32_t& CType_stAdAccessInfo::dwTime()
{
    return m_dwTime;
}

inline uint16_t& CType_stAdAccessInfo::wInteractType()
{
    return m_wInteractType;
}

inline size_t CType_stAdAccessInfo::GetNumberOf_acReserved() const
{
    return 6;
}

inline uint8_t& CType_stAdAccessInfo::acReserved(size_t uIndex)
{
    assert(uIndex < GetNumberOf_acReserved());
    return m_acReserved[uIndex];
}

inline uint8_t* CType_stAdAccessInfo::acReserved()
{
    return &m_acReserved[0];
}

inline void CType_stAdAccessInfo::Assign_acReserved(const uint8_t acReserved[6])
{
    memcpy(m_acReserved, acReserved, sizeof(m_acReserved));
}

inline size_t CType_stAdAccessInfo::SerializeToArray(void* pBuf, size_t uBufSize)
{
    size_t uSize = 0;
    char* pPos = (char*)pBuf + uSize;

    *(uint16_t*)pPos = htons(m_wVersion);
    pPos += sizeof(m_wVersion);

    *(uint16_t*)pPos = htons(m_wAdPos);
    pPos += sizeof(m_wAdPos);

    *(uint32_t*)pPos = htonl(m_dwUin);
    pPos += sizeof(m_dwUin);

    *(uint32_t*)pPos = htonl(m_dwRelayUin);
    pPos += sizeof(m_dwRelayUin);

    *(uint64_t*)pPos = htonl64(m_ddwRootTid);
    pPos += sizeof(m_ddwRootTid);

    *(uint32_t*)pPos = htonl(m_dwAdUin);
    pPos += sizeof(m_dwAdUin);

    *(uint64_t*)pPos = htonl64(m_ddwAdTid);
    pPos += sizeof(m_ddwAdTid);

    *(uint32_t*)pPos = htonl(m_dwTime);
    pPos += sizeof(m_dwTime);

    *(uint16_t*)pPos = htons(m_wInteractType);
    pPos += sizeof(m_wInteractType);

    uSize = GetNumberOf_acReserved() * sizeof(uint8_t);
    memcpy(pPos, &m_acReserved[0], uSize);
    pPos += uSize;

    return (size_t)pPos - (size_t)pBuf;
}

inline size_t CType_stAdAccessInfo::ParseFromArray(const void* pBuf, size_t uBufSize)
{
    size_t uSize = 0;
    const char* pPos = (const char*)pBuf + uSize;

    m_wVersion = ntohs(*(uint16_t*)pPos);
    pPos += sizeof(m_wVersion);

    m_wAdPos = ntohs(*(uint16_t*)pPos);
    pPos += sizeof(m_wAdPos);

    m_dwUin = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwUin);

    m_dwRelayUin = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwRelayUin);

    m_ddwRootTid = ntohl64(*(uint64_t*)pPos);
    pPos += sizeof(m_ddwRootTid);

    m_dwAdUin = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwAdUin);

    m_ddwAdTid = ntohl64(*(uint64_t*)pPos);
    pPos += sizeof(m_ddwAdTid);

    m_dwTime = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwTime);

    m_wInteractType = ntohs(*(uint16_t*)pPos);
    pPos += sizeof(m_wInteractType);

    uSize = GetNumberOf_acReserved() * sizeof(uint8_t);
    memcpy(&m_acReserved[0], pPos, uSize);
    pPos += uSize;

    return (size_t)pPos - (size_t)pBuf;
}

inline CType_stAdAccess::CType_stAdAccess()
: m_cFlags(uint8_t()), m_dwSrcAddr(uint32_t()), m_dwUin(uint32_t())
{
    memset(m_acReserved, 0, sizeof(m_acReserved));
}

inline CType_stAdAccess::~CType_stAdAccess()
{
}

inline uint8_t& CType_stAdAccess::cFlags()
{
    return m_cFlags;
}

inline uint32_t& CType_stAdAccess::dwSrcAddr()
{
    return m_dwSrcAddr;
}

inline uint32_t& CType_stAdAccess::dwUin()
{
    return m_dwUin;
}

inline CType_stAdAccessInfo& CType_stAdAccess::stAdAccessInfo()
{
    return m_stAdAccessInfo;
}

inline size_t CType_stAdAccess::GetNumberOf_acReserved() const
{
    return 7;
}

inline uint8_t& CType_stAdAccess::acReserved(size_t uIndex)
{
    assert(uIndex < GetNumberOf_acReserved());
    return m_acReserved[uIndex];
}

inline uint8_t* CType_stAdAccess::acReserved()
{
    return &m_acReserved[0];
}

inline void CType_stAdAccess::Assign_acReserved(const uint8_t acReserved[7])
{
    memcpy(m_acReserved, acReserved, sizeof(m_acReserved));
}

inline size_t CType_stAdAccess::SerializeToArray(void* pBuf, size_t uBufSize)
{
    size_t uSize = 0;
    char* pPos = (char*)pBuf + uSize;

    *(uint8_t*)pPos = m_cFlags;
    pPos += sizeof(m_cFlags);

    *(uint32_t*)pPos = htonl(m_dwSrcAddr);
    pPos += sizeof(m_dwSrcAddr);

    *(uint32_t*)pPos = htonl(m_dwUin);
    pPos += sizeof(m_dwUin);

    uSize = m_stAdAccessInfo.SerializeToArray(pPos, uBufSize - (size_t)pPos + (size_t)pBuf);
    pPos += uSize;

    uSize = GetNumberOf_acReserved() * sizeof(uint8_t);
    memcpy(pPos, &m_acReserved[0], uSize);
    pPos += uSize;

    return (size_t)pPos - (size_t)pBuf;
}

inline size_t CType_stAdAccess::ParseFromArray(const void* pBuf, size_t uBufSize)
{
    size_t uSize = 0;
    const char* pPos = (const char*)pBuf + uSize;

    m_cFlags = *(uint8_t*)pPos;
    pPos += sizeof(m_cFlags);

    m_dwSrcAddr = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwSrcAddr);

    m_dwUin = ntohl(*(uint32_t*)pPos);
    pPos += sizeof(m_dwUin);

    uSize = m_stAdAccessInfo.ParseFromArray(pPos, uBufSize - (size_t)pPos + (size_t)pBuf);
    pPos += uSize;

    uSize = GetNumberOf_acReserved() * sizeof(uint8_t);
    memcpy(&m_acReserved[0], pPos, uSize);
    pPos += uSize;

    return (size_t)pPos - (size_t)pBuf;
}

};

#endif  //  __ADACCESS_HPP__
