/* Generated from Opc.Ua.Types.bsd with script C:/M/mingw-w64-open62541/src/open62541/tools/generate_datatypes.py
 * on host fv-az140-604 by user runneradmin at 2022-06-24 02:41:05 */

#ifndef TYPES_GENERATED_HANDLING_H_
#define TYPES_GENERATED_HANDLING_H_

#include "types_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* Boolean */
static UA_INLINE void
UA_Boolean_init(UA_Boolean *p) {
    memset(p, 0, sizeof(UA_Boolean));
}

static UA_INLINE UA_Boolean *
UA_Boolean_new(void) {
    return (UA_Boolean*)UA_new(&UA_TYPES[UA_TYPES_BOOLEAN]);
}

static UA_INLINE UA_StatusCode
UA_Boolean_copy(const UA_Boolean *src, UA_Boolean *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BOOLEAN]);
}

UA_DEPRECATED static UA_INLINE void
UA_Boolean_deleteMembers(UA_Boolean *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BOOLEAN]);
}

static UA_INLINE void
UA_Boolean_clear(UA_Boolean *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BOOLEAN]);
}

static UA_INLINE void
UA_Boolean_delete(UA_Boolean *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BOOLEAN]);
}

/* SByte */
static UA_INLINE void
UA_SByte_init(UA_SByte *p) {
    memset(p, 0, sizeof(UA_SByte));
}

static UA_INLINE UA_SByte *
UA_SByte_new(void) {
    return (UA_SByte*)UA_new(&UA_TYPES[UA_TYPES_SBYTE]);
}

static UA_INLINE UA_StatusCode
UA_SByte_copy(const UA_SByte *src, UA_SByte *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SBYTE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SByte_deleteMembers(UA_SByte *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SBYTE]);
}

static UA_INLINE void
UA_SByte_clear(UA_SByte *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SBYTE]);
}

static UA_INLINE void
UA_SByte_delete(UA_SByte *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SBYTE]);
}

/* Byte */
static UA_INLINE void
UA_Byte_init(UA_Byte *p) {
    memset(p, 0, sizeof(UA_Byte));
}

static UA_INLINE UA_Byte *
UA_Byte_new(void) {
    return (UA_Byte*)UA_new(&UA_TYPES[UA_TYPES_BYTE]);
}

static UA_INLINE UA_StatusCode
UA_Byte_copy(const UA_Byte *src, UA_Byte *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BYTE]);
}

UA_DEPRECATED static UA_INLINE void
UA_Byte_deleteMembers(UA_Byte *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BYTE]);
}

static UA_INLINE void
UA_Byte_clear(UA_Byte *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BYTE]);
}

static UA_INLINE void
UA_Byte_delete(UA_Byte *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BYTE]);
}

/* Int16 */
static UA_INLINE void
UA_Int16_init(UA_Int16 *p) {
    memset(p, 0, sizeof(UA_Int16));
}

static UA_INLINE UA_Int16 *
UA_Int16_new(void) {
    return (UA_Int16*)UA_new(&UA_TYPES[UA_TYPES_INT16]);
}

static UA_INLINE UA_StatusCode
UA_Int16_copy(const UA_Int16 *src, UA_Int16 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_INT16]);
}

UA_DEPRECATED static UA_INLINE void
UA_Int16_deleteMembers(UA_Int16 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT16]);
}

static UA_INLINE void
UA_Int16_clear(UA_Int16 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT16]);
}

static UA_INLINE void
UA_Int16_delete(UA_Int16 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_INT16]);
}

/* UInt16 */
static UA_INLINE void
UA_UInt16_init(UA_UInt16 *p) {
    memset(p, 0, sizeof(UA_UInt16));
}

static UA_INLINE UA_UInt16 *
UA_UInt16_new(void) {
    return (UA_UInt16*)UA_new(&UA_TYPES[UA_TYPES_UINT16]);
}

static UA_INLINE UA_StatusCode
UA_UInt16_copy(const UA_UInt16 *src, UA_UInt16 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UINT16]);
}

UA_DEPRECATED static UA_INLINE void
UA_UInt16_deleteMembers(UA_UInt16 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT16]);
}

static UA_INLINE void
UA_UInt16_clear(UA_UInt16 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT16]);
}

static UA_INLINE void
UA_UInt16_delete(UA_UInt16 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UINT16]);
}

/* Int32 */
static UA_INLINE void
UA_Int32_init(UA_Int32 *p) {
    memset(p, 0, sizeof(UA_Int32));
}

static UA_INLINE UA_Int32 *
UA_Int32_new(void) {
    return (UA_Int32*)UA_new(&UA_TYPES[UA_TYPES_INT32]);
}

static UA_INLINE UA_StatusCode
UA_Int32_copy(const UA_Int32 *src, UA_Int32 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_INT32]);
}

UA_DEPRECATED static UA_INLINE void
UA_Int32_deleteMembers(UA_Int32 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT32]);
}

static UA_INLINE void
UA_Int32_clear(UA_Int32 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT32]);
}

static UA_INLINE void
UA_Int32_delete(UA_Int32 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_INT32]);
}

/* UInt32 */
static UA_INLINE void
UA_UInt32_init(UA_UInt32 *p) {
    memset(p, 0, sizeof(UA_UInt32));
}

static UA_INLINE UA_UInt32 *
UA_UInt32_new(void) {
    return (UA_UInt32*)UA_new(&UA_TYPES[UA_TYPES_UINT32]);
}

static UA_INLINE UA_StatusCode
UA_UInt32_copy(const UA_UInt32 *src, UA_UInt32 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UINT32]);
}

UA_DEPRECATED static UA_INLINE void
UA_UInt32_deleteMembers(UA_UInt32 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT32]);
}

static UA_INLINE void
UA_UInt32_clear(UA_UInt32 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT32]);
}

static UA_INLINE void
UA_UInt32_delete(UA_UInt32 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UINT32]);
}

/* Int64 */
static UA_INLINE void
UA_Int64_init(UA_Int64 *p) {
    memset(p, 0, sizeof(UA_Int64));
}

static UA_INLINE UA_Int64 *
UA_Int64_new(void) {
    return (UA_Int64*)UA_new(&UA_TYPES[UA_TYPES_INT64]);
}

static UA_INLINE UA_StatusCode
UA_Int64_copy(const UA_Int64 *src, UA_Int64 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_INT64]);
}

UA_DEPRECATED static UA_INLINE void
UA_Int64_deleteMembers(UA_Int64 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT64]);
}

static UA_INLINE void
UA_Int64_clear(UA_Int64 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INT64]);
}

static UA_INLINE void
UA_Int64_delete(UA_Int64 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_INT64]);
}

/* UInt64 */
static UA_INLINE void
UA_UInt64_init(UA_UInt64 *p) {
    memset(p, 0, sizeof(UA_UInt64));
}

static UA_INLINE UA_UInt64 *
UA_UInt64_new(void) {
    return (UA_UInt64*)UA_new(&UA_TYPES[UA_TYPES_UINT64]);
}

static UA_INLINE UA_StatusCode
UA_UInt64_copy(const UA_UInt64 *src, UA_UInt64 *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UINT64]);
}

UA_DEPRECATED static UA_INLINE void
UA_UInt64_deleteMembers(UA_UInt64 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT64]);
}

static UA_INLINE void
UA_UInt64_clear(UA_UInt64 *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UINT64]);
}

static UA_INLINE void
UA_UInt64_delete(UA_UInt64 *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UINT64]);
}

/* Float */
static UA_INLINE void
UA_Float_init(UA_Float *p) {
    memset(p, 0, sizeof(UA_Float));
}

static UA_INLINE UA_Float *
UA_Float_new(void) {
    return (UA_Float*)UA_new(&UA_TYPES[UA_TYPES_FLOAT]);
}

static UA_INLINE UA_StatusCode
UA_Float_copy(const UA_Float *src, UA_Float *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FLOAT]);
}

UA_DEPRECATED static UA_INLINE void
UA_Float_deleteMembers(UA_Float *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FLOAT]);
}

static UA_INLINE void
UA_Float_clear(UA_Float *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FLOAT]);
}

static UA_INLINE void
UA_Float_delete(UA_Float *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FLOAT]);
}

/* Double */
static UA_INLINE void
UA_Double_init(UA_Double *p) {
    memset(p, 0, sizeof(UA_Double));
}

static UA_INLINE UA_Double *
UA_Double_new(void) {
    return (UA_Double*)UA_new(&UA_TYPES[UA_TYPES_DOUBLE]);
}

static UA_INLINE UA_StatusCode
UA_Double_copy(const UA_Double *src, UA_Double *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DOUBLE]);
}

UA_DEPRECATED static UA_INLINE void
UA_Double_deleteMembers(UA_Double *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DOUBLE]);
}

static UA_INLINE void
UA_Double_clear(UA_Double *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DOUBLE]);
}

static UA_INLINE void
UA_Double_delete(UA_Double *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DOUBLE]);
}

/* String */
static UA_INLINE void
UA_String_init(UA_String *p) {
    memset(p, 0, sizeof(UA_String));
}

static UA_INLINE UA_String *
UA_String_new(void) {
    return (UA_String*)UA_new(&UA_TYPES[UA_TYPES_STRING]);
}

static UA_INLINE UA_StatusCode
UA_String_copy(const UA_String *src, UA_String *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_String_deleteMembers(UA_String *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRING]);
}

static UA_INLINE void
UA_String_clear(UA_String *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRING]);
}

static UA_INLINE void
UA_String_delete(UA_String *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STRING]);
}

/* DateTime */
static UA_INLINE void
UA_DateTime_init(UA_DateTime *p) {
    memset(p, 0, sizeof(UA_DateTime));
}

static UA_INLINE UA_DateTime *
UA_DateTime_new(void) {
    return (UA_DateTime*)UA_new(&UA_TYPES[UA_TYPES_DATETIME]);
}

static UA_INLINE UA_StatusCode
UA_DateTime_copy(const UA_DateTime *src, UA_DateTime *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATETIME]);
}

UA_DEPRECATED static UA_INLINE void
UA_DateTime_deleteMembers(UA_DateTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATETIME]);
}

static UA_INLINE void
UA_DateTime_clear(UA_DateTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATETIME]);
}

static UA_INLINE void
UA_DateTime_delete(UA_DateTime *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATETIME]);
}

/* Guid */
static UA_INLINE void
UA_Guid_init(UA_Guid *p) {
    memset(p, 0, sizeof(UA_Guid));
}

static UA_INLINE UA_Guid *
UA_Guid_new(void) {
    return (UA_Guid*)UA_new(&UA_TYPES[UA_TYPES_GUID]);
}

static UA_INLINE UA_StatusCode
UA_Guid_copy(const UA_Guid *src, UA_Guid *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GUID]);
}

UA_DEPRECATED static UA_INLINE void
UA_Guid_deleteMembers(UA_Guid *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GUID]);
}

static UA_INLINE void
UA_Guid_clear(UA_Guid *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GUID]);
}

static UA_INLINE void
UA_Guid_delete(UA_Guid *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_GUID]);
}

/* ByteString */
static UA_INLINE void
UA_ByteString_init(UA_ByteString *p) {
    memset(p, 0, sizeof(UA_ByteString));
}

static UA_INLINE UA_ByteString *
UA_ByteString_new(void) {
    return (UA_ByteString*)UA_new(&UA_TYPES[UA_TYPES_BYTESTRING]);
}

static UA_INLINE UA_StatusCode
UA_ByteString_copy(const UA_ByteString *src, UA_ByteString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BYTESTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_ByteString_deleteMembers(UA_ByteString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BYTESTRING]);
}

static UA_INLINE void
UA_ByteString_clear(UA_ByteString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BYTESTRING]);
}

static UA_INLINE void
UA_ByteString_delete(UA_ByteString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BYTESTRING]);
}

/* XmlElement */
static UA_INLINE void
UA_XmlElement_init(UA_XmlElement *p) {
    memset(p, 0, sizeof(UA_XmlElement));
}

static UA_INLINE UA_XmlElement *
UA_XmlElement_new(void) {
    return (UA_XmlElement*)UA_new(&UA_TYPES[UA_TYPES_XMLELEMENT]);
}

static UA_INLINE UA_StatusCode
UA_XmlElement_copy(const UA_XmlElement *src, UA_XmlElement *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_XMLELEMENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_XmlElement_deleteMembers(UA_XmlElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_XMLELEMENT]);
}

static UA_INLINE void
UA_XmlElement_clear(UA_XmlElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_XMLELEMENT]);
}

static UA_INLINE void
UA_XmlElement_delete(UA_XmlElement *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_XMLELEMENT]);
}

/* NodeId */
static UA_INLINE void
UA_NodeId_init(UA_NodeId *p) {
    memset(p, 0, sizeof(UA_NodeId));
}

static UA_INLINE UA_NodeId *
UA_NodeId_new(void) {
    return (UA_NodeId*)UA_new(&UA_TYPES[UA_TYPES_NODEID]);
}

static UA_INLINE UA_StatusCode
UA_NodeId_copy(const UA_NodeId *src, UA_NodeId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEID]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeId_deleteMembers(UA_NodeId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEID]);
}

static UA_INLINE void
UA_NodeId_clear(UA_NodeId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEID]);
}

static UA_INLINE void
UA_NodeId_delete(UA_NodeId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODEID]);
}

/* ExpandedNodeId */
static UA_INLINE void
UA_ExpandedNodeId_init(UA_ExpandedNodeId *p) {
    memset(p, 0, sizeof(UA_ExpandedNodeId));
}

static UA_INLINE UA_ExpandedNodeId *
UA_ExpandedNodeId_new(void) {
    return (UA_ExpandedNodeId*)UA_new(&UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}

static UA_INLINE UA_StatusCode
UA_ExpandedNodeId_copy(const UA_ExpandedNodeId *src, UA_ExpandedNodeId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}

UA_DEPRECATED static UA_INLINE void
UA_ExpandedNodeId_deleteMembers(UA_ExpandedNodeId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}

static UA_INLINE void
UA_ExpandedNodeId_clear(UA_ExpandedNodeId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}

static UA_INLINE void
UA_ExpandedNodeId_delete(UA_ExpandedNodeId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]);
}

/* StatusCode */
static UA_INLINE void
UA_StatusCode_init(UA_StatusCode *p) {
    memset(p, 0, sizeof(UA_StatusCode));
}

static UA_INLINE UA_StatusCode *
UA_StatusCode_new(void) {
    return (UA_StatusCode*)UA_new(&UA_TYPES[UA_TYPES_STATUSCODE]);
}

static UA_INLINE UA_StatusCode
UA_StatusCode_copy(const UA_StatusCode *src, UA_StatusCode *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STATUSCODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StatusCode_deleteMembers(UA_StatusCode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSCODE]);
}

static UA_INLINE void
UA_StatusCode_clear(UA_StatusCode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSCODE]);
}

static UA_INLINE void
UA_StatusCode_delete(UA_StatusCode *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STATUSCODE]);
}

/* QualifiedName */
static UA_INLINE void
UA_QualifiedName_init(UA_QualifiedName *p) {
    memset(p, 0, sizeof(UA_QualifiedName));
}

static UA_INLINE UA_QualifiedName *
UA_QualifiedName_new(void) {
    return (UA_QualifiedName*)UA_new(&UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}

static UA_INLINE UA_StatusCode
UA_QualifiedName_copy(const UA_QualifiedName *src, UA_QualifiedName *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}

UA_DEPRECATED static UA_INLINE void
UA_QualifiedName_deleteMembers(UA_QualifiedName *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}

static UA_INLINE void
UA_QualifiedName_clear(UA_QualifiedName *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}

static UA_INLINE void
UA_QualifiedName_delete(UA_QualifiedName *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
}

/* LocalizedText */
static UA_INLINE void
UA_LocalizedText_init(UA_LocalizedText *p) {
    memset(p, 0, sizeof(UA_LocalizedText));
}

static UA_INLINE UA_LocalizedText *
UA_LocalizedText_new(void) {
    return (UA_LocalizedText*)UA_new(&UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}

static UA_INLINE UA_StatusCode
UA_LocalizedText_copy(const UA_LocalizedText *src, UA_LocalizedText *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}

UA_DEPRECATED static UA_INLINE void
UA_LocalizedText_deleteMembers(UA_LocalizedText *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}

static UA_INLINE void
UA_LocalizedText_clear(UA_LocalizedText *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}

static UA_INLINE void
UA_LocalizedText_delete(UA_LocalizedText *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
}

/* ExtensionObject */
static UA_INLINE void
UA_ExtensionObject_init(UA_ExtensionObject *p) {
    memset(p, 0, sizeof(UA_ExtensionObject));
}

static UA_INLINE UA_ExtensionObject *
UA_ExtensionObject_new(void) {
    return (UA_ExtensionObject*)UA_new(&UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}

static UA_INLINE UA_StatusCode
UA_ExtensionObject_copy(const UA_ExtensionObject *src, UA_ExtensionObject *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ExtensionObject_deleteMembers(UA_ExtensionObject *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}

static UA_INLINE void
UA_ExtensionObject_clear(UA_ExtensionObject *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}

static UA_INLINE void
UA_ExtensionObject_delete(UA_ExtensionObject *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]);
}

/* DataValue */
static UA_INLINE void
UA_DataValue_init(UA_DataValue *p) {
    memset(p, 0, sizeof(UA_DataValue));
}

static UA_INLINE UA_DataValue *
UA_DataValue_new(void) {
    return (UA_DataValue*)UA_new(&UA_TYPES[UA_TYPES_DATAVALUE]);
}

static UA_INLINE UA_StatusCode
UA_DataValue_copy(const UA_DataValue *src, UA_DataValue *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATAVALUE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataValue_deleteMembers(UA_DataValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAVALUE]);
}

static UA_INLINE void
UA_DataValue_clear(UA_DataValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAVALUE]);
}

static UA_INLINE void
UA_DataValue_delete(UA_DataValue *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATAVALUE]);
}

/* Variant */
static UA_INLINE void
UA_Variant_init(UA_Variant *p) {
    memset(p, 0, sizeof(UA_Variant));
}

static UA_INLINE UA_Variant *
UA_Variant_new(void) {
    return (UA_Variant*)UA_new(&UA_TYPES[UA_TYPES_VARIANT]);
}

static UA_INLINE UA_StatusCode
UA_Variant_copy(const UA_Variant *src, UA_Variant *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIANT]);
}

UA_DEPRECATED static UA_INLINE void
UA_Variant_deleteMembers(UA_Variant *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIANT]);
}

static UA_INLINE void
UA_Variant_clear(UA_Variant *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIANT]);
}

static UA_INLINE void
UA_Variant_delete(UA_Variant *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VARIANT]);
}

/* DiagnosticInfo */
static UA_INLINE void
UA_DiagnosticInfo_init(UA_DiagnosticInfo *p) {
    memset(p, 0, sizeof(UA_DiagnosticInfo));
}

static UA_INLINE UA_DiagnosticInfo *
UA_DiagnosticInfo_new(void) {
    return (UA_DiagnosticInfo*)UA_new(&UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}

static UA_INLINE UA_StatusCode
UA_DiagnosticInfo_copy(const UA_DiagnosticInfo *src, UA_DiagnosticInfo *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}

UA_DEPRECATED static UA_INLINE void
UA_DiagnosticInfo_deleteMembers(UA_DiagnosticInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}

static UA_INLINE void
UA_DiagnosticInfo_clear(UA_DiagnosticInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}

static UA_INLINE void
UA_DiagnosticInfo_delete(UA_DiagnosticInfo *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]);
}

/* NamingRuleType */
static UA_INLINE void
UA_NamingRuleType_init(UA_NamingRuleType *p) {
    memset(p, 0, sizeof(UA_NamingRuleType));
}

static UA_INLINE UA_NamingRuleType *
UA_NamingRuleType_new(void) {
    return (UA_NamingRuleType*)UA_new(&UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}

static UA_INLINE UA_StatusCode
UA_NamingRuleType_copy(const UA_NamingRuleType *src, UA_NamingRuleType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NamingRuleType_deleteMembers(UA_NamingRuleType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}

static UA_INLINE void
UA_NamingRuleType_clear(UA_NamingRuleType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}

static UA_INLINE void
UA_NamingRuleType_delete(UA_NamingRuleType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NAMINGRULETYPE]);
}

/* ImageBMP */
static UA_INLINE void
UA_ImageBMP_init(UA_ImageBMP *p) {
    memset(p, 0, sizeof(UA_ImageBMP));
}

static UA_INLINE UA_ImageBMP *
UA_ImageBMP_new(void) {
    return (UA_ImageBMP*)UA_new(&UA_TYPES[UA_TYPES_IMAGEBMP]);
}

static UA_INLINE UA_StatusCode
UA_ImageBMP_copy(const UA_ImageBMP *src, UA_ImageBMP *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IMAGEBMP]);
}

UA_DEPRECATED static UA_INLINE void
UA_ImageBMP_deleteMembers(UA_ImageBMP *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEBMP]);
}

static UA_INLINE void
UA_ImageBMP_clear(UA_ImageBMP *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEBMP]);
}

static UA_INLINE void
UA_ImageBMP_delete(UA_ImageBMP *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IMAGEBMP]);
}

/* ImageGIF */
static UA_INLINE void
UA_ImageGIF_init(UA_ImageGIF *p) {
    memset(p, 0, sizeof(UA_ImageGIF));
}

static UA_INLINE UA_ImageGIF *
UA_ImageGIF_new(void) {
    return (UA_ImageGIF*)UA_new(&UA_TYPES[UA_TYPES_IMAGEGIF]);
}

static UA_INLINE UA_StatusCode
UA_ImageGIF_copy(const UA_ImageGIF *src, UA_ImageGIF *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IMAGEGIF]);
}

UA_DEPRECATED static UA_INLINE void
UA_ImageGIF_deleteMembers(UA_ImageGIF *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEGIF]);
}

static UA_INLINE void
UA_ImageGIF_clear(UA_ImageGIF *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEGIF]);
}

static UA_INLINE void
UA_ImageGIF_delete(UA_ImageGIF *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IMAGEGIF]);
}

/* ImageJPG */
static UA_INLINE void
UA_ImageJPG_init(UA_ImageJPG *p) {
    memset(p, 0, sizeof(UA_ImageJPG));
}

static UA_INLINE UA_ImageJPG *
UA_ImageJPG_new(void) {
    return (UA_ImageJPG*)UA_new(&UA_TYPES[UA_TYPES_IMAGEJPG]);
}

static UA_INLINE UA_StatusCode
UA_ImageJPG_copy(const UA_ImageJPG *src, UA_ImageJPG *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IMAGEJPG]);
}

UA_DEPRECATED static UA_INLINE void
UA_ImageJPG_deleteMembers(UA_ImageJPG *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEJPG]);
}

static UA_INLINE void
UA_ImageJPG_clear(UA_ImageJPG *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEJPG]);
}

static UA_INLINE void
UA_ImageJPG_delete(UA_ImageJPG *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IMAGEJPG]);
}

/* ImagePNG */
static UA_INLINE void
UA_ImagePNG_init(UA_ImagePNG *p) {
    memset(p, 0, sizeof(UA_ImagePNG));
}

static UA_INLINE UA_ImagePNG *
UA_ImagePNG_new(void) {
    return (UA_ImagePNG*)UA_new(&UA_TYPES[UA_TYPES_IMAGEPNG]);
}

static UA_INLINE UA_StatusCode
UA_ImagePNG_copy(const UA_ImagePNG *src, UA_ImagePNG *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IMAGEPNG]);
}

UA_DEPRECATED static UA_INLINE void
UA_ImagePNG_deleteMembers(UA_ImagePNG *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEPNG]);
}

static UA_INLINE void
UA_ImagePNG_clear(UA_ImagePNG *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IMAGEPNG]);
}

static UA_INLINE void
UA_ImagePNG_delete(UA_ImagePNG *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IMAGEPNG]);
}

/* AudioDataType */
static UA_INLINE void
UA_AudioDataType_init(UA_AudioDataType *p) {
    memset(p, 0, sizeof(UA_AudioDataType));
}

static UA_INLINE UA_AudioDataType *
UA_AudioDataType_new(void) {
    return (UA_AudioDataType*)UA_new(&UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AudioDataType_copy(const UA_AudioDataType *src, UA_AudioDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AudioDataType_deleteMembers(UA_AudioDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}

static UA_INLINE void
UA_AudioDataType_clear(UA_AudioDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}

static UA_INLINE void
UA_AudioDataType_delete(UA_AudioDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AUDIODATATYPE]);
}

/* BitFieldMaskDataType */
static UA_INLINE void
UA_BitFieldMaskDataType_init(UA_BitFieldMaskDataType *p) {
    memset(p, 0, sizeof(UA_BitFieldMaskDataType));
}

static UA_INLINE UA_BitFieldMaskDataType *
UA_BitFieldMaskDataType_new(void) {
    return (UA_BitFieldMaskDataType*)UA_new(&UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_BitFieldMaskDataType_copy(const UA_BitFieldMaskDataType *src, UA_BitFieldMaskDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BitFieldMaskDataType_deleteMembers(UA_BitFieldMaskDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}

static UA_INLINE void
UA_BitFieldMaskDataType_clear(UA_BitFieldMaskDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}

static UA_INLINE void
UA_BitFieldMaskDataType_delete(UA_BitFieldMaskDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BITFIELDMASKDATATYPE]);
}

/* KeyValuePair */
static UA_INLINE void
UA_KeyValuePair_init(UA_KeyValuePair *p) {
    memset(p, 0, sizeof(UA_KeyValuePair));
}

static UA_INLINE UA_KeyValuePair *
UA_KeyValuePair_new(void) {
    return (UA_KeyValuePair*)UA_new(&UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}

static UA_INLINE UA_StatusCode
UA_KeyValuePair_copy(const UA_KeyValuePair *src, UA_KeyValuePair *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}

UA_DEPRECATED static UA_INLINE void
UA_KeyValuePair_deleteMembers(UA_KeyValuePair *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}

static UA_INLINE void
UA_KeyValuePair_clear(UA_KeyValuePair *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}

static UA_INLINE void
UA_KeyValuePair_delete(UA_KeyValuePair *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_KEYVALUEPAIR]);
}

/* RationalNumber */
static UA_INLINE void
UA_RationalNumber_init(UA_RationalNumber *p) {
    memset(p, 0, sizeof(UA_RationalNumber));
}

static UA_INLINE UA_RationalNumber *
UA_RationalNumber_new(void) {
    return (UA_RationalNumber*)UA_new(&UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}

static UA_INLINE UA_StatusCode
UA_RationalNumber_copy(const UA_RationalNumber *src, UA_RationalNumber *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}

UA_DEPRECATED static UA_INLINE void
UA_RationalNumber_deleteMembers(UA_RationalNumber *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}

static UA_INLINE void
UA_RationalNumber_clear(UA_RationalNumber *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}

static UA_INLINE void
UA_RationalNumber_delete(UA_RationalNumber *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RATIONALNUMBER]);
}

/* Vector */
static UA_INLINE void
UA_Vector_init(UA_Vector *p) {
    memset(p, 0, sizeof(UA_Vector));
}

static UA_INLINE UA_Vector *
UA_Vector_new(void) {
    return (UA_Vector*)UA_new(&UA_TYPES[UA_TYPES_VECTOR]);
}

static UA_INLINE UA_StatusCode
UA_Vector_copy(const UA_Vector *src, UA_Vector *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VECTOR]);
}

UA_DEPRECATED static UA_INLINE void
UA_Vector_deleteMembers(UA_Vector *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VECTOR]);
}

static UA_INLINE void
UA_Vector_clear(UA_Vector *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VECTOR]);
}

static UA_INLINE void
UA_Vector_delete(UA_Vector *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VECTOR]);
}

/* ThreeDVector */
static UA_INLINE void
UA_ThreeDVector_init(UA_ThreeDVector *p) {
    memset(p, 0, sizeof(UA_ThreeDVector));
}

static UA_INLINE UA_ThreeDVector *
UA_ThreeDVector_new(void) {
    return (UA_ThreeDVector*)UA_new(&UA_TYPES[UA_TYPES_THREEDVECTOR]);
}

static UA_INLINE UA_StatusCode
UA_ThreeDVector_copy(const UA_ThreeDVector *src, UA_ThreeDVector *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_THREEDVECTOR]);
}

UA_DEPRECATED static UA_INLINE void
UA_ThreeDVector_deleteMembers(UA_ThreeDVector *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDVECTOR]);
}

static UA_INLINE void
UA_ThreeDVector_clear(UA_ThreeDVector *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDVECTOR]);
}

static UA_INLINE void
UA_ThreeDVector_delete(UA_ThreeDVector *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_THREEDVECTOR]);
}

/* CartesianCoordinates */
static UA_INLINE void
UA_CartesianCoordinates_init(UA_CartesianCoordinates *p) {
    memset(p, 0, sizeof(UA_CartesianCoordinates));
}

static UA_INLINE UA_CartesianCoordinates *
UA_CartesianCoordinates_new(void) {
    return (UA_CartesianCoordinates*)UA_new(&UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}

static UA_INLINE UA_StatusCode
UA_CartesianCoordinates_copy(const UA_CartesianCoordinates *src, UA_CartesianCoordinates *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}

UA_DEPRECATED static UA_INLINE void
UA_CartesianCoordinates_deleteMembers(UA_CartesianCoordinates *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}

static UA_INLINE void
UA_CartesianCoordinates_clear(UA_CartesianCoordinates *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}

static UA_INLINE void
UA_CartesianCoordinates_delete(UA_CartesianCoordinates *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CARTESIANCOORDINATES]);
}

/* ThreeDCartesianCoordinates */
static UA_INLINE void
UA_ThreeDCartesianCoordinates_init(UA_ThreeDCartesianCoordinates *p) {
    memset(p, 0, sizeof(UA_ThreeDCartesianCoordinates));
}

static UA_INLINE UA_ThreeDCartesianCoordinates *
UA_ThreeDCartesianCoordinates_new(void) {
    return (UA_ThreeDCartesianCoordinates*)UA_new(&UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}

static UA_INLINE UA_StatusCode
UA_ThreeDCartesianCoordinates_copy(const UA_ThreeDCartesianCoordinates *src, UA_ThreeDCartesianCoordinates *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}

UA_DEPRECATED static UA_INLINE void
UA_ThreeDCartesianCoordinates_deleteMembers(UA_ThreeDCartesianCoordinates *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}

static UA_INLINE void
UA_ThreeDCartesianCoordinates_clear(UA_ThreeDCartesianCoordinates *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}

static UA_INLINE void
UA_ThreeDCartesianCoordinates_delete(UA_ThreeDCartesianCoordinates *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_THREEDCARTESIANCOORDINATES]);
}

/* Orientation */
static UA_INLINE void
UA_Orientation_init(UA_Orientation *p) {
    memset(p, 0, sizeof(UA_Orientation));
}

static UA_INLINE UA_Orientation *
UA_Orientation_new(void) {
    return (UA_Orientation*)UA_new(&UA_TYPES[UA_TYPES_ORIENTATION]);
}

static UA_INLINE UA_StatusCode
UA_Orientation_copy(const UA_Orientation *src, UA_Orientation *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ORIENTATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_Orientation_deleteMembers(UA_Orientation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ORIENTATION]);
}

static UA_INLINE void
UA_Orientation_clear(UA_Orientation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ORIENTATION]);
}

static UA_INLINE void
UA_Orientation_delete(UA_Orientation *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ORIENTATION]);
}

/* ThreeDOrientation */
static UA_INLINE void
UA_ThreeDOrientation_init(UA_ThreeDOrientation *p) {
    memset(p, 0, sizeof(UA_ThreeDOrientation));
}

static UA_INLINE UA_ThreeDOrientation *
UA_ThreeDOrientation_new(void) {
    return (UA_ThreeDOrientation*)UA_new(&UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}

static UA_INLINE UA_StatusCode
UA_ThreeDOrientation_copy(const UA_ThreeDOrientation *src, UA_ThreeDOrientation *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_ThreeDOrientation_deleteMembers(UA_ThreeDOrientation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}

static UA_INLINE void
UA_ThreeDOrientation_clear(UA_ThreeDOrientation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}

static UA_INLINE void
UA_ThreeDOrientation_delete(UA_ThreeDOrientation *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_THREEDORIENTATION]);
}

/* Frame */
static UA_INLINE void
UA_Frame_init(UA_Frame *p) {
    memset(p, 0, sizeof(UA_Frame));
}

static UA_INLINE UA_Frame *
UA_Frame_new(void) {
    return (UA_Frame*)UA_new(&UA_TYPES[UA_TYPES_FRAME]);
}

static UA_INLINE UA_StatusCode
UA_Frame_copy(const UA_Frame *src, UA_Frame *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FRAME]);
}

UA_DEPRECATED static UA_INLINE void
UA_Frame_deleteMembers(UA_Frame *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FRAME]);
}

static UA_INLINE void
UA_Frame_clear(UA_Frame *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FRAME]);
}

static UA_INLINE void
UA_Frame_delete(UA_Frame *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FRAME]);
}

/* ThreeDFrame */
static UA_INLINE void
UA_ThreeDFrame_init(UA_ThreeDFrame *p) {
    memset(p, 0, sizeof(UA_ThreeDFrame));
}

static UA_INLINE UA_ThreeDFrame *
UA_ThreeDFrame_new(void) {
    return (UA_ThreeDFrame*)UA_new(&UA_TYPES[UA_TYPES_THREEDFRAME]);
}

static UA_INLINE UA_StatusCode
UA_ThreeDFrame_copy(const UA_ThreeDFrame *src, UA_ThreeDFrame *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_THREEDFRAME]);
}

UA_DEPRECATED static UA_INLINE void
UA_ThreeDFrame_deleteMembers(UA_ThreeDFrame *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDFRAME]);
}

static UA_INLINE void
UA_ThreeDFrame_clear(UA_ThreeDFrame *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_THREEDFRAME]);
}

static UA_INLINE void
UA_ThreeDFrame_delete(UA_ThreeDFrame *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_THREEDFRAME]);
}

/* OpenFileMode */
static UA_INLINE void
UA_OpenFileMode_init(UA_OpenFileMode *p) {
    memset(p, 0, sizeof(UA_OpenFileMode));
}

static UA_INLINE UA_OpenFileMode *
UA_OpenFileMode_new(void) {
    return (UA_OpenFileMode*)UA_new(&UA_TYPES[UA_TYPES_OPENFILEMODE]);
}

static UA_INLINE UA_StatusCode
UA_OpenFileMode_copy(const UA_OpenFileMode *src, UA_OpenFileMode *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPENFILEMODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenFileMode_deleteMembers(UA_OpenFileMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENFILEMODE]);
}

static UA_INLINE void
UA_OpenFileMode_clear(UA_OpenFileMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENFILEMODE]);
}

static UA_INLINE void
UA_OpenFileMode_delete(UA_OpenFileMode *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OPENFILEMODE]);
}

/* IdentityCriteriaType */
static UA_INLINE void
UA_IdentityCriteriaType_init(UA_IdentityCriteriaType *p) {
    memset(p, 0, sizeof(UA_IdentityCriteriaType));
}

static UA_INLINE UA_IdentityCriteriaType *
UA_IdentityCriteriaType_new(void) {
    return (UA_IdentityCriteriaType*)UA_new(&UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}

static UA_INLINE UA_StatusCode
UA_IdentityCriteriaType_copy(const UA_IdentityCriteriaType *src, UA_IdentityCriteriaType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_IdentityCriteriaType_deleteMembers(UA_IdentityCriteriaType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}

static UA_INLINE void
UA_IdentityCriteriaType_clear(UA_IdentityCriteriaType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}

static UA_INLINE void
UA_IdentityCriteriaType_delete(UA_IdentityCriteriaType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IDENTITYCRITERIATYPE]);
}

/* IdentityMappingRuleType */
static UA_INLINE void
UA_IdentityMappingRuleType_init(UA_IdentityMappingRuleType *p) {
    memset(p, 0, sizeof(UA_IdentityMappingRuleType));
}

static UA_INLINE UA_IdentityMappingRuleType *
UA_IdentityMappingRuleType_new(void) {
    return (UA_IdentityMappingRuleType*)UA_new(&UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}

static UA_INLINE UA_StatusCode
UA_IdentityMappingRuleType_copy(const UA_IdentityMappingRuleType *src, UA_IdentityMappingRuleType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_IdentityMappingRuleType_deleteMembers(UA_IdentityMappingRuleType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}

static UA_INLINE void
UA_IdentityMappingRuleType_clear(UA_IdentityMappingRuleType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}

static UA_INLINE void
UA_IdentityMappingRuleType_delete(UA_IdentityMappingRuleType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IDENTITYMAPPINGRULETYPE]);
}

/* CurrencyUnitType */
static UA_INLINE void
UA_CurrencyUnitType_init(UA_CurrencyUnitType *p) {
    memset(p, 0, sizeof(UA_CurrencyUnitType));
}

static UA_INLINE UA_CurrencyUnitType *
UA_CurrencyUnitType_new(void) {
    return (UA_CurrencyUnitType*)UA_new(&UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}

static UA_INLINE UA_StatusCode
UA_CurrencyUnitType_copy(const UA_CurrencyUnitType *src, UA_CurrencyUnitType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CurrencyUnitType_deleteMembers(UA_CurrencyUnitType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}

static UA_INLINE void
UA_CurrencyUnitType_clear(UA_CurrencyUnitType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}

static UA_INLINE void
UA_CurrencyUnitType_delete(UA_CurrencyUnitType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CURRENCYUNITTYPE]);
}

/* TrustListMasks */
static UA_INLINE void
UA_TrustListMasks_init(UA_TrustListMasks *p) {
    memset(p, 0, sizeof(UA_TrustListMasks));
}

static UA_INLINE UA_TrustListMasks *
UA_TrustListMasks_new(void) {
    return (UA_TrustListMasks*)UA_new(&UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}

static UA_INLINE UA_StatusCode
UA_TrustListMasks_copy(const UA_TrustListMasks *src, UA_TrustListMasks *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}

UA_DEPRECATED static UA_INLINE void
UA_TrustListMasks_deleteMembers(UA_TrustListMasks *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}

static UA_INLINE void
UA_TrustListMasks_clear(UA_TrustListMasks *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}

static UA_INLINE void
UA_TrustListMasks_delete(UA_TrustListMasks *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRUSTLISTMASKS]);
}

/* TrustListDataType */
static UA_INLINE void
UA_TrustListDataType_init(UA_TrustListDataType *p) {
    memset(p, 0, sizeof(UA_TrustListDataType));
}

static UA_INLINE UA_TrustListDataType *
UA_TrustListDataType_new(void) {
    return (UA_TrustListDataType*)UA_new(&UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_TrustListDataType_copy(const UA_TrustListDataType *src, UA_TrustListDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TrustListDataType_deleteMembers(UA_TrustListDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}

static UA_INLINE void
UA_TrustListDataType_clear(UA_TrustListDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}

static UA_INLINE void
UA_TrustListDataType_delete(UA_TrustListDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRUSTLISTDATATYPE]);
}

/* DecimalDataType */
static UA_INLINE void
UA_DecimalDataType_init(UA_DecimalDataType *p) {
    memset(p, 0, sizeof(UA_DecimalDataType));
}

static UA_INLINE UA_DecimalDataType *
UA_DecimalDataType_new(void) {
    return (UA_DecimalDataType*)UA_new(&UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DecimalDataType_copy(const UA_DecimalDataType *src, UA_DecimalDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DecimalDataType_deleteMembers(UA_DecimalDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}

static UA_INLINE void
UA_DecimalDataType_clear(UA_DecimalDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}

static UA_INLINE void
UA_DecimalDataType_delete(UA_DecimalDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DECIMALDATATYPE]);
}

/* DataTypeDescription */
static UA_INLINE void
UA_DataTypeDescription_init(UA_DataTypeDescription *p) {
    memset(p, 0, sizeof(UA_DataTypeDescription));
}

static UA_INLINE UA_DataTypeDescription *
UA_DataTypeDescription_new(void) {
    return (UA_DataTypeDescription*)UA_new(&UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_DataTypeDescription_copy(const UA_DataTypeDescription *src, UA_DataTypeDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataTypeDescription_deleteMembers(UA_DataTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}

static UA_INLINE void
UA_DataTypeDescription_clear(UA_DataTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}

static UA_INLINE void
UA_DataTypeDescription_delete(UA_DataTypeDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATATYPEDESCRIPTION]);
}

/* SimpleTypeDescription */
static UA_INLINE void
UA_SimpleTypeDescription_init(UA_SimpleTypeDescription *p) {
    memset(p, 0, sizeof(UA_SimpleTypeDescription));
}

static UA_INLINE UA_SimpleTypeDescription *
UA_SimpleTypeDescription_new(void) {
    return (UA_SimpleTypeDescription*)UA_new(&UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_SimpleTypeDescription_copy(const UA_SimpleTypeDescription *src, UA_SimpleTypeDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_SimpleTypeDescription_deleteMembers(UA_SimpleTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}

static UA_INLINE void
UA_SimpleTypeDescription_clear(UA_SimpleTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}

static UA_INLINE void
UA_SimpleTypeDescription_delete(UA_SimpleTypeDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SIMPLETYPEDESCRIPTION]);
}

/* PubSubState */
static UA_INLINE void
UA_PubSubState_init(UA_PubSubState *p) {
    memset(p, 0, sizeof(UA_PubSubState));
}

static UA_INLINE UA_PubSubState *
UA_PubSubState_new(void) {
    return (UA_PubSubState*)UA_new(&UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}

static UA_INLINE UA_StatusCode
UA_PubSubState_copy(const UA_PubSubState *src, UA_PubSubState *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubState_deleteMembers(UA_PubSubState *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}

static UA_INLINE void
UA_PubSubState_clear(UA_PubSubState *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}

static UA_INLINE void
UA_PubSubState_delete(UA_PubSubState *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBSUBSTATE]);
}

/* DataSetFieldFlags */
static UA_INLINE void
UA_DataSetFieldFlags_init(UA_DataSetFieldFlags *p) {
    memset(p, 0, sizeof(UA_DataSetFieldFlags));
}

static UA_INLINE UA_DataSetFieldFlags *
UA_DataSetFieldFlags_new(void) {
    return (UA_DataSetFieldFlags*)UA_new(&UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}

static UA_INLINE UA_StatusCode
UA_DataSetFieldFlags_copy(const UA_DataSetFieldFlags *src, UA_DataSetFieldFlags *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetFieldFlags_deleteMembers(UA_DataSetFieldFlags *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}

static UA_INLINE void
UA_DataSetFieldFlags_clear(UA_DataSetFieldFlags *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}

static UA_INLINE void
UA_DataSetFieldFlags_delete(UA_DataSetFieldFlags *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETFIELDFLAGS]);
}

/* ConfigurationVersionDataType */
static UA_INLINE void
UA_ConfigurationVersionDataType_init(UA_ConfigurationVersionDataType *p) {
    memset(p, 0, sizeof(UA_ConfigurationVersionDataType));
}

static UA_INLINE UA_ConfigurationVersionDataType *
UA_ConfigurationVersionDataType_new(void) {
    return (UA_ConfigurationVersionDataType*)UA_new(&UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigurationVersionDataType_copy(const UA_ConfigurationVersionDataType *src, UA_ConfigurationVersionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigurationVersionDataType_deleteMembers(UA_ConfigurationVersionDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}

static UA_INLINE void
UA_ConfigurationVersionDataType_clear(UA_ConfigurationVersionDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}

static UA_INLINE void
UA_ConfigurationVersionDataType_delete(UA_ConfigurationVersionDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONFIGURATIONVERSIONDATATYPE]);
}

/* PublishedDataSetSourceDataType */
static UA_INLINE void
UA_PublishedDataSetSourceDataType_init(UA_PublishedDataSetSourceDataType *p) {
    memset(p, 0, sizeof(UA_PublishedDataSetSourceDataType));
}

static UA_INLINE UA_PublishedDataSetSourceDataType *
UA_PublishedDataSetSourceDataType_new(void) {
    return (UA_PublishedDataSetSourceDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PublishedDataSetSourceDataType_copy(const UA_PublishedDataSetSourceDataType *src, UA_PublishedDataSetSourceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishedDataSetSourceDataType_deleteMembers(UA_PublishedDataSetSourceDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataSetSourceDataType_clear(UA_PublishedDataSetSourceDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataSetSourceDataType_delete(UA_PublishedDataSetSourceDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETSOURCEDATATYPE]);
}

/* PublishedVariableDataType */
static UA_INLINE void
UA_PublishedVariableDataType_init(UA_PublishedVariableDataType *p) {
    memset(p, 0, sizeof(UA_PublishedVariableDataType));
}

static UA_INLINE UA_PublishedVariableDataType *
UA_PublishedVariableDataType_new(void) {
    return (UA_PublishedVariableDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PublishedVariableDataType_copy(const UA_PublishedVariableDataType *src, UA_PublishedVariableDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishedVariableDataType_deleteMembers(UA_PublishedVariableDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}

static UA_INLINE void
UA_PublishedVariableDataType_clear(UA_PublishedVariableDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}

static UA_INLINE void
UA_PublishedVariableDataType_delete(UA_PublishedVariableDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHEDVARIABLEDATATYPE]);
}

/* PublishedDataItemsDataType */
static UA_INLINE void
UA_PublishedDataItemsDataType_init(UA_PublishedDataItemsDataType *p) {
    memset(p, 0, sizeof(UA_PublishedDataItemsDataType));
}

static UA_INLINE UA_PublishedDataItemsDataType *
UA_PublishedDataItemsDataType_new(void) {
    return (UA_PublishedDataItemsDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PublishedDataItemsDataType_copy(const UA_PublishedDataItemsDataType *src, UA_PublishedDataItemsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishedDataItemsDataType_deleteMembers(UA_PublishedDataItemsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataItemsDataType_clear(UA_PublishedDataItemsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataItemsDataType_delete(UA_PublishedDataItemsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATAITEMSDATATYPE]);
}

/* DataSetFieldContentMask */
static UA_INLINE void
UA_DataSetFieldContentMask_init(UA_DataSetFieldContentMask *p) {
    memset(p, 0, sizeof(UA_DataSetFieldContentMask));
}

static UA_INLINE UA_DataSetFieldContentMask *
UA_DataSetFieldContentMask_new(void) {
    return (UA_DataSetFieldContentMask*)UA_new(&UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}

static UA_INLINE UA_StatusCode
UA_DataSetFieldContentMask_copy(const UA_DataSetFieldContentMask *src, UA_DataSetFieldContentMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetFieldContentMask_deleteMembers(UA_DataSetFieldContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}

static UA_INLINE void
UA_DataSetFieldContentMask_clear(UA_DataSetFieldContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}

static UA_INLINE void
UA_DataSetFieldContentMask_delete(UA_DataSetFieldContentMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETFIELDCONTENTMASK]);
}

/* DataSetWriterDataType */
static UA_INLINE void
UA_DataSetWriterDataType_init(UA_DataSetWriterDataType *p) {
    memset(p, 0, sizeof(UA_DataSetWriterDataType));
}

static UA_INLINE UA_DataSetWriterDataType *
UA_DataSetWriterDataType_new(void) {
    return (UA_DataSetWriterDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetWriterDataType_copy(const UA_DataSetWriterDataType *src, UA_DataSetWriterDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetWriterDataType_deleteMembers(UA_DataSetWriterDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterDataType_clear(UA_DataSetWriterDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterDataType_delete(UA_DataSetWriterDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETWRITERDATATYPE]);
}

/* DataSetWriterTransportDataType */
static UA_INLINE void
UA_DataSetWriterTransportDataType_init(UA_DataSetWriterTransportDataType *p) {
    memset(p, 0, sizeof(UA_DataSetWriterTransportDataType));
}

static UA_INLINE UA_DataSetWriterTransportDataType *
UA_DataSetWriterTransportDataType_new(void) {
    return (UA_DataSetWriterTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetWriterTransportDataType_copy(const UA_DataSetWriterTransportDataType *src, UA_DataSetWriterTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetWriterTransportDataType_deleteMembers(UA_DataSetWriterTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterTransportDataType_clear(UA_DataSetWriterTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterTransportDataType_delete(UA_DataSetWriterTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETWRITERTRANSPORTDATATYPE]);
}

/* DataSetWriterMessageDataType */
static UA_INLINE void
UA_DataSetWriterMessageDataType_init(UA_DataSetWriterMessageDataType *p) {
    memset(p, 0, sizeof(UA_DataSetWriterMessageDataType));
}

static UA_INLINE UA_DataSetWriterMessageDataType *
UA_DataSetWriterMessageDataType_new(void) {
    return (UA_DataSetWriterMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetWriterMessageDataType_copy(const UA_DataSetWriterMessageDataType *src, UA_DataSetWriterMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetWriterMessageDataType_deleteMembers(UA_DataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterMessageDataType_clear(UA_DataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_DataSetWriterMessageDataType_delete(UA_DataSetWriterMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETWRITERMESSAGEDATATYPE]);
}

/* WriterGroupTransportDataType */
static UA_INLINE void
UA_WriterGroupTransportDataType_init(UA_WriterGroupTransportDataType *p) {
    memset(p, 0, sizeof(UA_WriterGroupTransportDataType));
}

static UA_INLINE UA_WriterGroupTransportDataType *
UA_WriterGroupTransportDataType_new(void) {
    return (UA_WriterGroupTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_WriterGroupTransportDataType_copy(const UA_WriterGroupTransportDataType *src, UA_WriterGroupTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriterGroupTransportDataType_deleteMembers(UA_WriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupTransportDataType_clear(UA_WriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupTransportDataType_delete(UA_WriterGroupTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITERGROUPTRANSPORTDATATYPE]);
}

/* WriterGroupMessageDataType */
static UA_INLINE void
UA_WriterGroupMessageDataType_init(UA_WriterGroupMessageDataType *p) {
    memset(p, 0, sizeof(UA_WriterGroupMessageDataType));
}

static UA_INLINE UA_WriterGroupMessageDataType *
UA_WriterGroupMessageDataType_new(void) {
    return (UA_WriterGroupMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_WriterGroupMessageDataType_copy(const UA_WriterGroupMessageDataType *src, UA_WriterGroupMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriterGroupMessageDataType_deleteMembers(UA_WriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupMessageDataType_clear(UA_WriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupMessageDataType_delete(UA_WriterGroupMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITERGROUPMESSAGEDATATYPE]);
}

/* ConnectionTransportDataType */
static UA_INLINE void
UA_ConnectionTransportDataType_init(UA_ConnectionTransportDataType *p) {
    memset(p, 0, sizeof(UA_ConnectionTransportDataType));
}

static UA_INLINE UA_ConnectionTransportDataType *
UA_ConnectionTransportDataType_new(void) {
    return (UA_ConnectionTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConnectionTransportDataType_copy(const UA_ConnectionTransportDataType *src, UA_ConnectionTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConnectionTransportDataType_deleteMembers(UA_ConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_ConnectionTransportDataType_clear(UA_ConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_ConnectionTransportDataType_delete(UA_ConnectionTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONNECTIONTRANSPORTDATATYPE]);
}

/* NetworkAddressDataType */
static UA_INLINE void
UA_NetworkAddressDataType_init(UA_NetworkAddressDataType *p) {
    memset(p, 0, sizeof(UA_NetworkAddressDataType));
}

static UA_INLINE UA_NetworkAddressDataType *
UA_NetworkAddressDataType_new(void) {
    return (UA_NetworkAddressDataType*)UA_new(&UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_NetworkAddressDataType_copy(const UA_NetworkAddressDataType *src, UA_NetworkAddressDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NetworkAddressDataType_deleteMembers(UA_NetworkAddressDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}

static UA_INLINE void
UA_NetworkAddressDataType_clear(UA_NetworkAddressDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}

static UA_INLINE void
UA_NetworkAddressDataType_delete(UA_NetworkAddressDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSDATATYPE]);
}

/* NetworkAddressUrlDataType */
static UA_INLINE void
UA_NetworkAddressUrlDataType_init(UA_NetworkAddressUrlDataType *p) {
    memset(p, 0, sizeof(UA_NetworkAddressUrlDataType));
}

static UA_INLINE UA_NetworkAddressUrlDataType *
UA_NetworkAddressUrlDataType_new(void) {
    return (UA_NetworkAddressUrlDataType*)UA_new(&UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_NetworkAddressUrlDataType_copy(const UA_NetworkAddressUrlDataType *src, UA_NetworkAddressUrlDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NetworkAddressUrlDataType_deleteMembers(UA_NetworkAddressUrlDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}

static UA_INLINE void
UA_NetworkAddressUrlDataType_clear(UA_NetworkAddressUrlDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}

static UA_INLINE void
UA_NetworkAddressUrlDataType_delete(UA_NetworkAddressUrlDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
}

/* ReaderGroupTransportDataType */
static UA_INLINE void
UA_ReaderGroupTransportDataType_init(UA_ReaderGroupTransportDataType *p) {
    memset(p, 0, sizeof(UA_ReaderGroupTransportDataType));
}

static UA_INLINE UA_ReaderGroupTransportDataType *
UA_ReaderGroupTransportDataType_new(void) {
    return (UA_ReaderGroupTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ReaderGroupTransportDataType_copy(const UA_ReaderGroupTransportDataType *src, UA_ReaderGroupTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReaderGroupTransportDataType_deleteMembers(UA_ReaderGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupTransportDataType_clear(UA_ReaderGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupTransportDataType_delete(UA_ReaderGroupTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READERGROUPTRANSPORTDATATYPE]);
}

/* ReaderGroupMessageDataType */
static UA_INLINE void
UA_ReaderGroupMessageDataType_init(UA_ReaderGroupMessageDataType *p) {
    memset(p, 0, sizeof(UA_ReaderGroupMessageDataType));
}

static UA_INLINE UA_ReaderGroupMessageDataType *
UA_ReaderGroupMessageDataType_new(void) {
    return (UA_ReaderGroupMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ReaderGroupMessageDataType_copy(const UA_ReaderGroupMessageDataType *src, UA_ReaderGroupMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReaderGroupMessageDataType_deleteMembers(UA_ReaderGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupMessageDataType_clear(UA_ReaderGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupMessageDataType_delete(UA_ReaderGroupMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READERGROUPMESSAGEDATATYPE]);
}

/* DataSetReaderTransportDataType */
static UA_INLINE void
UA_DataSetReaderTransportDataType_init(UA_DataSetReaderTransportDataType *p) {
    memset(p, 0, sizeof(UA_DataSetReaderTransportDataType));
}

static UA_INLINE UA_DataSetReaderTransportDataType *
UA_DataSetReaderTransportDataType_new(void) {
    return (UA_DataSetReaderTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetReaderTransportDataType_copy(const UA_DataSetReaderTransportDataType *src, UA_DataSetReaderTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetReaderTransportDataType_deleteMembers(UA_DataSetReaderTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderTransportDataType_clear(UA_DataSetReaderTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderTransportDataType_delete(UA_DataSetReaderTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETREADERTRANSPORTDATATYPE]);
}

/* DataSetReaderMessageDataType */
static UA_INLINE void
UA_DataSetReaderMessageDataType_init(UA_DataSetReaderMessageDataType *p) {
    memset(p, 0, sizeof(UA_DataSetReaderMessageDataType));
}

static UA_INLINE UA_DataSetReaderMessageDataType *
UA_DataSetReaderMessageDataType_new(void) {
    return (UA_DataSetReaderMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetReaderMessageDataType_copy(const UA_DataSetReaderMessageDataType *src, UA_DataSetReaderMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetReaderMessageDataType_deleteMembers(UA_DataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderMessageDataType_clear(UA_DataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderMessageDataType_delete(UA_DataSetReaderMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETREADERMESSAGEDATATYPE]);
}

/* SubscribedDataSetDataType */
static UA_INLINE void
UA_SubscribedDataSetDataType_init(UA_SubscribedDataSetDataType *p) {
    memset(p, 0, sizeof(UA_SubscribedDataSetDataType));
}

static UA_INLINE UA_SubscribedDataSetDataType *
UA_SubscribedDataSetDataType_new(void) {
    return (UA_SubscribedDataSetDataType*)UA_new(&UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SubscribedDataSetDataType_copy(const UA_SubscribedDataSetDataType *src, UA_SubscribedDataSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SubscribedDataSetDataType_deleteMembers(UA_SubscribedDataSetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}

static UA_INLINE void
UA_SubscribedDataSetDataType_clear(UA_SubscribedDataSetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}

static UA_INLINE void
UA_SubscribedDataSetDataType_delete(UA_SubscribedDataSetDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETDATATYPE]);
}

/* OverrideValueHandling */
static UA_INLINE void
UA_OverrideValueHandling_init(UA_OverrideValueHandling *p) {
    memset(p, 0, sizeof(UA_OverrideValueHandling));
}

static UA_INLINE UA_OverrideValueHandling *
UA_OverrideValueHandling_new(void) {
    return (UA_OverrideValueHandling*)UA_new(&UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}

static UA_INLINE UA_StatusCode
UA_OverrideValueHandling_copy(const UA_OverrideValueHandling *src, UA_OverrideValueHandling *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}

UA_DEPRECATED static UA_INLINE void
UA_OverrideValueHandling_deleteMembers(UA_OverrideValueHandling *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}

static UA_INLINE void
UA_OverrideValueHandling_clear(UA_OverrideValueHandling *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}

static UA_INLINE void
UA_OverrideValueHandling_delete(UA_OverrideValueHandling *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OVERRIDEVALUEHANDLING]);
}

/* DataSetOrderingType */
static UA_INLINE void
UA_DataSetOrderingType_init(UA_DataSetOrderingType *p) {
    memset(p, 0, sizeof(UA_DataSetOrderingType));
}

static UA_INLINE UA_DataSetOrderingType *
UA_DataSetOrderingType_new(void) {
    return (UA_DataSetOrderingType*)UA_new(&UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetOrderingType_copy(const UA_DataSetOrderingType *src, UA_DataSetOrderingType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetOrderingType_deleteMembers(UA_DataSetOrderingType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}

static UA_INLINE void
UA_DataSetOrderingType_clear(UA_DataSetOrderingType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}

static UA_INLINE void
UA_DataSetOrderingType_delete(UA_DataSetOrderingType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETORDERINGTYPE]);
}

/* UadpNetworkMessageContentMask */
static UA_INLINE void
UA_UadpNetworkMessageContentMask_init(UA_UadpNetworkMessageContentMask *p) {
    memset(p, 0, sizeof(UA_UadpNetworkMessageContentMask));
}

static UA_INLINE UA_UadpNetworkMessageContentMask *
UA_UadpNetworkMessageContentMask_new(void) {
    return (UA_UadpNetworkMessageContentMask*)UA_new(&UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE UA_StatusCode
UA_UadpNetworkMessageContentMask_copy(const UA_UadpNetworkMessageContentMask *src, UA_UadpNetworkMessageContentMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_UadpNetworkMessageContentMask_deleteMembers(UA_UadpNetworkMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_UadpNetworkMessageContentMask_clear(UA_UadpNetworkMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_UadpNetworkMessageContentMask_delete(UA_UadpNetworkMessageContentMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UADPNETWORKMESSAGECONTENTMASK]);
}

/* UadpWriterGroupMessageDataType */
static UA_INLINE void
UA_UadpWriterGroupMessageDataType_init(UA_UadpWriterGroupMessageDataType *p) {
    memset(p, 0, sizeof(UA_UadpWriterGroupMessageDataType));
}

static UA_INLINE UA_UadpWriterGroupMessageDataType *
UA_UadpWriterGroupMessageDataType_new(void) {
    return (UA_UadpWriterGroupMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_UadpWriterGroupMessageDataType_copy(const UA_UadpWriterGroupMessageDataType *src, UA_UadpWriterGroupMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UadpWriterGroupMessageDataType_deleteMembers(UA_UadpWriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpWriterGroupMessageDataType_clear(UA_UadpWriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpWriterGroupMessageDataType_delete(UA_UadpWriterGroupMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UADPWRITERGROUPMESSAGEDATATYPE]);
}

/* UadpDataSetMessageContentMask */
static UA_INLINE void
UA_UadpDataSetMessageContentMask_init(UA_UadpDataSetMessageContentMask *p) {
    memset(p, 0, sizeof(UA_UadpDataSetMessageContentMask));
}

static UA_INLINE UA_UadpDataSetMessageContentMask *
UA_UadpDataSetMessageContentMask_new(void) {
    return (UA_UadpDataSetMessageContentMask*)UA_new(&UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE UA_StatusCode
UA_UadpDataSetMessageContentMask_copy(const UA_UadpDataSetMessageContentMask *src, UA_UadpDataSetMessageContentMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_UadpDataSetMessageContentMask_deleteMembers(UA_UadpDataSetMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_UadpDataSetMessageContentMask_clear(UA_UadpDataSetMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_UadpDataSetMessageContentMask_delete(UA_UadpDataSetMessageContentMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UADPDATASETMESSAGECONTENTMASK]);
}

/* UadpDataSetWriterMessageDataType */
static UA_INLINE void
UA_UadpDataSetWriterMessageDataType_init(UA_UadpDataSetWriterMessageDataType *p) {
    memset(p, 0, sizeof(UA_UadpDataSetWriterMessageDataType));
}

static UA_INLINE UA_UadpDataSetWriterMessageDataType *
UA_UadpDataSetWriterMessageDataType_new(void) {
    return (UA_UadpDataSetWriterMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_UadpDataSetWriterMessageDataType_copy(const UA_UadpDataSetWriterMessageDataType *src, UA_UadpDataSetWriterMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UadpDataSetWriterMessageDataType_deleteMembers(UA_UadpDataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpDataSetWriterMessageDataType_clear(UA_UadpDataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpDataSetWriterMessageDataType_delete(UA_UadpDataSetWriterMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UADPDATASETWRITERMESSAGEDATATYPE]);
}

/* UadpDataSetReaderMessageDataType */
static UA_INLINE void
UA_UadpDataSetReaderMessageDataType_init(UA_UadpDataSetReaderMessageDataType *p) {
    memset(p, 0, sizeof(UA_UadpDataSetReaderMessageDataType));
}

static UA_INLINE UA_UadpDataSetReaderMessageDataType *
UA_UadpDataSetReaderMessageDataType_new(void) {
    return (UA_UadpDataSetReaderMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_UadpDataSetReaderMessageDataType_copy(const UA_UadpDataSetReaderMessageDataType *src, UA_UadpDataSetReaderMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UadpDataSetReaderMessageDataType_deleteMembers(UA_UadpDataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpDataSetReaderMessageDataType_clear(UA_UadpDataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_UadpDataSetReaderMessageDataType_delete(UA_UadpDataSetReaderMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UADPDATASETREADERMESSAGEDATATYPE]);
}

/* JsonNetworkMessageContentMask */
static UA_INLINE void
UA_JsonNetworkMessageContentMask_init(UA_JsonNetworkMessageContentMask *p) {
    memset(p, 0, sizeof(UA_JsonNetworkMessageContentMask));
}

static UA_INLINE UA_JsonNetworkMessageContentMask *
UA_JsonNetworkMessageContentMask_new(void) {
    return (UA_JsonNetworkMessageContentMask*)UA_new(&UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE UA_StatusCode
UA_JsonNetworkMessageContentMask_copy(const UA_JsonNetworkMessageContentMask *src, UA_JsonNetworkMessageContentMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_JsonNetworkMessageContentMask_deleteMembers(UA_JsonNetworkMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_JsonNetworkMessageContentMask_clear(UA_JsonNetworkMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_JsonNetworkMessageContentMask_delete(UA_JsonNetworkMessageContentMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_JSONNETWORKMESSAGECONTENTMASK]);
}

/* JsonWriterGroupMessageDataType */
static UA_INLINE void
UA_JsonWriterGroupMessageDataType_init(UA_JsonWriterGroupMessageDataType *p) {
    memset(p, 0, sizeof(UA_JsonWriterGroupMessageDataType));
}

static UA_INLINE UA_JsonWriterGroupMessageDataType *
UA_JsonWriterGroupMessageDataType_new(void) {
    return (UA_JsonWriterGroupMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_JsonWriterGroupMessageDataType_copy(const UA_JsonWriterGroupMessageDataType *src, UA_JsonWriterGroupMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_JsonWriterGroupMessageDataType_deleteMembers(UA_JsonWriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonWriterGroupMessageDataType_clear(UA_JsonWriterGroupMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonWriterGroupMessageDataType_delete(UA_JsonWriterGroupMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_JSONWRITERGROUPMESSAGEDATATYPE]);
}

/* JsonDataSetMessageContentMask */
static UA_INLINE void
UA_JsonDataSetMessageContentMask_init(UA_JsonDataSetMessageContentMask *p) {
    memset(p, 0, sizeof(UA_JsonDataSetMessageContentMask));
}

static UA_INLINE UA_JsonDataSetMessageContentMask *
UA_JsonDataSetMessageContentMask_new(void) {
    return (UA_JsonDataSetMessageContentMask*)UA_new(&UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE UA_StatusCode
UA_JsonDataSetMessageContentMask_copy(const UA_JsonDataSetMessageContentMask *src, UA_JsonDataSetMessageContentMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_JsonDataSetMessageContentMask_deleteMembers(UA_JsonDataSetMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_JsonDataSetMessageContentMask_clear(UA_JsonDataSetMessageContentMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}

static UA_INLINE void
UA_JsonDataSetMessageContentMask_delete(UA_JsonDataSetMessageContentMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_JSONDATASETMESSAGECONTENTMASK]);
}

/* JsonDataSetWriterMessageDataType */
static UA_INLINE void
UA_JsonDataSetWriterMessageDataType_init(UA_JsonDataSetWriterMessageDataType *p) {
    memset(p, 0, sizeof(UA_JsonDataSetWriterMessageDataType));
}

static UA_INLINE UA_JsonDataSetWriterMessageDataType *
UA_JsonDataSetWriterMessageDataType_new(void) {
    return (UA_JsonDataSetWriterMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_JsonDataSetWriterMessageDataType_copy(const UA_JsonDataSetWriterMessageDataType *src, UA_JsonDataSetWriterMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_JsonDataSetWriterMessageDataType_deleteMembers(UA_JsonDataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonDataSetWriterMessageDataType_clear(UA_JsonDataSetWriterMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonDataSetWriterMessageDataType_delete(UA_JsonDataSetWriterMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_JSONDATASETWRITERMESSAGEDATATYPE]);
}

/* JsonDataSetReaderMessageDataType */
static UA_INLINE void
UA_JsonDataSetReaderMessageDataType_init(UA_JsonDataSetReaderMessageDataType *p) {
    memset(p, 0, sizeof(UA_JsonDataSetReaderMessageDataType));
}

static UA_INLINE UA_JsonDataSetReaderMessageDataType *
UA_JsonDataSetReaderMessageDataType_new(void) {
    return (UA_JsonDataSetReaderMessageDataType*)UA_new(&UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_JsonDataSetReaderMessageDataType_copy(const UA_JsonDataSetReaderMessageDataType *src, UA_JsonDataSetReaderMessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_JsonDataSetReaderMessageDataType_deleteMembers(UA_JsonDataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonDataSetReaderMessageDataType_clear(UA_JsonDataSetReaderMessageDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}

static UA_INLINE void
UA_JsonDataSetReaderMessageDataType_delete(UA_JsonDataSetReaderMessageDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_JSONDATASETREADERMESSAGEDATATYPE]);
}

/* DatagramConnectionTransportDataType */
static UA_INLINE void
UA_DatagramConnectionTransportDataType_init(UA_DatagramConnectionTransportDataType *p) {
    memset(p, 0, sizeof(UA_DatagramConnectionTransportDataType));
}

static UA_INLINE UA_DatagramConnectionTransportDataType *
UA_DatagramConnectionTransportDataType_new(void) {
    return (UA_DatagramConnectionTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DatagramConnectionTransportDataType_copy(const UA_DatagramConnectionTransportDataType *src, UA_DatagramConnectionTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DatagramConnectionTransportDataType_deleteMembers(UA_DatagramConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DatagramConnectionTransportDataType_clear(UA_DatagramConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DatagramConnectionTransportDataType_delete(UA_DatagramConnectionTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATAGRAMCONNECTIONTRANSPORTDATATYPE]);
}

/* DatagramWriterGroupTransportDataType */
static UA_INLINE void
UA_DatagramWriterGroupTransportDataType_init(UA_DatagramWriterGroupTransportDataType *p) {
    memset(p, 0, sizeof(UA_DatagramWriterGroupTransportDataType));
}

static UA_INLINE UA_DatagramWriterGroupTransportDataType *
UA_DatagramWriterGroupTransportDataType_new(void) {
    return (UA_DatagramWriterGroupTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DatagramWriterGroupTransportDataType_copy(const UA_DatagramWriterGroupTransportDataType *src, UA_DatagramWriterGroupTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DatagramWriterGroupTransportDataType_deleteMembers(UA_DatagramWriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DatagramWriterGroupTransportDataType_clear(UA_DatagramWriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_DatagramWriterGroupTransportDataType_delete(UA_DatagramWriterGroupTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATAGRAMWRITERGROUPTRANSPORTDATATYPE]);
}

/* BrokerConnectionTransportDataType */
static UA_INLINE void
UA_BrokerConnectionTransportDataType_init(UA_BrokerConnectionTransportDataType *p) {
    memset(p, 0, sizeof(UA_BrokerConnectionTransportDataType));
}

static UA_INLINE UA_BrokerConnectionTransportDataType *
UA_BrokerConnectionTransportDataType_new(void) {
    return (UA_BrokerConnectionTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_BrokerConnectionTransportDataType_copy(const UA_BrokerConnectionTransportDataType *src, UA_BrokerConnectionTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrokerConnectionTransportDataType_deleteMembers(UA_BrokerConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerConnectionTransportDataType_clear(UA_BrokerConnectionTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerConnectionTransportDataType_delete(UA_BrokerConnectionTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROKERCONNECTIONTRANSPORTDATATYPE]);
}

/* BrokerTransportQualityOfService */
static UA_INLINE void
UA_BrokerTransportQualityOfService_init(UA_BrokerTransportQualityOfService *p) {
    memset(p, 0, sizeof(UA_BrokerTransportQualityOfService));
}

static UA_INLINE UA_BrokerTransportQualityOfService *
UA_BrokerTransportQualityOfService_new(void) {
    return (UA_BrokerTransportQualityOfService*)UA_new(&UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}

static UA_INLINE UA_StatusCode
UA_BrokerTransportQualityOfService_copy(const UA_BrokerTransportQualityOfService *src, UA_BrokerTransportQualityOfService *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrokerTransportQualityOfService_deleteMembers(UA_BrokerTransportQualityOfService *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}

static UA_INLINE void
UA_BrokerTransportQualityOfService_clear(UA_BrokerTransportQualityOfService *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}

static UA_INLINE void
UA_BrokerTransportQualityOfService_delete(UA_BrokerTransportQualityOfService *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROKERTRANSPORTQUALITYOFSERVICE]);
}

/* BrokerWriterGroupTransportDataType */
static UA_INLINE void
UA_BrokerWriterGroupTransportDataType_init(UA_BrokerWriterGroupTransportDataType *p) {
    memset(p, 0, sizeof(UA_BrokerWriterGroupTransportDataType));
}

static UA_INLINE UA_BrokerWriterGroupTransportDataType *
UA_BrokerWriterGroupTransportDataType_new(void) {
    return (UA_BrokerWriterGroupTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_BrokerWriterGroupTransportDataType_copy(const UA_BrokerWriterGroupTransportDataType *src, UA_BrokerWriterGroupTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrokerWriterGroupTransportDataType_deleteMembers(UA_BrokerWriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerWriterGroupTransportDataType_clear(UA_BrokerWriterGroupTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerWriterGroupTransportDataType_delete(UA_BrokerWriterGroupTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROKERWRITERGROUPTRANSPORTDATATYPE]);
}

/* BrokerDataSetWriterTransportDataType */
static UA_INLINE void
UA_BrokerDataSetWriterTransportDataType_init(UA_BrokerDataSetWriterTransportDataType *p) {
    memset(p, 0, sizeof(UA_BrokerDataSetWriterTransportDataType));
}

static UA_INLINE UA_BrokerDataSetWriterTransportDataType *
UA_BrokerDataSetWriterTransportDataType_new(void) {
    return (UA_BrokerDataSetWriterTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_BrokerDataSetWriterTransportDataType_copy(const UA_BrokerDataSetWriterTransportDataType *src, UA_BrokerDataSetWriterTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrokerDataSetWriterTransportDataType_deleteMembers(UA_BrokerDataSetWriterTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerDataSetWriterTransportDataType_clear(UA_BrokerDataSetWriterTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerDataSetWriterTransportDataType_delete(UA_BrokerDataSetWriterTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROKERDATASETWRITERTRANSPORTDATATYPE]);
}

/* BrokerDataSetReaderTransportDataType */
static UA_INLINE void
UA_BrokerDataSetReaderTransportDataType_init(UA_BrokerDataSetReaderTransportDataType *p) {
    memset(p, 0, sizeof(UA_BrokerDataSetReaderTransportDataType));
}

static UA_INLINE UA_BrokerDataSetReaderTransportDataType *
UA_BrokerDataSetReaderTransportDataType_new(void) {
    return (UA_BrokerDataSetReaderTransportDataType*)UA_new(&UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_BrokerDataSetReaderTransportDataType_copy(const UA_BrokerDataSetReaderTransportDataType *src, UA_BrokerDataSetReaderTransportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrokerDataSetReaderTransportDataType_deleteMembers(UA_BrokerDataSetReaderTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerDataSetReaderTransportDataType_clear(UA_BrokerDataSetReaderTransportDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}

static UA_INLINE void
UA_BrokerDataSetReaderTransportDataType_delete(UA_BrokerDataSetReaderTransportDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROKERDATASETREADERTRANSPORTDATATYPE]);
}

/* DiagnosticsLevel */
static UA_INLINE void
UA_DiagnosticsLevel_init(UA_DiagnosticsLevel *p) {
    memset(p, 0, sizeof(UA_DiagnosticsLevel));
}

static UA_INLINE UA_DiagnosticsLevel *
UA_DiagnosticsLevel_new(void) {
    return (UA_DiagnosticsLevel*)UA_new(&UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}

static UA_INLINE UA_StatusCode
UA_DiagnosticsLevel_copy(const UA_DiagnosticsLevel *src, UA_DiagnosticsLevel *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}

UA_DEPRECATED static UA_INLINE void
UA_DiagnosticsLevel_deleteMembers(UA_DiagnosticsLevel *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}

static UA_INLINE void
UA_DiagnosticsLevel_clear(UA_DiagnosticsLevel *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}

static UA_INLINE void
UA_DiagnosticsLevel_delete(UA_DiagnosticsLevel *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DIAGNOSTICSLEVEL]);
}

/* PubSubDiagnosticsCounterClassification */
static UA_INLINE void
UA_PubSubDiagnosticsCounterClassification_init(UA_PubSubDiagnosticsCounterClassification *p) {
    memset(p, 0, sizeof(UA_PubSubDiagnosticsCounterClassification));
}

static UA_INLINE UA_PubSubDiagnosticsCounterClassification *
UA_PubSubDiagnosticsCounterClassification_new(void) {
    return (UA_PubSubDiagnosticsCounterClassification*)UA_new(&UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}

static UA_INLINE UA_StatusCode
UA_PubSubDiagnosticsCounterClassification_copy(const UA_PubSubDiagnosticsCounterClassification *src, UA_PubSubDiagnosticsCounterClassification *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubDiagnosticsCounterClassification_deleteMembers(UA_PubSubDiagnosticsCounterClassification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}

static UA_INLINE void
UA_PubSubDiagnosticsCounterClassification_clear(UA_PubSubDiagnosticsCounterClassification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}

static UA_INLINE void
UA_PubSubDiagnosticsCounterClassification_delete(UA_PubSubDiagnosticsCounterClassification *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBSUBDIAGNOSTICSCOUNTERCLASSIFICATION]);
}

/* AliasNameDataType */
static UA_INLINE void
UA_AliasNameDataType_init(UA_AliasNameDataType *p) {
    memset(p, 0, sizeof(UA_AliasNameDataType));
}

static UA_INLINE UA_AliasNameDataType *
UA_AliasNameDataType_new(void) {
    return (UA_AliasNameDataType*)UA_new(&UA_TYPES[UA_TYPES_ALIASNAMEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_AliasNameDataType_copy(const UA_AliasNameDataType *src, UA_AliasNameDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ALIASNAMEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AliasNameDataType_deleteMembers(UA_AliasNameDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ALIASNAMEDATATYPE]);
}

static UA_INLINE void
UA_AliasNameDataType_clear(UA_AliasNameDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ALIASNAMEDATATYPE]);
}

static UA_INLINE void
UA_AliasNameDataType_delete(UA_AliasNameDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ALIASNAMEDATATYPE]);
}

/* IdType */
static UA_INLINE void
UA_IdType_init(UA_IdType *p) {
    memset(p, 0, sizeof(UA_IdType));
}

static UA_INLINE UA_IdType *
UA_IdType_new(void) {
    return (UA_IdType*)UA_new(&UA_TYPES[UA_TYPES_IDTYPE]);
}

static UA_INLINE UA_StatusCode
UA_IdType_copy(const UA_IdType *src, UA_IdType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_IDTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_IdType_deleteMembers(UA_IdType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDTYPE]);
}

static UA_INLINE void
UA_IdType_clear(UA_IdType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_IDTYPE]);
}

static UA_INLINE void
UA_IdType_delete(UA_IdType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_IDTYPE]);
}

/* NodeClass */
static UA_INLINE void
UA_NodeClass_init(UA_NodeClass *p) {
    memset(p, 0, sizeof(UA_NodeClass));
}

static UA_INLINE UA_NodeClass *
UA_NodeClass_new(void) {
    return (UA_NodeClass*)UA_new(&UA_TYPES[UA_TYPES_NODECLASS]);
}

static UA_INLINE UA_StatusCode
UA_NodeClass_copy(const UA_NodeClass *src, UA_NodeClass *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODECLASS]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeClass_deleteMembers(UA_NodeClass *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODECLASS]);
}

static UA_INLINE void
UA_NodeClass_clear(UA_NodeClass *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODECLASS]);
}

static UA_INLINE void
UA_NodeClass_delete(UA_NodeClass *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODECLASS]);
}

/* PermissionType */
static UA_INLINE void
UA_PermissionType_init(UA_PermissionType *p) {
    memset(p, 0, sizeof(UA_PermissionType));
}

static UA_INLINE UA_PermissionType *
UA_PermissionType_new(void) {
    return (UA_PermissionType*)UA_new(&UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}

static UA_INLINE UA_StatusCode
UA_PermissionType_copy(const UA_PermissionType *src, UA_PermissionType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PermissionType_deleteMembers(UA_PermissionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}

static UA_INLINE void
UA_PermissionType_clear(UA_PermissionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}

static UA_INLINE void
UA_PermissionType_delete(UA_PermissionType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PERMISSIONTYPE]);
}

/* AccessLevelType */
static UA_INLINE void
UA_AccessLevelType_init(UA_AccessLevelType *p) {
    memset(p, 0, sizeof(UA_AccessLevelType));
}

static UA_INLINE UA_AccessLevelType *
UA_AccessLevelType_new(void) {
    return (UA_AccessLevelType*)UA_new(&UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}

static UA_INLINE UA_StatusCode
UA_AccessLevelType_copy(const UA_AccessLevelType *src, UA_AccessLevelType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AccessLevelType_deleteMembers(UA_AccessLevelType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}

static UA_INLINE void
UA_AccessLevelType_clear(UA_AccessLevelType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}

static UA_INLINE void
UA_AccessLevelType_delete(UA_AccessLevelType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ACCESSLEVELTYPE]);
}

/* AccessLevelExType */
static UA_INLINE void
UA_AccessLevelExType_init(UA_AccessLevelExType *p) {
    memset(p, 0, sizeof(UA_AccessLevelExType));
}

static UA_INLINE UA_AccessLevelExType *
UA_AccessLevelExType_new(void) {
    return (UA_AccessLevelExType*)UA_new(&UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}

static UA_INLINE UA_StatusCode
UA_AccessLevelExType_copy(const UA_AccessLevelExType *src, UA_AccessLevelExType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AccessLevelExType_deleteMembers(UA_AccessLevelExType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}

static UA_INLINE void
UA_AccessLevelExType_clear(UA_AccessLevelExType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}

static UA_INLINE void
UA_AccessLevelExType_delete(UA_AccessLevelExType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ACCESSLEVELEXTYPE]);
}

/* EventNotifierType */
static UA_INLINE void
UA_EventNotifierType_init(UA_EventNotifierType *p) {
    memset(p, 0, sizeof(UA_EventNotifierType));
}

static UA_INLINE UA_EventNotifierType *
UA_EventNotifierType_new(void) {
    return (UA_EventNotifierType*)UA_new(&UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}

static UA_INLINE UA_StatusCode
UA_EventNotifierType_copy(const UA_EventNotifierType *src, UA_EventNotifierType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EventNotifierType_deleteMembers(UA_EventNotifierType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}

static UA_INLINE void
UA_EventNotifierType_clear(UA_EventNotifierType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}

static UA_INLINE void
UA_EventNotifierType_delete(UA_EventNotifierType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EVENTNOTIFIERTYPE]);
}

/* AccessRestrictionType */
static UA_INLINE void
UA_AccessRestrictionType_init(UA_AccessRestrictionType *p) {
    memset(p, 0, sizeof(UA_AccessRestrictionType));
}

static UA_INLINE UA_AccessRestrictionType *
UA_AccessRestrictionType_new(void) {
    return (UA_AccessRestrictionType*)UA_new(&UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}

static UA_INLINE UA_StatusCode
UA_AccessRestrictionType_copy(const UA_AccessRestrictionType *src, UA_AccessRestrictionType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AccessRestrictionType_deleteMembers(UA_AccessRestrictionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}

static UA_INLINE void
UA_AccessRestrictionType_clear(UA_AccessRestrictionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}

static UA_INLINE void
UA_AccessRestrictionType_delete(UA_AccessRestrictionType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ACCESSRESTRICTIONTYPE]);
}

/* RolePermissionType */
static UA_INLINE void
UA_RolePermissionType_init(UA_RolePermissionType *p) {
    memset(p, 0, sizeof(UA_RolePermissionType));
}

static UA_INLINE UA_RolePermissionType *
UA_RolePermissionType_new(void) {
    return (UA_RolePermissionType*)UA_new(&UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}

static UA_INLINE UA_StatusCode
UA_RolePermissionType_copy(const UA_RolePermissionType *src, UA_RolePermissionType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RolePermissionType_deleteMembers(UA_RolePermissionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}

static UA_INLINE void
UA_RolePermissionType_clear(UA_RolePermissionType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}

static UA_INLINE void
UA_RolePermissionType_delete(UA_RolePermissionType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ROLEPERMISSIONTYPE]);
}

/* StructureType */
static UA_INLINE void
UA_StructureType_init(UA_StructureType *p) {
    memset(p, 0, sizeof(UA_StructureType));
}

static UA_INLINE UA_StructureType *
UA_StructureType_new(void) {
    return (UA_StructureType*)UA_new(&UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}

static UA_INLINE UA_StatusCode
UA_StructureType_copy(const UA_StructureType *src, UA_StructureType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StructureType_deleteMembers(UA_StructureType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}

static UA_INLINE void
UA_StructureType_clear(UA_StructureType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}

static UA_INLINE void
UA_StructureType_delete(UA_StructureType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STRUCTURETYPE]);
}

/* StructureField */
static UA_INLINE void
UA_StructureField_init(UA_StructureField *p) {
    memset(p, 0, sizeof(UA_StructureField));
}

static UA_INLINE UA_StructureField *
UA_StructureField_new(void) {
    return (UA_StructureField*)UA_new(&UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}

static UA_INLINE UA_StatusCode
UA_StructureField_copy(const UA_StructureField *src, UA_StructureField *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}

UA_DEPRECATED static UA_INLINE void
UA_StructureField_deleteMembers(UA_StructureField *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}

static UA_INLINE void
UA_StructureField_clear(UA_StructureField *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}

static UA_INLINE void
UA_StructureField_delete(UA_StructureField *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STRUCTUREFIELD]);
}

/* StructureDefinition */
static UA_INLINE void
UA_StructureDefinition_init(UA_StructureDefinition *p) {
    memset(p, 0, sizeof(UA_StructureDefinition));
}

static UA_INLINE UA_StructureDefinition *
UA_StructureDefinition_new(void) {
    return (UA_StructureDefinition*)UA_new(&UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}

static UA_INLINE UA_StatusCode
UA_StructureDefinition_copy(const UA_StructureDefinition *src, UA_StructureDefinition *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}

UA_DEPRECATED static UA_INLINE void
UA_StructureDefinition_deleteMembers(UA_StructureDefinition *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}

static UA_INLINE void
UA_StructureDefinition_clear(UA_StructureDefinition *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}

static UA_INLINE void
UA_StructureDefinition_delete(UA_StructureDefinition *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STRUCTUREDEFINITION]);
}

/* ReferenceNode */
static UA_INLINE void
UA_ReferenceNode_init(UA_ReferenceNode *p) {
    memset(p, 0, sizeof(UA_ReferenceNode));
}

static UA_INLINE UA_ReferenceNode *
UA_ReferenceNode_new(void) {
    return (UA_ReferenceNode*)UA_new(&UA_TYPES[UA_TYPES_REFERENCENODE]);
}

static UA_INLINE UA_StatusCode
UA_ReferenceNode_copy(const UA_ReferenceNode *src, UA_ReferenceNode *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCENODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReferenceNode_deleteMembers(UA_ReferenceNode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCENODE]);
}

static UA_INLINE void
UA_ReferenceNode_clear(UA_ReferenceNode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCENODE]);
}

static UA_INLINE void
UA_ReferenceNode_delete(UA_ReferenceNode *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCENODE]);
}

/* Argument */
static UA_INLINE void
UA_Argument_init(UA_Argument *p) {
    memset(p, 0, sizeof(UA_Argument));
}

static UA_INLINE UA_Argument *
UA_Argument_new(void) {
    return (UA_Argument*)UA_new(&UA_TYPES[UA_TYPES_ARGUMENT]);
}

static UA_INLINE UA_StatusCode
UA_Argument_copy(const UA_Argument *src, UA_Argument *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ARGUMENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_Argument_deleteMembers(UA_Argument *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ARGUMENT]);
}

static UA_INLINE void
UA_Argument_clear(UA_Argument *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ARGUMENT]);
}

static UA_INLINE void
UA_Argument_delete(UA_Argument *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ARGUMENT]);
}

/* EnumValueType */
static UA_INLINE void
UA_EnumValueType_init(UA_EnumValueType *p) {
    memset(p, 0, sizeof(UA_EnumValueType));
}

static UA_INLINE UA_EnumValueType *
UA_EnumValueType_new(void) {
    return (UA_EnumValueType*)UA_new(&UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnumValueType_copy(const UA_EnumValueType *src, UA_EnumValueType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnumValueType_deleteMembers(UA_EnumValueType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}

static UA_INLINE void
UA_EnumValueType_clear(UA_EnumValueType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}

static UA_INLINE void
UA_EnumValueType_delete(UA_EnumValueType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
}

/* EnumField */
static UA_INLINE void
UA_EnumField_init(UA_EnumField *p) {
    memset(p, 0, sizeof(UA_EnumField));
}

static UA_INLINE UA_EnumField *
UA_EnumField_new(void) {
    return (UA_EnumField*)UA_new(&UA_TYPES[UA_TYPES_ENUMFIELD]);
}

static UA_INLINE UA_StatusCode
UA_EnumField_copy(const UA_EnumField *src, UA_EnumField *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENUMFIELD]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnumField_deleteMembers(UA_EnumField *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMFIELD]);
}

static UA_INLINE void
UA_EnumField_clear(UA_EnumField *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMFIELD]);
}

static UA_INLINE void
UA_EnumField_delete(UA_EnumField *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENUMFIELD]);
}

/* OptionSet */
static UA_INLINE void
UA_OptionSet_init(UA_OptionSet *p) {
    memset(p, 0, sizeof(UA_OptionSet));
}

static UA_INLINE UA_OptionSet *
UA_OptionSet_new(void) {
    return (UA_OptionSet*)UA_new(&UA_TYPES[UA_TYPES_OPTIONSET]);
}

static UA_INLINE UA_StatusCode
UA_OptionSet_copy(const UA_OptionSet *src, UA_OptionSet *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPTIONSET]);
}

UA_DEPRECATED static UA_INLINE void
UA_OptionSet_deleteMembers(UA_OptionSet *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPTIONSET]);
}

static UA_INLINE void
UA_OptionSet_clear(UA_OptionSet *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPTIONSET]);
}

static UA_INLINE void
UA_OptionSet_delete(UA_OptionSet *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OPTIONSET]);
}

/* Union */
static UA_INLINE void
UA_Union_init(UA_Union *p) {
    memset(p, 0, sizeof(UA_Union));
}

static UA_INLINE UA_Union *
UA_Union_new(void) {
    return (UA_Union*)UA_new(&UA_TYPES[UA_TYPES_UNION]);
}

static UA_INLINE UA_StatusCode
UA_Union_copy(const UA_Union *src, UA_Union *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UNION]);
}

UA_DEPRECATED static UA_INLINE void
UA_Union_deleteMembers(UA_Union *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNION]);
}

static UA_INLINE void
UA_Union_clear(UA_Union *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNION]);
}

static UA_INLINE void
UA_Union_delete(UA_Union *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UNION]);
}

/* NormalizedString */
static UA_INLINE void
UA_NormalizedString_init(UA_NormalizedString *p) {
    memset(p, 0, sizeof(UA_NormalizedString));
}

static UA_INLINE UA_NormalizedString *
UA_NormalizedString_new(void) {
    return (UA_NormalizedString*)UA_new(&UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}

static UA_INLINE UA_StatusCode
UA_NormalizedString_copy(const UA_NormalizedString *src, UA_NormalizedString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_NormalizedString_deleteMembers(UA_NormalizedString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}

static UA_INLINE void
UA_NormalizedString_clear(UA_NormalizedString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}

static UA_INLINE void
UA_NormalizedString_delete(UA_NormalizedString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NORMALIZEDSTRING]);
}

/* DecimalString */
static UA_INLINE void
UA_DecimalString_init(UA_DecimalString *p) {
    memset(p, 0, sizeof(UA_DecimalString));
}

static UA_INLINE UA_DecimalString *
UA_DecimalString_new(void) {
    return (UA_DecimalString*)UA_new(&UA_TYPES[UA_TYPES_DECIMALSTRING]);
}

static UA_INLINE UA_StatusCode
UA_DecimalString_copy(const UA_DecimalString *src, UA_DecimalString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DECIMALSTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_DecimalString_deleteMembers(UA_DecimalString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DECIMALSTRING]);
}

static UA_INLINE void
UA_DecimalString_clear(UA_DecimalString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DECIMALSTRING]);
}

static UA_INLINE void
UA_DecimalString_delete(UA_DecimalString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DECIMALSTRING]);
}

/* DurationString */
static UA_INLINE void
UA_DurationString_init(UA_DurationString *p) {
    memset(p, 0, sizeof(UA_DurationString));
}

static UA_INLINE UA_DurationString *
UA_DurationString_new(void) {
    return (UA_DurationString*)UA_new(&UA_TYPES[UA_TYPES_DURATIONSTRING]);
}

static UA_INLINE UA_StatusCode
UA_DurationString_copy(const UA_DurationString *src, UA_DurationString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DURATIONSTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_DurationString_deleteMembers(UA_DurationString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DURATIONSTRING]);
}

static UA_INLINE void
UA_DurationString_clear(UA_DurationString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DURATIONSTRING]);
}

static UA_INLINE void
UA_DurationString_delete(UA_DurationString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DURATIONSTRING]);
}

/* TimeString */
static UA_INLINE void
UA_TimeString_init(UA_TimeString *p) {
    memset(p, 0, sizeof(UA_TimeString));
}

static UA_INLINE UA_TimeString *
UA_TimeString_new(void) {
    return (UA_TimeString*)UA_new(&UA_TYPES[UA_TYPES_TIMESTRING]);
}

static UA_INLINE UA_StatusCode
UA_TimeString_copy(const UA_TimeString *src, UA_TimeString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TIMESTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_TimeString_deleteMembers(UA_TimeString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMESTRING]);
}

static UA_INLINE void
UA_TimeString_clear(UA_TimeString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMESTRING]);
}

static UA_INLINE void
UA_TimeString_delete(UA_TimeString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TIMESTRING]);
}

/* DateString */
static UA_INLINE void
UA_DateString_init(UA_DateString *p) {
    memset(p, 0, sizeof(UA_DateString));
}

static UA_INLINE UA_DateString *
UA_DateString_new(void) {
    return (UA_DateString*)UA_new(&UA_TYPES[UA_TYPES_DATESTRING]);
}

static UA_INLINE UA_StatusCode
UA_DateString_copy(const UA_DateString *src, UA_DateString *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATESTRING]);
}

UA_DEPRECATED static UA_INLINE void
UA_DateString_deleteMembers(UA_DateString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATESTRING]);
}

static UA_INLINE void
UA_DateString_clear(UA_DateString *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATESTRING]);
}

static UA_INLINE void
UA_DateString_delete(UA_DateString *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATESTRING]);
}

/* Duration */
static UA_INLINE void
UA_Duration_init(UA_Duration *p) {
    memset(p, 0, sizeof(UA_Duration));
}

static UA_INLINE UA_Duration *
UA_Duration_new(void) {
    return (UA_Duration*)UA_new(&UA_TYPES[UA_TYPES_DURATION]);
}

static UA_INLINE UA_StatusCode
UA_Duration_copy(const UA_Duration *src, UA_Duration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DURATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_Duration_deleteMembers(UA_Duration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DURATION]);
}

static UA_INLINE void
UA_Duration_clear(UA_Duration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DURATION]);
}

static UA_INLINE void
UA_Duration_delete(UA_Duration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DURATION]);
}

/* UtcTime */
static UA_INLINE void
UA_UtcTime_init(UA_UtcTime *p) {
    memset(p, 0, sizeof(UA_UtcTime));
}

static UA_INLINE UA_UtcTime *
UA_UtcTime_new(void) {
    return (UA_UtcTime*)UA_new(&UA_TYPES[UA_TYPES_UTCTIME]);
}

static UA_INLINE UA_StatusCode
UA_UtcTime_copy(const UA_UtcTime *src, UA_UtcTime *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UTCTIME]);
}

UA_DEPRECATED static UA_INLINE void
UA_UtcTime_deleteMembers(UA_UtcTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UTCTIME]);
}

static UA_INLINE void
UA_UtcTime_clear(UA_UtcTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UTCTIME]);
}

static UA_INLINE void
UA_UtcTime_delete(UA_UtcTime *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UTCTIME]);
}

/* LocaleId */
static UA_INLINE void
UA_LocaleId_init(UA_LocaleId *p) {
    memset(p, 0, sizeof(UA_LocaleId));
}

static UA_INLINE UA_LocaleId *
UA_LocaleId_new(void) {
    return (UA_LocaleId*)UA_new(&UA_TYPES[UA_TYPES_LOCALEID]);
}

static UA_INLINE UA_StatusCode
UA_LocaleId_copy(const UA_LocaleId *src, UA_LocaleId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_LOCALEID]);
}

UA_DEPRECATED static UA_INLINE void
UA_LocaleId_deleteMembers(UA_LocaleId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LOCALEID]);
}

static UA_INLINE void
UA_LocaleId_clear(UA_LocaleId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LOCALEID]);
}

static UA_INLINE void
UA_LocaleId_delete(UA_LocaleId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_LOCALEID]);
}

/* TimeZoneDataType */
static UA_INLINE void
UA_TimeZoneDataType_init(UA_TimeZoneDataType *p) {
    memset(p, 0, sizeof(UA_TimeZoneDataType));
}

static UA_INLINE UA_TimeZoneDataType *
UA_TimeZoneDataType_new(void) {
    return (UA_TimeZoneDataType*)UA_new(&UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_TimeZoneDataType_copy(const UA_TimeZoneDataType *src, UA_TimeZoneDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TimeZoneDataType_deleteMembers(UA_TimeZoneDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}

static UA_INLINE void
UA_TimeZoneDataType_clear(UA_TimeZoneDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}

static UA_INLINE void
UA_TimeZoneDataType_delete(UA_TimeZoneDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TIMEZONEDATATYPE]);
}

/* Index */
static UA_INLINE void
UA_Index_init(UA_Index *p) {
    memset(p, 0, sizeof(UA_Index));
}

static UA_INLINE UA_Index *
UA_Index_new(void) {
    return (UA_Index*)UA_new(&UA_TYPES[UA_TYPES_INDEX]);
}

static UA_INLINE UA_StatusCode
UA_Index_copy(const UA_Index *src, UA_Index *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_INDEX]);
}

UA_DEPRECATED static UA_INLINE void
UA_Index_deleteMembers(UA_Index *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INDEX]);
}

static UA_INLINE void
UA_Index_clear(UA_Index *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INDEX]);
}

static UA_INLINE void
UA_Index_delete(UA_Index *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_INDEX]);
}

/* IntegerId */
static UA_INLINE void
UA_IntegerId_init(UA_IntegerId *p) {
    memset(p, 0, sizeof(UA_IntegerId));
}

static UA_INLINE UA_IntegerId *
UA_IntegerId_new(void) {
    return (UA_IntegerId*)UA_new(&UA_TYPES[UA_TYPES_INTEGERID]);
}

static UA_INLINE UA_StatusCode
UA_IntegerId_copy(const UA_IntegerId *src, UA_IntegerId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_INTEGERID]);
}

UA_DEPRECATED static UA_INLINE void
UA_IntegerId_deleteMembers(UA_IntegerId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INTEGERID]);
}

static UA_INLINE void
UA_IntegerId_clear(UA_IntegerId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_INTEGERID]);
}

static UA_INLINE void
UA_IntegerId_delete(UA_IntegerId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_INTEGERID]);
}

/* ApplicationType */
static UA_INLINE void
UA_ApplicationType_init(UA_ApplicationType *p) {
    memset(p, 0, sizeof(UA_ApplicationType));
}

static UA_INLINE UA_ApplicationType *
UA_ApplicationType_new(void) {
    return (UA_ApplicationType*)UA_new(&UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}

static UA_INLINE UA_StatusCode
UA_ApplicationType_copy(const UA_ApplicationType *src, UA_ApplicationType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ApplicationType_deleteMembers(UA_ApplicationType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}

static UA_INLINE void
UA_ApplicationType_clear(UA_ApplicationType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}

static UA_INLINE void
UA_ApplicationType_delete(UA_ApplicationType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]);
}

/* ApplicationDescription */
static UA_INLINE void
UA_ApplicationDescription_init(UA_ApplicationDescription *p) {
    memset(p, 0, sizeof(UA_ApplicationDescription));
}

static UA_INLINE UA_ApplicationDescription *
UA_ApplicationDescription_new(void) {
    return (UA_ApplicationDescription*)UA_new(&UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_ApplicationDescription_copy(const UA_ApplicationDescription *src, UA_ApplicationDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_ApplicationDescription_deleteMembers(UA_ApplicationDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}

static UA_INLINE void
UA_ApplicationDescription_clear(UA_ApplicationDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}

static UA_INLINE void
UA_ApplicationDescription_delete(UA_ApplicationDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]);
}

/* RequestHeader */
static UA_INLINE void
UA_RequestHeader_init(UA_RequestHeader *p) {
    memset(p, 0, sizeof(UA_RequestHeader));
}

static UA_INLINE UA_RequestHeader *
UA_RequestHeader_new(void) {
    return (UA_RequestHeader*)UA_new(&UA_TYPES[UA_TYPES_REQUESTHEADER]);
}

static UA_INLINE UA_StatusCode
UA_RequestHeader_copy(const UA_RequestHeader *src, UA_RequestHeader *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REQUESTHEADER]);
}

UA_DEPRECATED static UA_INLINE void
UA_RequestHeader_deleteMembers(UA_RequestHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REQUESTHEADER]);
}

static UA_INLINE void
UA_RequestHeader_clear(UA_RequestHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REQUESTHEADER]);
}

static UA_INLINE void
UA_RequestHeader_delete(UA_RequestHeader *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REQUESTHEADER]);
}

/* ResponseHeader */
static UA_INLINE void
UA_ResponseHeader_init(UA_ResponseHeader *p) {
    memset(p, 0, sizeof(UA_ResponseHeader));
}

static UA_INLINE UA_ResponseHeader *
UA_ResponseHeader_new(void) {
    return (UA_ResponseHeader*)UA_new(&UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}

static UA_INLINE UA_StatusCode
UA_ResponseHeader_copy(const UA_ResponseHeader *src, UA_ResponseHeader *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}

UA_DEPRECATED static UA_INLINE void
UA_ResponseHeader_deleteMembers(UA_ResponseHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}

static UA_INLINE void
UA_ResponseHeader_clear(UA_ResponseHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}

static UA_INLINE void
UA_ResponseHeader_delete(UA_ResponseHeader *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RESPONSEHEADER]);
}

/* VersionTime */
static UA_INLINE void
UA_VersionTime_init(UA_VersionTime *p) {
    memset(p, 0, sizeof(UA_VersionTime));
}

static UA_INLINE UA_VersionTime *
UA_VersionTime_new(void) {
    return (UA_VersionTime*)UA_new(&UA_TYPES[UA_TYPES_VERSIONTIME]);
}

static UA_INLINE UA_StatusCode
UA_VersionTime_copy(const UA_VersionTime *src, UA_VersionTime *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VERSIONTIME]);
}

UA_DEPRECATED static UA_INLINE void
UA_VersionTime_deleteMembers(UA_VersionTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VERSIONTIME]);
}

static UA_INLINE void
UA_VersionTime_clear(UA_VersionTime *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VERSIONTIME]);
}

static UA_INLINE void
UA_VersionTime_delete(UA_VersionTime *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VERSIONTIME]);
}

/* ServiceFault */
static UA_INLINE void
UA_ServiceFault_init(UA_ServiceFault *p) {
    memset(p, 0, sizeof(UA_ServiceFault));
}

static UA_INLINE UA_ServiceFault *
UA_ServiceFault_new(void) {
    return (UA_ServiceFault*)UA_new(&UA_TYPES[UA_TYPES_SERVICEFAULT]);
}

static UA_INLINE UA_StatusCode
UA_ServiceFault_copy(const UA_ServiceFault *src, UA_ServiceFault *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVICEFAULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServiceFault_deleteMembers(UA_ServiceFault *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVICEFAULT]);
}

static UA_INLINE void
UA_ServiceFault_clear(UA_ServiceFault *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVICEFAULT]);
}

static UA_INLINE void
UA_ServiceFault_delete(UA_ServiceFault *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVICEFAULT]);
}

/* SessionlessInvokeRequestType */
static UA_INLINE void
UA_SessionlessInvokeRequestType_init(UA_SessionlessInvokeRequestType *p) {
    memset(p, 0, sizeof(UA_SessionlessInvokeRequestType));
}

static UA_INLINE UA_SessionlessInvokeRequestType *
UA_SessionlessInvokeRequestType_new(void) {
    return (UA_SessionlessInvokeRequestType*)UA_new(&UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}

static UA_INLINE UA_StatusCode
UA_SessionlessInvokeRequestType_copy(const UA_SessionlessInvokeRequestType *src, UA_SessionlessInvokeRequestType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SessionlessInvokeRequestType_deleteMembers(UA_SessionlessInvokeRequestType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}

static UA_INLINE void
UA_SessionlessInvokeRequestType_clear(UA_SessionlessInvokeRequestType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}

static UA_INLINE void
UA_SessionlessInvokeRequestType_delete(UA_SessionlessInvokeRequestType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKEREQUESTTYPE]);
}

/* SessionlessInvokeResponseType */
static UA_INLINE void
UA_SessionlessInvokeResponseType_init(UA_SessionlessInvokeResponseType *p) {
    memset(p, 0, sizeof(UA_SessionlessInvokeResponseType));
}

static UA_INLINE UA_SessionlessInvokeResponseType *
UA_SessionlessInvokeResponseType_new(void) {
    return (UA_SessionlessInvokeResponseType*)UA_new(&UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}

static UA_INLINE UA_StatusCode
UA_SessionlessInvokeResponseType_copy(const UA_SessionlessInvokeResponseType *src, UA_SessionlessInvokeResponseType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SessionlessInvokeResponseType_deleteMembers(UA_SessionlessInvokeResponseType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}

static UA_INLINE void
UA_SessionlessInvokeResponseType_clear(UA_SessionlessInvokeResponseType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}

static UA_INLINE void
UA_SessionlessInvokeResponseType_delete(UA_SessionlessInvokeResponseType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SESSIONLESSINVOKERESPONSETYPE]);
}

/* FindServersRequest */
static UA_INLINE void
UA_FindServersRequest_init(UA_FindServersRequest *p) {
    memset(p, 0, sizeof(UA_FindServersRequest));
}

static UA_INLINE UA_FindServersRequest *
UA_FindServersRequest_new(void) {
    return (UA_FindServersRequest*)UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_FindServersRequest_copy(const UA_FindServersRequest *src, UA_FindServersRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_FindServersRequest_deleteMembers(UA_FindServersRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}

static UA_INLINE void
UA_FindServersRequest_clear(UA_FindServersRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}

static UA_INLINE void
UA_FindServersRequest_delete(UA_FindServersRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]);
}

/* FindServersResponse */
static UA_INLINE void
UA_FindServersResponse_init(UA_FindServersResponse *p) {
    memset(p, 0, sizeof(UA_FindServersResponse));
}

static UA_INLINE UA_FindServersResponse *
UA_FindServersResponse_new(void) {
    return (UA_FindServersResponse*)UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_FindServersResponse_copy(const UA_FindServersResponse *src, UA_FindServersResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_FindServersResponse_deleteMembers(UA_FindServersResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}

static UA_INLINE void
UA_FindServersResponse_clear(UA_FindServersResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}

static UA_INLINE void
UA_FindServersResponse_delete(UA_FindServersResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]);
}

/* ServerOnNetwork */
static UA_INLINE void
UA_ServerOnNetwork_init(UA_ServerOnNetwork *p) {
    memset(p, 0, sizeof(UA_ServerOnNetwork));
}

static UA_INLINE UA_ServerOnNetwork *
UA_ServerOnNetwork_new(void) {
    return (UA_ServerOnNetwork*)UA_new(&UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}

static UA_INLINE UA_StatusCode
UA_ServerOnNetwork_copy(const UA_ServerOnNetwork *src, UA_ServerOnNetwork *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServerOnNetwork_deleteMembers(UA_ServerOnNetwork *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}

static UA_INLINE void
UA_ServerOnNetwork_clear(UA_ServerOnNetwork *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}

static UA_INLINE void
UA_ServerOnNetwork_delete(UA_ServerOnNetwork *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
}

/* FindServersOnNetworkRequest */
static UA_INLINE void
UA_FindServersOnNetworkRequest_init(UA_FindServersOnNetworkRequest *p) {
    memset(p, 0, sizeof(UA_FindServersOnNetworkRequest));
}

static UA_INLINE UA_FindServersOnNetworkRequest *
UA_FindServersOnNetworkRequest_new(void) {
    return (UA_FindServersOnNetworkRequest*)UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkRequest_copy(const UA_FindServersOnNetworkRequest *src, UA_FindServersOnNetworkRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_FindServersOnNetworkRequest_deleteMembers(UA_FindServersOnNetworkRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}

static UA_INLINE void
UA_FindServersOnNetworkRequest_clear(UA_FindServersOnNetworkRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}

static UA_INLINE void
UA_FindServersOnNetworkRequest_delete(UA_FindServersOnNetworkRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKREQUEST]);
}

/* FindServersOnNetworkResponse */
static UA_INLINE void
UA_FindServersOnNetworkResponse_init(UA_FindServersOnNetworkResponse *p) {
    memset(p, 0, sizeof(UA_FindServersOnNetworkResponse));
}

static UA_INLINE UA_FindServersOnNetworkResponse *
UA_FindServersOnNetworkResponse_new(void) {
    return (UA_FindServersOnNetworkResponse*)UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_FindServersOnNetworkResponse_copy(const UA_FindServersOnNetworkResponse *src, UA_FindServersOnNetworkResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_FindServersOnNetworkResponse_deleteMembers(UA_FindServersOnNetworkResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}

static UA_INLINE void
UA_FindServersOnNetworkResponse_clear(UA_FindServersOnNetworkResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}

static UA_INLINE void
UA_FindServersOnNetworkResponse_delete(UA_FindServersOnNetworkResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSONNETWORKRESPONSE]);
}

/* ApplicationInstanceCertificate */
static UA_INLINE void
UA_ApplicationInstanceCertificate_init(UA_ApplicationInstanceCertificate *p) {
    memset(p, 0, sizeof(UA_ApplicationInstanceCertificate));
}

static UA_INLINE UA_ApplicationInstanceCertificate *
UA_ApplicationInstanceCertificate_new(void) {
    return (UA_ApplicationInstanceCertificate*)UA_new(&UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}

static UA_INLINE UA_StatusCode
UA_ApplicationInstanceCertificate_copy(const UA_ApplicationInstanceCertificate *src, UA_ApplicationInstanceCertificate *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ApplicationInstanceCertificate_deleteMembers(UA_ApplicationInstanceCertificate *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}

static UA_INLINE void
UA_ApplicationInstanceCertificate_clear(UA_ApplicationInstanceCertificate *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}

static UA_INLINE void
UA_ApplicationInstanceCertificate_delete(UA_ApplicationInstanceCertificate *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_APPLICATIONINSTANCECERTIFICATE]);
}

/* MessageSecurityMode */
static UA_INLINE void
UA_MessageSecurityMode_init(UA_MessageSecurityMode *p) {
    memset(p, 0, sizeof(UA_MessageSecurityMode));
}

static UA_INLINE UA_MessageSecurityMode *
UA_MessageSecurityMode_new(void) {
    return (UA_MessageSecurityMode*)UA_new(&UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}

static UA_INLINE UA_StatusCode
UA_MessageSecurityMode_copy(const UA_MessageSecurityMode *src, UA_MessageSecurityMode *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageSecurityMode_deleteMembers(UA_MessageSecurityMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}

static UA_INLINE void
UA_MessageSecurityMode_clear(UA_MessageSecurityMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}

static UA_INLINE void
UA_MessageSecurityMode_delete(UA_MessageSecurityMode *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]);
}

/* UserTokenType */
static UA_INLINE void
UA_UserTokenType_init(UA_UserTokenType *p) {
    memset(p, 0, sizeof(UA_UserTokenType));
}

static UA_INLINE UA_UserTokenType *
UA_UserTokenType_new(void) {
    return (UA_UserTokenType*)UA_new(&UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}

static UA_INLINE UA_StatusCode
UA_UserTokenType_copy(const UA_UserTokenType *src, UA_UserTokenType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UserTokenType_deleteMembers(UA_UserTokenType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}

static UA_INLINE void
UA_UserTokenType_clear(UA_UserTokenType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}

static UA_INLINE void
UA_UserTokenType_delete(UA_UserTokenType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_USERTOKENTYPE]);
}

/* UserTokenPolicy */
static UA_INLINE void
UA_UserTokenPolicy_init(UA_UserTokenPolicy *p) {
    memset(p, 0, sizeof(UA_UserTokenPolicy));
}

static UA_INLINE UA_UserTokenPolicy *
UA_UserTokenPolicy_new(void) {
    return (UA_UserTokenPolicy*)UA_new(&UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}

static UA_INLINE UA_StatusCode
UA_UserTokenPolicy_copy(const UA_UserTokenPolicy *src, UA_UserTokenPolicy *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}

UA_DEPRECATED static UA_INLINE void
UA_UserTokenPolicy_deleteMembers(UA_UserTokenPolicy *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}

static UA_INLINE void
UA_UserTokenPolicy_clear(UA_UserTokenPolicy *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}

static UA_INLINE void
UA_UserTokenPolicy_delete(UA_UserTokenPolicy *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]);
}

/* EndpointDescription */
static UA_INLINE void
UA_EndpointDescription_init(UA_EndpointDescription *p) {
    memset(p, 0, sizeof(UA_EndpointDescription));
}

static UA_INLINE UA_EndpointDescription *
UA_EndpointDescription_new(void) {
    return (UA_EndpointDescription*)UA_new(&UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_EndpointDescription_copy(const UA_EndpointDescription *src, UA_EndpointDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndpointDescription_deleteMembers(UA_EndpointDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}

static UA_INLINE void
UA_EndpointDescription_clear(UA_EndpointDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}

static UA_INLINE void
UA_EndpointDescription_delete(UA_EndpointDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
}

/* GetEndpointsRequest */
static UA_INLINE void
UA_GetEndpointsRequest_init(UA_GetEndpointsRequest *p) {
    memset(p, 0, sizeof(UA_GetEndpointsRequest));
}

static UA_INLINE UA_GetEndpointsRequest *
UA_GetEndpointsRequest_new(void) {
    return (UA_GetEndpointsRequest*)UA_new(&UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_GetEndpointsRequest_copy(const UA_GetEndpointsRequest *src, UA_GetEndpointsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetEndpointsRequest_deleteMembers(UA_GetEndpointsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}

static UA_INLINE void
UA_GetEndpointsRequest_clear(UA_GetEndpointsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}

static UA_INLINE void
UA_GetEndpointsRequest_delete(UA_GetEndpointsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]);
}

/* GetEndpointsResponse */
static UA_INLINE void
UA_GetEndpointsResponse_init(UA_GetEndpointsResponse *p) {
    memset(p, 0, sizeof(UA_GetEndpointsResponse));
}

static UA_INLINE UA_GetEndpointsResponse *
UA_GetEndpointsResponse_new(void) {
    return (UA_GetEndpointsResponse*)UA_new(&UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_GetEndpointsResponse_copy(const UA_GetEndpointsResponse *src, UA_GetEndpointsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetEndpointsResponse_deleteMembers(UA_GetEndpointsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}

static UA_INLINE void
UA_GetEndpointsResponse_clear(UA_GetEndpointsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}

static UA_INLINE void
UA_GetEndpointsResponse_delete(UA_GetEndpointsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]);
}

/* RegisteredServer */
static UA_INLINE void
UA_RegisteredServer_init(UA_RegisteredServer *p) {
    memset(p, 0, sizeof(UA_RegisteredServer));
}

static UA_INLINE UA_RegisteredServer *
UA_RegisteredServer_new(void) {
    return (UA_RegisteredServer*)UA_new(&UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}

static UA_INLINE UA_StatusCode
UA_RegisteredServer_copy(const UA_RegisteredServer *src, UA_RegisteredServer *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisteredServer_deleteMembers(UA_RegisteredServer *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}

static UA_INLINE void
UA_RegisteredServer_clear(UA_RegisteredServer *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}

static UA_INLINE void
UA_RegisteredServer_delete(UA_RegisteredServer *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTEREDSERVER]);
}

/* RegisterServerRequest */
static UA_INLINE void
UA_RegisterServerRequest_init(UA_RegisterServerRequest *p) {
    memset(p, 0, sizeof(UA_RegisterServerRequest));
}

static UA_INLINE UA_RegisterServerRequest *
UA_RegisterServerRequest_new(void) {
    return (UA_RegisterServerRequest*)UA_new(&UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_RegisterServerRequest_copy(const UA_RegisterServerRequest *src, UA_RegisterServerRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterServerRequest_deleteMembers(UA_RegisterServerRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}

static UA_INLINE void
UA_RegisterServerRequest_clear(UA_RegisterServerRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}

static UA_INLINE void
UA_RegisterServerRequest_delete(UA_RegisterServerRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERSERVERREQUEST]);
}

/* RegisterServerResponse */
static UA_INLINE void
UA_RegisterServerResponse_init(UA_RegisterServerResponse *p) {
    memset(p, 0, sizeof(UA_RegisterServerResponse));
}

static UA_INLINE UA_RegisterServerResponse *
UA_RegisterServerResponse_new(void) {
    return (UA_RegisterServerResponse*)UA_new(&UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_RegisterServerResponse_copy(const UA_RegisterServerResponse *src, UA_RegisterServerResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterServerResponse_deleteMembers(UA_RegisterServerResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}

static UA_INLINE void
UA_RegisterServerResponse_clear(UA_RegisterServerResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}

static UA_INLINE void
UA_RegisterServerResponse_delete(UA_RegisterServerResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERSERVERRESPONSE]);
}

/* DiscoveryConfiguration */
static UA_INLINE void
UA_DiscoveryConfiguration_init(UA_DiscoveryConfiguration *p) {
    memset(p, 0, sizeof(UA_DiscoveryConfiguration));
}

static UA_INLINE UA_DiscoveryConfiguration *
UA_DiscoveryConfiguration_new(void) {
    return (UA_DiscoveryConfiguration*)UA_new(&UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}

static UA_INLINE UA_StatusCode
UA_DiscoveryConfiguration_copy(const UA_DiscoveryConfiguration *src, UA_DiscoveryConfiguration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_DiscoveryConfiguration_deleteMembers(UA_DiscoveryConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}

static UA_INLINE void
UA_DiscoveryConfiguration_clear(UA_DiscoveryConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}

static UA_INLINE void
UA_DiscoveryConfiguration_delete(UA_DiscoveryConfiguration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DISCOVERYCONFIGURATION]);
}

/* MdnsDiscoveryConfiguration */
static UA_INLINE void
UA_MdnsDiscoveryConfiguration_init(UA_MdnsDiscoveryConfiguration *p) {
    memset(p, 0, sizeof(UA_MdnsDiscoveryConfiguration));
}

static UA_INLINE UA_MdnsDiscoveryConfiguration *
UA_MdnsDiscoveryConfiguration_new(void) {
    return (UA_MdnsDiscoveryConfiguration*)UA_new(&UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}

static UA_INLINE UA_StatusCode
UA_MdnsDiscoveryConfiguration_copy(const UA_MdnsDiscoveryConfiguration *src, UA_MdnsDiscoveryConfiguration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_MdnsDiscoveryConfiguration_deleteMembers(UA_MdnsDiscoveryConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}

static UA_INLINE void
UA_MdnsDiscoveryConfiguration_clear(UA_MdnsDiscoveryConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}

static UA_INLINE void
UA_MdnsDiscoveryConfiguration_delete(UA_MdnsDiscoveryConfiguration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MDNSDISCOVERYCONFIGURATION]);
}

/* RegisterServer2Request */
static UA_INLINE void
UA_RegisterServer2Request_init(UA_RegisterServer2Request *p) {
    memset(p, 0, sizeof(UA_RegisterServer2Request));
}

static UA_INLINE UA_RegisterServer2Request *
UA_RegisterServer2Request_new(void) {
    return (UA_RegisterServer2Request*)UA_new(&UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}

static UA_INLINE UA_StatusCode
UA_RegisterServer2Request_copy(const UA_RegisterServer2Request *src, UA_RegisterServer2Request *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterServer2Request_deleteMembers(UA_RegisterServer2Request *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}

static UA_INLINE void
UA_RegisterServer2Request_clear(UA_RegisterServer2Request *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}

static UA_INLINE void
UA_RegisterServer2Request_delete(UA_RegisterServer2Request *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2REQUEST]);
}

/* RegisterServer2Response */
static UA_INLINE void
UA_RegisterServer2Response_init(UA_RegisterServer2Response *p) {
    memset(p, 0, sizeof(UA_RegisterServer2Response));
}

static UA_INLINE UA_RegisterServer2Response *
UA_RegisterServer2Response_new(void) {
    return (UA_RegisterServer2Response*)UA_new(&UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_RegisterServer2Response_copy(const UA_RegisterServer2Response *src, UA_RegisterServer2Response *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterServer2Response_deleteMembers(UA_RegisterServer2Response *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}

static UA_INLINE void
UA_RegisterServer2Response_clear(UA_RegisterServer2Response *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}

static UA_INLINE void
UA_RegisterServer2Response_delete(UA_RegisterServer2Response *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERSERVER2RESPONSE]);
}

/* SecurityTokenRequestType */
static UA_INLINE void
UA_SecurityTokenRequestType_init(UA_SecurityTokenRequestType *p) {
    memset(p, 0, sizeof(UA_SecurityTokenRequestType));
}

static UA_INLINE UA_SecurityTokenRequestType *
UA_SecurityTokenRequestType_new(void) {
    return (UA_SecurityTokenRequestType*)UA_new(&UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}

static UA_INLINE UA_StatusCode
UA_SecurityTokenRequestType_copy(const UA_SecurityTokenRequestType *src, UA_SecurityTokenRequestType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SecurityTokenRequestType_deleteMembers(UA_SecurityTokenRequestType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}

static UA_INLINE void
UA_SecurityTokenRequestType_clear(UA_SecurityTokenRequestType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}

static UA_INLINE void
UA_SecurityTokenRequestType_delete(UA_SecurityTokenRequestType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]);
}

/* ChannelSecurityToken */
static UA_INLINE void
UA_ChannelSecurityToken_init(UA_ChannelSecurityToken *p) {
    memset(p, 0, sizeof(UA_ChannelSecurityToken));
}

static UA_INLINE UA_ChannelSecurityToken *
UA_ChannelSecurityToken_new(void) {
    return (UA_ChannelSecurityToken*)UA_new(&UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_ChannelSecurityToken_copy(const UA_ChannelSecurityToken *src, UA_ChannelSecurityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_ChannelSecurityToken_deleteMembers(UA_ChannelSecurityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}

static UA_INLINE void
UA_ChannelSecurityToken_clear(UA_ChannelSecurityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}

static UA_INLINE void
UA_ChannelSecurityToken_delete(UA_ChannelSecurityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]);
}

/* OpenSecureChannelRequest */
static UA_INLINE void
UA_OpenSecureChannelRequest_init(UA_OpenSecureChannelRequest *p) {
    memset(p, 0, sizeof(UA_OpenSecureChannelRequest));
}

static UA_INLINE UA_OpenSecureChannelRequest *
UA_OpenSecureChannelRequest_new(void) {
    return (UA_OpenSecureChannelRequest*)UA_new(&UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_OpenSecureChannelRequest_copy(const UA_OpenSecureChannelRequest *src, UA_OpenSecureChannelRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenSecureChannelRequest_deleteMembers(UA_OpenSecureChannelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}

static UA_INLINE void
UA_OpenSecureChannelRequest_clear(UA_OpenSecureChannelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}

static UA_INLINE void
UA_OpenSecureChannelRequest_delete(UA_OpenSecureChannelRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]);
}

/* OpenSecureChannelResponse */
static UA_INLINE void
UA_OpenSecureChannelResponse_init(UA_OpenSecureChannelResponse *p) {
    memset(p, 0, sizeof(UA_OpenSecureChannelResponse));
}

static UA_INLINE UA_OpenSecureChannelResponse *
UA_OpenSecureChannelResponse_new(void) {
    return (UA_OpenSecureChannelResponse*)UA_new(&UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_OpenSecureChannelResponse_copy(const UA_OpenSecureChannelResponse *src, UA_OpenSecureChannelResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenSecureChannelResponse_deleteMembers(UA_OpenSecureChannelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}

static UA_INLINE void
UA_OpenSecureChannelResponse_clear(UA_OpenSecureChannelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}

static UA_INLINE void
UA_OpenSecureChannelResponse_delete(UA_OpenSecureChannelResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]);
}

/* CloseSecureChannelRequest */
static UA_INLINE void
UA_CloseSecureChannelRequest_init(UA_CloseSecureChannelRequest *p) {
    memset(p, 0, sizeof(UA_CloseSecureChannelRequest));
}

static UA_INLINE UA_CloseSecureChannelRequest *
UA_CloseSecureChannelRequest_new(void) {
    return (UA_CloseSecureChannelRequest*)UA_new(&UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CloseSecureChannelRequest_copy(const UA_CloseSecureChannelRequest *src, UA_CloseSecureChannelRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseSecureChannelRequest_deleteMembers(UA_CloseSecureChannelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}

static UA_INLINE void
UA_CloseSecureChannelRequest_clear(UA_CloseSecureChannelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}

static UA_INLINE void
UA_CloseSecureChannelRequest_delete(UA_CloseSecureChannelRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]);
}

/* CloseSecureChannelResponse */
static UA_INLINE void
UA_CloseSecureChannelResponse_init(UA_CloseSecureChannelResponse *p) {
    memset(p, 0, sizeof(UA_CloseSecureChannelResponse));
}

static UA_INLINE UA_CloseSecureChannelResponse *
UA_CloseSecureChannelResponse_new(void) {
    return (UA_CloseSecureChannelResponse*)UA_new(&UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CloseSecureChannelResponse_copy(const UA_CloseSecureChannelResponse *src, UA_CloseSecureChannelResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseSecureChannelResponse_deleteMembers(UA_CloseSecureChannelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}

static UA_INLINE void
UA_CloseSecureChannelResponse_clear(UA_CloseSecureChannelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}

static UA_INLINE void
UA_CloseSecureChannelResponse_delete(UA_CloseSecureChannelResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]);
}

/* SignedSoftwareCertificate */
static UA_INLINE void
UA_SignedSoftwareCertificate_init(UA_SignedSoftwareCertificate *p) {
    memset(p, 0, sizeof(UA_SignedSoftwareCertificate));
}

static UA_INLINE UA_SignedSoftwareCertificate *
UA_SignedSoftwareCertificate_new(void) {
    return (UA_SignedSoftwareCertificate*)UA_new(&UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}

static UA_INLINE UA_StatusCode
UA_SignedSoftwareCertificate_copy(const UA_SignedSoftwareCertificate *src, UA_SignedSoftwareCertificate *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SignedSoftwareCertificate_deleteMembers(UA_SignedSoftwareCertificate *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}

static UA_INLINE void
UA_SignedSoftwareCertificate_clear(UA_SignedSoftwareCertificate *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}

static UA_INLINE void
UA_SignedSoftwareCertificate_delete(UA_SignedSoftwareCertificate *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]);
}

/* SessionAuthenticationToken */
static UA_INLINE void
UA_SessionAuthenticationToken_init(UA_SessionAuthenticationToken *p) {
    memset(p, 0, sizeof(UA_SessionAuthenticationToken));
}

static UA_INLINE UA_SessionAuthenticationToken *
UA_SessionAuthenticationToken_new(void) {
    return (UA_SessionAuthenticationToken*)UA_new(&UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_SessionAuthenticationToken_copy(const UA_SessionAuthenticationToken *src, UA_SessionAuthenticationToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_SessionAuthenticationToken_deleteMembers(UA_SessionAuthenticationToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}

static UA_INLINE void
UA_SessionAuthenticationToken_clear(UA_SessionAuthenticationToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}

static UA_INLINE void
UA_SessionAuthenticationToken_delete(UA_SessionAuthenticationToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SESSIONAUTHENTICATIONTOKEN]);
}

/* SignatureData */
static UA_INLINE void
UA_SignatureData_init(UA_SignatureData *p) {
    memset(p, 0, sizeof(UA_SignatureData));
}

static UA_INLINE UA_SignatureData *
UA_SignatureData_new(void) {
    return (UA_SignatureData*)UA_new(&UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}

static UA_INLINE UA_StatusCode
UA_SignatureData_copy(const UA_SignatureData *src, UA_SignatureData *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}

UA_DEPRECATED static UA_INLINE void
UA_SignatureData_deleteMembers(UA_SignatureData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}

static UA_INLINE void
UA_SignatureData_clear(UA_SignatureData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}

static UA_INLINE void
UA_SignatureData_delete(UA_SignatureData *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SIGNATUREDATA]);
}

/* CreateSessionRequest */
static UA_INLINE void
UA_CreateSessionRequest_init(UA_CreateSessionRequest *p) {
    memset(p, 0, sizeof(UA_CreateSessionRequest));
}

static UA_INLINE UA_CreateSessionRequest *
UA_CreateSessionRequest_new(void) {
    return (UA_CreateSessionRequest*)UA_new(&UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CreateSessionRequest_copy(const UA_CreateSessionRequest *src, UA_CreateSessionRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateSessionRequest_deleteMembers(UA_CreateSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}

static UA_INLINE void
UA_CreateSessionRequest_clear(UA_CreateSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}

static UA_INLINE void
UA_CreateSessionRequest_delete(UA_CreateSessionRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]);
}

/* CreateSessionResponse */
static UA_INLINE void
UA_CreateSessionResponse_init(UA_CreateSessionResponse *p) {
    memset(p, 0, sizeof(UA_CreateSessionResponse));
}

static UA_INLINE UA_CreateSessionResponse *
UA_CreateSessionResponse_new(void) {
    return (UA_CreateSessionResponse*)UA_new(&UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CreateSessionResponse_copy(const UA_CreateSessionResponse *src, UA_CreateSessionResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateSessionResponse_deleteMembers(UA_CreateSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}

static UA_INLINE void
UA_CreateSessionResponse_clear(UA_CreateSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}

static UA_INLINE void
UA_CreateSessionResponse_delete(UA_CreateSessionResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]);
}

/* UserIdentityToken */
static UA_INLINE void
UA_UserIdentityToken_init(UA_UserIdentityToken *p) {
    memset(p, 0, sizeof(UA_UserIdentityToken));
}

static UA_INLINE UA_UserIdentityToken *
UA_UserIdentityToken_new(void) {
    return (UA_UserIdentityToken*)UA_new(&UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_UserIdentityToken_copy(const UA_UserIdentityToken *src, UA_UserIdentityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_UserIdentityToken_deleteMembers(UA_UserIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}

static UA_INLINE void
UA_UserIdentityToken_clear(UA_UserIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}

static UA_INLINE void
UA_UserIdentityToken_delete(UA_UserIdentityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]);
}

/* AnonymousIdentityToken */
static UA_INLINE void
UA_AnonymousIdentityToken_init(UA_AnonymousIdentityToken *p) {
    memset(p, 0, sizeof(UA_AnonymousIdentityToken));
}

static UA_INLINE UA_AnonymousIdentityToken *
UA_AnonymousIdentityToken_new(void) {
    return (UA_AnonymousIdentityToken*)UA_new(&UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_AnonymousIdentityToken_copy(const UA_AnonymousIdentityToken *src, UA_AnonymousIdentityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_AnonymousIdentityToken_deleteMembers(UA_AnonymousIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}

static UA_INLINE void
UA_AnonymousIdentityToken_clear(UA_AnonymousIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}

static UA_INLINE void
UA_AnonymousIdentityToken_delete(UA_AnonymousIdentityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]);
}

/* UserNameIdentityToken */
static UA_INLINE void
UA_UserNameIdentityToken_init(UA_UserNameIdentityToken *p) {
    memset(p, 0, sizeof(UA_UserNameIdentityToken));
}

static UA_INLINE UA_UserNameIdentityToken *
UA_UserNameIdentityToken_new(void) {
    return (UA_UserNameIdentityToken*)UA_new(&UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_UserNameIdentityToken_copy(const UA_UserNameIdentityToken *src, UA_UserNameIdentityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_UserNameIdentityToken_deleteMembers(UA_UserNameIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}

static UA_INLINE void
UA_UserNameIdentityToken_clear(UA_UserNameIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}

static UA_INLINE void
UA_UserNameIdentityToken_delete(UA_UserNameIdentityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]);
}

/* X509IdentityToken */
static UA_INLINE void
UA_X509IdentityToken_init(UA_X509IdentityToken *p) {
    memset(p, 0, sizeof(UA_X509IdentityToken));
}

static UA_INLINE UA_X509IdentityToken *
UA_X509IdentityToken_new(void) {
    return (UA_X509IdentityToken*)UA_new(&UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_X509IdentityToken_copy(const UA_X509IdentityToken *src, UA_X509IdentityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_X509IdentityToken_deleteMembers(UA_X509IdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}

static UA_INLINE void
UA_X509IdentityToken_clear(UA_X509IdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}

static UA_INLINE void
UA_X509IdentityToken_delete(UA_X509IdentityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_X509IDENTITYTOKEN]);
}

/* IssuedIdentityToken */
static UA_INLINE void
UA_IssuedIdentityToken_init(UA_IssuedIdentityToken *p) {
    memset(p, 0, sizeof(UA_IssuedIdentityToken));
}

static UA_INLINE UA_IssuedIdentityToken *
UA_IssuedIdentityToken_new(void) {
    return (UA_IssuedIdentityToken*)UA_new(&UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}

static UA_INLINE UA_StatusCode
UA_IssuedIdentityToken_copy(const UA_IssuedIdentityToken *src, UA_IssuedIdentityToken *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}

UA_DEPRECATED static UA_INLINE void
UA_IssuedIdentityToken_deleteMembers(UA_IssuedIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}

static UA_INLINE void
UA_IssuedIdentityToken_clear(UA_IssuedIdentityToken *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}

static UA_INLINE void
UA_IssuedIdentityToken_delete(UA_IssuedIdentityToken *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ISSUEDIDENTITYTOKEN]);
}

/* RsaEncryptedSecret */
static UA_INLINE void
UA_RsaEncryptedSecret_init(UA_RsaEncryptedSecret *p) {
    memset(p, 0, sizeof(UA_RsaEncryptedSecret));
}

static UA_INLINE UA_RsaEncryptedSecret *
UA_RsaEncryptedSecret_new(void) {
    return (UA_RsaEncryptedSecret*)UA_new(&UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}

static UA_INLINE UA_StatusCode
UA_RsaEncryptedSecret_copy(const UA_RsaEncryptedSecret *src, UA_RsaEncryptedSecret *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}

UA_DEPRECATED static UA_INLINE void
UA_RsaEncryptedSecret_deleteMembers(UA_RsaEncryptedSecret *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}

static UA_INLINE void
UA_RsaEncryptedSecret_clear(UA_RsaEncryptedSecret *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}

static UA_INLINE void
UA_RsaEncryptedSecret_delete(UA_RsaEncryptedSecret *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RSAENCRYPTEDSECRET]);
}

/* ActivateSessionRequest */
static UA_INLINE void
UA_ActivateSessionRequest_init(UA_ActivateSessionRequest *p) {
    memset(p, 0, sizeof(UA_ActivateSessionRequest));
}

static UA_INLINE UA_ActivateSessionRequest *
UA_ActivateSessionRequest_new(void) {
    return (UA_ActivateSessionRequest*)UA_new(&UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_ActivateSessionRequest_copy(const UA_ActivateSessionRequest *src, UA_ActivateSessionRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActivateSessionRequest_deleteMembers(UA_ActivateSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}

static UA_INLINE void
UA_ActivateSessionRequest_clear(UA_ActivateSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}

static UA_INLINE void
UA_ActivateSessionRequest_delete(UA_ActivateSessionRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]);
}

/* ActivateSessionResponse */
static UA_INLINE void
UA_ActivateSessionResponse_init(UA_ActivateSessionResponse *p) {
    memset(p, 0, sizeof(UA_ActivateSessionResponse));
}

static UA_INLINE UA_ActivateSessionResponse *
UA_ActivateSessionResponse_new(void) {
    return (UA_ActivateSessionResponse*)UA_new(&UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_ActivateSessionResponse_copy(const UA_ActivateSessionResponse *src, UA_ActivateSessionResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActivateSessionResponse_deleteMembers(UA_ActivateSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}

static UA_INLINE void
UA_ActivateSessionResponse_clear(UA_ActivateSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}

static UA_INLINE void
UA_ActivateSessionResponse_delete(UA_ActivateSessionResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]);
}

/* CloseSessionRequest */
static UA_INLINE void
UA_CloseSessionRequest_init(UA_CloseSessionRequest *p) {
    memset(p, 0, sizeof(UA_CloseSessionRequest));
}

static UA_INLINE UA_CloseSessionRequest *
UA_CloseSessionRequest_new(void) {
    return (UA_CloseSessionRequest*)UA_new(&UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CloseSessionRequest_copy(const UA_CloseSessionRequest *src, UA_CloseSessionRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseSessionRequest_deleteMembers(UA_CloseSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}

static UA_INLINE void
UA_CloseSessionRequest_clear(UA_CloseSessionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}

static UA_INLINE void
UA_CloseSessionRequest_delete(UA_CloseSessionRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]);
}

/* CloseSessionResponse */
static UA_INLINE void
UA_CloseSessionResponse_init(UA_CloseSessionResponse *p) {
    memset(p, 0, sizeof(UA_CloseSessionResponse));
}

static UA_INLINE UA_CloseSessionResponse *
UA_CloseSessionResponse_new(void) {
    return (UA_CloseSessionResponse*)UA_new(&UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CloseSessionResponse_copy(const UA_CloseSessionResponse *src, UA_CloseSessionResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseSessionResponse_deleteMembers(UA_CloseSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}

static UA_INLINE void
UA_CloseSessionResponse_clear(UA_CloseSessionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}

static UA_INLINE void
UA_CloseSessionResponse_delete(UA_CloseSessionResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]);
}

/* CancelRequest */
static UA_INLINE void
UA_CancelRequest_init(UA_CancelRequest *p) {
    memset(p, 0, sizeof(UA_CancelRequest));
}

static UA_INLINE UA_CancelRequest *
UA_CancelRequest_new(void) {
    return (UA_CancelRequest*)UA_new(&UA_TYPES[UA_TYPES_CANCELREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CancelRequest_copy(const UA_CancelRequest *src, UA_CancelRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CANCELREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CancelRequest_deleteMembers(UA_CancelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CANCELREQUEST]);
}

static UA_INLINE void
UA_CancelRequest_clear(UA_CancelRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CANCELREQUEST]);
}

static UA_INLINE void
UA_CancelRequest_delete(UA_CancelRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CANCELREQUEST]);
}

/* CancelResponse */
static UA_INLINE void
UA_CancelResponse_init(UA_CancelResponse *p) {
    memset(p, 0, sizeof(UA_CancelResponse));
}

static UA_INLINE UA_CancelResponse *
UA_CancelResponse_new(void) {
    return (UA_CancelResponse*)UA_new(&UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CancelResponse_copy(const UA_CancelResponse *src, UA_CancelResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CancelResponse_deleteMembers(UA_CancelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}

static UA_INLINE void
UA_CancelResponse_clear(UA_CancelResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}

static UA_INLINE void
UA_CancelResponse_delete(UA_CancelResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CANCELRESPONSE]);
}

/* NodeAttributesMask */
static UA_INLINE void
UA_NodeAttributesMask_init(UA_NodeAttributesMask *p) {
    memset(p, 0, sizeof(UA_NodeAttributesMask));
}

static UA_INLINE UA_NodeAttributesMask *
UA_NodeAttributesMask_new(void) {
    return (UA_NodeAttributesMask*)UA_new(&UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}

static UA_INLINE UA_StatusCode
UA_NodeAttributesMask_copy(const UA_NodeAttributesMask *src, UA_NodeAttributesMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeAttributesMask_deleteMembers(UA_NodeAttributesMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}

static UA_INLINE void
UA_NodeAttributesMask_clear(UA_NodeAttributesMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}

static UA_INLINE void
UA_NodeAttributesMask_delete(UA_NodeAttributesMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]);
}

/* NodeAttributes */
static UA_INLINE void
UA_NodeAttributes_init(UA_NodeAttributes *p) {
    memset(p, 0, sizeof(UA_NodeAttributes));
}

static UA_INLINE UA_NodeAttributes *
UA_NodeAttributes_new(void) {
    return (UA_NodeAttributes*)UA_new(&UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_NodeAttributes_copy(const UA_NodeAttributes *src, UA_NodeAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeAttributes_deleteMembers(UA_NodeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}

static UA_INLINE void
UA_NodeAttributes_clear(UA_NodeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}

static UA_INLINE void
UA_NodeAttributes_delete(UA_NodeAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]);
}

/* ObjectAttributes */
static UA_INLINE void
UA_ObjectAttributes_init(UA_ObjectAttributes *p) {
    memset(p, 0, sizeof(UA_ObjectAttributes));
}

static UA_INLINE UA_ObjectAttributes *
UA_ObjectAttributes_new(void) {
    return (UA_ObjectAttributes*)UA_new(&UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_ObjectAttributes_copy(const UA_ObjectAttributes *src, UA_ObjectAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_ObjectAttributes_deleteMembers(UA_ObjectAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}

static UA_INLINE void
UA_ObjectAttributes_clear(UA_ObjectAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}

static UA_INLINE void
UA_ObjectAttributes_delete(UA_ObjectAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]);
}

/* VariableAttributes */
static UA_INLINE void
UA_VariableAttributes_init(UA_VariableAttributes *p) {
    memset(p, 0, sizeof(UA_VariableAttributes));
}

static UA_INLINE UA_VariableAttributes *
UA_VariableAttributes_new(void) {
    return (UA_VariableAttributes*)UA_new(&UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_VariableAttributes_copy(const UA_VariableAttributes *src, UA_VariableAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_VariableAttributes_deleteMembers(UA_VariableAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}

static UA_INLINE void
UA_VariableAttributes_clear(UA_VariableAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}

static UA_INLINE void
UA_VariableAttributes_delete(UA_VariableAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]);
}

/* MethodAttributes */
static UA_INLINE void
UA_MethodAttributes_init(UA_MethodAttributes *p) {
    memset(p, 0, sizeof(UA_MethodAttributes));
}

static UA_INLINE UA_MethodAttributes *
UA_MethodAttributes_new(void) {
    return (UA_MethodAttributes*)UA_new(&UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_MethodAttributes_copy(const UA_MethodAttributes *src, UA_MethodAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_MethodAttributes_deleteMembers(UA_MethodAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}

static UA_INLINE void
UA_MethodAttributes_clear(UA_MethodAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}

static UA_INLINE void
UA_MethodAttributes_delete(UA_MethodAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]);
}

/* ObjectTypeAttributes */
static UA_INLINE void
UA_ObjectTypeAttributes_init(UA_ObjectTypeAttributes *p) {
    memset(p, 0, sizeof(UA_ObjectTypeAttributes));
}

static UA_INLINE UA_ObjectTypeAttributes *
UA_ObjectTypeAttributes_new(void) {
    return (UA_ObjectTypeAttributes*)UA_new(&UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_ObjectTypeAttributes_copy(const UA_ObjectTypeAttributes *src, UA_ObjectTypeAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_ObjectTypeAttributes_deleteMembers(UA_ObjectTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}

static UA_INLINE void
UA_ObjectTypeAttributes_clear(UA_ObjectTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}

static UA_INLINE void
UA_ObjectTypeAttributes_delete(UA_ObjectTypeAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]);
}

/* VariableTypeAttributes */
static UA_INLINE void
UA_VariableTypeAttributes_init(UA_VariableTypeAttributes *p) {
    memset(p, 0, sizeof(UA_VariableTypeAttributes));
}

static UA_INLINE UA_VariableTypeAttributes *
UA_VariableTypeAttributes_new(void) {
    return (UA_VariableTypeAttributes*)UA_new(&UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_VariableTypeAttributes_copy(const UA_VariableTypeAttributes *src, UA_VariableTypeAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_VariableTypeAttributes_deleteMembers(UA_VariableTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}

static UA_INLINE void
UA_VariableTypeAttributes_clear(UA_VariableTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}

static UA_INLINE void
UA_VariableTypeAttributes_delete(UA_VariableTypeAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]);
}

/* ReferenceTypeAttributes */
static UA_INLINE void
UA_ReferenceTypeAttributes_init(UA_ReferenceTypeAttributes *p) {
    memset(p, 0, sizeof(UA_ReferenceTypeAttributes));
}

static UA_INLINE UA_ReferenceTypeAttributes *
UA_ReferenceTypeAttributes_new(void) {
    return (UA_ReferenceTypeAttributes*)UA_new(&UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_ReferenceTypeAttributes_copy(const UA_ReferenceTypeAttributes *src, UA_ReferenceTypeAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReferenceTypeAttributes_deleteMembers(UA_ReferenceTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}

static UA_INLINE void
UA_ReferenceTypeAttributes_clear(UA_ReferenceTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}

static UA_INLINE void
UA_ReferenceTypeAttributes_delete(UA_ReferenceTypeAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]);
}

/* DataTypeAttributes */
static UA_INLINE void
UA_DataTypeAttributes_init(UA_DataTypeAttributes *p) {
    memset(p, 0, sizeof(UA_DataTypeAttributes));
}

static UA_INLINE UA_DataTypeAttributes *
UA_DataTypeAttributes_new(void) {
    return (UA_DataTypeAttributes*)UA_new(&UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_DataTypeAttributes_copy(const UA_DataTypeAttributes *src, UA_DataTypeAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataTypeAttributes_deleteMembers(UA_DataTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}

static UA_INLINE void
UA_DataTypeAttributes_clear(UA_DataTypeAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}

static UA_INLINE void
UA_DataTypeAttributes_delete(UA_DataTypeAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]);
}

/* ViewAttributes */
static UA_INLINE void
UA_ViewAttributes_init(UA_ViewAttributes *p) {
    memset(p, 0, sizeof(UA_ViewAttributes));
}

static UA_INLINE UA_ViewAttributes *
UA_ViewAttributes_new(void) {
    return (UA_ViewAttributes*)UA_new(&UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_ViewAttributes_copy(const UA_ViewAttributes *src, UA_ViewAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_ViewAttributes_deleteMembers(UA_ViewAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}

static UA_INLINE void
UA_ViewAttributes_clear(UA_ViewAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}

static UA_INLINE void
UA_ViewAttributes_delete(UA_ViewAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]);
}

/* GenericAttributeValue */
static UA_INLINE void
UA_GenericAttributeValue_init(UA_GenericAttributeValue *p) {
    memset(p, 0, sizeof(UA_GenericAttributeValue));
}

static UA_INLINE UA_GenericAttributeValue *
UA_GenericAttributeValue_new(void) {
    return (UA_GenericAttributeValue*)UA_new(&UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}

static UA_INLINE UA_StatusCode
UA_GenericAttributeValue_copy(const UA_GenericAttributeValue *src, UA_GenericAttributeValue *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GenericAttributeValue_deleteMembers(UA_GenericAttributeValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}

static UA_INLINE void
UA_GenericAttributeValue_clear(UA_GenericAttributeValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}

static UA_INLINE void
UA_GenericAttributeValue_delete(UA_GenericAttributeValue *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTEVALUE]);
}

/* GenericAttributes */
static UA_INLINE void
UA_GenericAttributes_init(UA_GenericAttributes *p) {
    memset(p, 0, sizeof(UA_GenericAttributes));
}

static UA_INLINE UA_GenericAttributes *
UA_GenericAttributes_new(void) {
    return (UA_GenericAttributes*)UA_new(&UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}

static UA_INLINE UA_StatusCode
UA_GenericAttributes_copy(const UA_GenericAttributes *src, UA_GenericAttributes *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}

UA_DEPRECATED static UA_INLINE void
UA_GenericAttributes_deleteMembers(UA_GenericAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}

static UA_INLINE void
UA_GenericAttributes_clear(UA_GenericAttributes *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}

static UA_INLINE void
UA_GenericAttributes_delete(UA_GenericAttributes *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_GENERICATTRIBUTES]);
}

/* AddNodesItem */
static UA_INLINE void
UA_AddNodesItem_init(UA_AddNodesItem *p) {
    memset(p, 0, sizeof(UA_AddNodesItem));
}

static UA_INLINE UA_AddNodesItem *
UA_AddNodesItem_new(void) {
    return (UA_AddNodesItem*)UA_new(&UA_TYPES[UA_TYPES_ADDNODESITEM]);
}

static UA_INLINE UA_StatusCode
UA_AddNodesItem_copy(const UA_AddNodesItem *src, UA_AddNodesItem *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESITEM]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddNodesItem_deleteMembers(UA_AddNodesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESITEM]);
}

static UA_INLINE void
UA_AddNodesItem_clear(UA_AddNodesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESITEM]);
}

static UA_INLINE void
UA_AddNodesItem_delete(UA_AddNodesItem *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESITEM]);
}

/* AddNodesResult */
static UA_INLINE void
UA_AddNodesResult_init(UA_AddNodesResult *p) {
    memset(p, 0, sizeof(UA_AddNodesResult));
}

static UA_INLINE UA_AddNodesResult *
UA_AddNodesResult_new(void) {
    return (UA_AddNodesResult*)UA_new(&UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}

static UA_INLINE UA_StatusCode
UA_AddNodesResult_copy(const UA_AddNodesResult *src, UA_AddNodesResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddNodesResult_deleteMembers(UA_AddNodesResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}

static UA_INLINE void
UA_AddNodesResult_clear(UA_AddNodesResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}

static UA_INLINE void
UA_AddNodesResult_delete(UA_AddNodesResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESRESULT]);
}

/* AddNodesRequest */
static UA_INLINE void
UA_AddNodesRequest_init(UA_AddNodesRequest *p) {
    memset(p, 0, sizeof(UA_AddNodesRequest));
}

static UA_INLINE UA_AddNodesRequest *
UA_AddNodesRequest_new(void) {
    return (UA_AddNodesRequest*)UA_new(&UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_AddNodesRequest_copy(const UA_AddNodesRequest *src, UA_AddNodesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddNodesRequest_deleteMembers(UA_AddNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}

static UA_INLINE void
UA_AddNodesRequest_clear(UA_AddNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}

static UA_INLINE void
UA_AddNodesRequest_delete(UA_AddNodesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]);
}

/* AddNodesResponse */
static UA_INLINE void
UA_AddNodesResponse_init(UA_AddNodesResponse *p) {
    memset(p, 0, sizeof(UA_AddNodesResponse));
}

static UA_INLINE UA_AddNodesResponse *
UA_AddNodesResponse_new(void) {
    return (UA_AddNodesResponse*)UA_new(&UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_AddNodesResponse_copy(const UA_AddNodesResponse *src, UA_AddNodesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddNodesResponse_deleteMembers(UA_AddNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}

static UA_INLINE void
UA_AddNodesResponse_clear(UA_AddNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}

static UA_INLINE void
UA_AddNodesResponse_delete(UA_AddNodesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]);
}

/* AddReferencesItem */
static UA_INLINE void
UA_AddReferencesItem_init(UA_AddReferencesItem *p) {
    memset(p, 0, sizeof(UA_AddReferencesItem));
}

static UA_INLINE UA_AddReferencesItem *
UA_AddReferencesItem_new(void) {
    return (UA_AddReferencesItem*)UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}

static UA_INLINE UA_StatusCode
UA_AddReferencesItem_copy(const UA_AddReferencesItem *src, UA_AddReferencesItem *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddReferencesItem_deleteMembers(UA_AddReferencesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}

static UA_INLINE void
UA_AddReferencesItem_clear(UA_AddReferencesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}

static UA_INLINE void
UA_AddReferencesItem_delete(UA_AddReferencesItem *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]);
}

/* AddReferencesRequest */
static UA_INLINE void
UA_AddReferencesRequest_init(UA_AddReferencesRequest *p) {
    memset(p, 0, sizeof(UA_AddReferencesRequest));
}

static UA_INLINE UA_AddReferencesRequest *
UA_AddReferencesRequest_new(void) {
    return (UA_AddReferencesRequest*)UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_AddReferencesRequest_copy(const UA_AddReferencesRequest *src, UA_AddReferencesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddReferencesRequest_deleteMembers(UA_AddReferencesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}

static UA_INLINE void
UA_AddReferencesRequest_clear(UA_AddReferencesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}

static UA_INLINE void
UA_AddReferencesRequest_delete(UA_AddReferencesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]);
}

/* AddReferencesResponse */
static UA_INLINE void
UA_AddReferencesResponse_init(UA_AddReferencesResponse *p) {
    memset(p, 0, sizeof(UA_AddReferencesResponse));
}

static UA_INLINE UA_AddReferencesResponse *
UA_AddReferencesResponse_new(void) {
    return (UA_AddReferencesResponse*)UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_AddReferencesResponse_copy(const UA_AddReferencesResponse *src, UA_AddReferencesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_AddReferencesResponse_deleteMembers(UA_AddReferencesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}

static UA_INLINE void
UA_AddReferencesResponse_clear(UA_AddReferencesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}

static UA_INLINE void
UA_AddReferencesResponse_delete(UA_AddReferencesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]);
}

/* DeleteNodesItem */
static UA_INLINE void
UA_DeleteNodesItem_init(UA_DeleteNodesItem *p) {
    memset(p, 0, sizeof(UA_DeleteNodesItem));
}

static UA_INLINE UA_DeleteNodesItem *
UA_DeleteNodesItem_new(void) {
    return (UA_DeleteNodesItem*)UA_new(&UA_TYPES[UA_TYPES_DELETENODESITEM]);
}

static UA_INLINE UA_StatusCode
UA_DeleteNodesItem_copy(const UA_DeleteNodesItem *src, UA_DeleteNodesItem *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESITEM]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteNodesItem_deleteMembers(UA_DeleteNodesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESITEM]);
}

static UA_INLINE void
UA_DeleteNodesItem_clear(UA_DeleteNodesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESITEM]);
}

static UA_INLINE void
UA_DeleteNodesItem_delete(UA_DeleteNodesItem *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESITEM]);
}

/* DeleteNodesRequest */
static UA_INLINE void
UA_DeleteNodesRequest_init(UA_DeleteNodesRequest *p) {
    memset(p, 0, sizeof(UA_DeleteNodesRequest));
}

static UA_INLINE UA_DeleteNodesRequest *
UA_DeleteNodesRequest_new(void) {
    return (UA_DeleteNodesRequest*)UA_new(&UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_DeleteNodesRequest_copy(const UA_DeleteNodesRequest *src, UA_DeleteNodesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteNodesRequest_deleteMembers(UA_DeleteNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}

static UA_INLINE void
UA_DeleteNodesRequest_clear(UA_DeleteNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}

static UA_INLINE void
UA_DeleteNodesRequest_delete(UA_DeleteNodesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]);
}

/* DeleteNodesResponse */
static UA_INLINE void
UA_DeleteNodesResponse_init(UA_DeleteNodesResponse *p) {
    memset(p, 0, sizeof(UA_DeleteNodesResponse));
}

static UA_INLINE UA_DeleteNodesResponse *
UA_DeleteNodesResponse_new(void) {
    return (UA_DeleteNodesResponse*)UA_new(&UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_DeleteNodesResponse_copy(const UA_DeleteNodesResponse *src, UA_DeleteNodesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteNodesResponse_deleteMembers(UA_DeleteNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}

static UA_INLINE void
UA_DeleteNodesResponse_clear(UA_DeleteNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}

static UA_INLINE void
UA_DeleteNodesResponse_delete(UA_DeleteNodesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]);
}

/* DeleteReferencesItem */
static UA_INLINE void
UA_DeleteReferencesItem_init(UA_DeleteReferencesItem *p) {
    memset(p, 0, sizeof(UA_DeleteReferencesItem));
}

static UA_INLINE UA_DeleteReferencesItem *
UA_DeleteReferencesItem_new(void) {
    return (UA_DeleteReferencesItem*)UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}

static UA_INLINE UA_StatusCode
UA_DeleteReferencesItem_copy(const UA_DeleteReferencesItem *src, UA_DeleteReferencesItem *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteReferencesItem_deleteMembers(UA_DeleteReferencesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}

static UA_INLINE void
UA_DeleteReferencesItem_clear(UA_DeleteReferencesItem *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}

static UA_INLINE void
UA_DeleteReferencesItem_delete(UA_DeleteReferencesItem *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]);
}

/* DeleteReferencesRequest */
static UA_INLINE void
UA_DeleteReferencesRequest_init(UA_DeleteReferencesRequest *p) {
    memset(p, 0, sizeof(UA_DeleteReferencesRequest));
}

static UA_INLINE UA_DeleteReferencesRequest *
UA_DeleteReferencesRequest_new(void) {
    return (UA_DeleteReferencesRequest*)UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_DeleteReferencesRequest_copy(const UA_DeleteReferencesRequest *src, UA_DeleteReferencesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteReferencesRequest_deleteMembers(UA_DeleteReferencesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}

static UA_INLINE void
UA_DeleteReferencesRequest_clear(UA_DeleteReferencesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}

static UA_INLINE void
UA_DeleteReferencesRequest_delete(UA_DeleteReferencesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]);
}

/* DeleteReferencesResponse */
static UA_INLINE void
UA_DeleteReferencesResponse_init(UA_DeleteReferencesResponse *p) {
    memset(p, 0, sizeof(UA_DeleteReferencesResponse));
}

static UA_INLINE UA_DeleteReferencesResponse *
UA_DeleteReferencesResponse_new(void) {
    return (UA_DeleteReferencesResponse*)UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_DeleteReferencesResponse_copy(const UA_DeleteReferencesResponse *src, UA_DeleteReferencesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteReferencesResponse_deleteMembers(UA_DeleteReferencesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}

static UA_INLINE void
UA_DeleteReferencesResponse_clear(UA_DeleteReferencesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}

static UA_INLINE void
UA_DeleteReferencesResponse_delete(UA_DeleteReferencesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]);
}

/* AttributeWriteMask */
static UA_INLINE void
UA_AttributeWriteMask_init(UA_AttributeWriteMask *p) {
    memset(p, 0, sizeof(UA_AttributeWriteMask));
}

static UA_INLINE UA_AttributeWriteMask *
UA_AttributeWriteMask_new(void) {
    return (UA_AttributeWriteMask*)UA_new(&UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}

static UA_INLINE UA_StatusCode
UA_AttributeWriteMask_copy(const UA_AttributeWriteMask *src, UA_AttributeWriteMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_AttributeWriteMask_deleteMembers(UA_AttributeWriteMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}

static UA_INLINE void
UA_AttributeWriteMask_clear(UA_AttributeWriteMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}

static UA_INLINE void
UA_AttributeWriteMask_delete(UA_AttributeWriteMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ATTRIBUTEWRITEMASK]);
}

/* BrowseDirection */
static UA_INLINE void
UA_BrowseDirection_init(UA_BrowseDirection *p) {
    memset(p, 0, sizeof(UA_BrowseDirection));
}

static UA_INLINE UA_BrowseDirection *
UA_BrowseDirection_new(void) {
    return (UA_BrowseDirection*)UA_new(&UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}

static UA_INLINE UA_StatusCode
UA_BrowseDirection_copy(const UA_BrowseDirection *src, UA_BrowseDirection *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseDirection_deleteMembers(UA_BrowseDirection *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}

static UA_INLINE void
UA_BrowseDirection_clear(UA_BrowseDirection *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}

static UA_INLINE void
UA_BrowseDirection_delete(UA_BrowseDirection *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]);
}

/* ViewDescription */
static UA_INLINE void
UA_ViewDescription_init(UA_ViewDescription *p) {
    memset(p, 0, sizeof(UA_ViewDescription));
}

static UA_INLINE UA_ViewDescription *
UA_ViewDescription_new(void) {
    return (UA_ViewDescription*)UA_new(&UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_ViewDescription_copy(const UA_ViewDescription *src, UA_ViewDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_ViewDescription_deleteMembers(UA_ViewDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}

static UA_INLINE void
UA_ViewDescription_clear(UA_ViewDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}

static UA_INLINE void
UA_ViewDescription_delete(UA_ViewDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]);
}

/* BrowseDescription */
static UA_INLINE void
UA_BrowseDescription_init(UA_BrowseDescription *p) {
    memset(p, 0, sizeof(UA_BrowseDescription));
}

static UA_INLINE UA_BrowseDescription *
UA_BrowseDescription_new(void) {
    return (UA_BrowseDescription*)UA_new(&UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_BrowseDescription_copy(const UA_BrowseDescription *src, UA_BrowseDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseDescription_deleteMembers(UA_BrowseDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}

static UA_INLINE void
UA_BrowseDescription_clear(UA_BrowseDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}

static UA_INLINE void
UA_BrowseDescription_delete(UA_BrowseDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]);
}

/* BrowseResultMask */
static UA_INLINE void
UA_BrowseResultMask_init(UA_BrowseResultMask *p) {
    memset(p, 0, sizeof(UA_BrowseResultMask));
}

static UA_INLINE UA_BrowseResultMask *
UA_BrowseResultMask_new(void) {
    return (UA_BrowseResultMask*)UA_new(&UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}

static UA_INLINE UA_StatusCode
UA_BrowseResultMask_copy(const UA_BrowseResultMask *src, UA_BrowseResultMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseResultMask_deleteMembers(UA_BrowseResultMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}

static UA_INLINE void
UA_BrowseResultMask_clear(UA_BrowseResultMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}

static UA_INLINE void
UA_BrowseResultMask_delete(UA_BrowseResultMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]);
}

/* ReferenceDescription */
static UA_INLINE void
UA_ReferenceDescription_init(UA_ReferenceDescription *p) {
    memset(p, 0, sizeof(UA_ReferenceDescription));
}

static UA_INLINE UA_ReferenceDescription *
UA_ReferenceDescription_new(void) {
    return (UA_ReferenceDescription*)UA_new(&UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_ReferenceDescription_copy(const UA_ReferenceDescription *src, UA_ReferenceDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReferenceDescription_deleteMembers(UA_ReferenceDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}

static UA_INLINE void
UA_ReferenceDescription_clear(UA_ReferenceDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}

static UA_INLINE void
UA_ReferenceDescription_delete(UA_ReferenceDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]);
}

/* ContinuationPoint */
static UA_INLINE void
UA_ContinuationPoint_init(UA_ContinuationPoint *p) {
    memset(p, 0, sizeof(UA_ContinuationPoint));
}

static UA_INLINE UA_ContinuationPoint *
UA_ContinuationPoint_new(void) {
    return (UA_ContinuationPoint*)UA_new(&UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}

static UA_INLINE UA_StatusCode
UA_ContinuationPoint_copy(const UA_ContinuationPoint *src, UA_ContinuationPoint *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ContinuationPoint_deleteMembers(UA_ContinuationPoint *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}

static UA_INLINE void
UA_ContinuationPoint_clear(UA_ContinuationPoint *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}

static UA_INLINE void
UA_ContinuationPoint_delete(UA_ContinuationPoint *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONTINUATIONPOINT]);
}

/* BrowseResult */
static UA_INLINE void
UA_BrowseResult_init(UA_BrowseResult *p) {
    memset(p, 0, sizeof(UA_BrowseResult));
}

static UA_INLINE UA_BrowseResult *
UA_BrowseResult_new(void) {
    return (UA_BrowseResult*)UA_new(&UA_TYPES[UA_TYPES_BROWSERESULT]);
}

static UA_INLINE UA_StatusCode
UA_BrowseResult_copy(const UA_BrowseResult *src, UA_BrowseResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSERESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseResult_deleteMembers(UA_BrowseResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESULT]);
}

static UA_INLINE void
UA_BrowseResult_clear(UA_BrowseResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESULT]);
}

static UA_INLINE void
UA_BrowseResult_delete(UA_BrowseResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESULT]);
}

/* BrowseRequest */
static UA_INLINE void
UA_BrowseRequest_init(UA_BrowseRequest *p) {
    memset(p, 0, sizeof(UA_BrowseRequest));
}

static UA_INLINE UA_BrowseRequest *
UA_BrowseRequest_new(void) {
    return (UA_BrowseRequest*)UA_new(&UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_BrowseRequest_copy(const UA_BrowseRequest *src, UA_BrowseRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseRequest_deleteMembers(UA_BrowseRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}

static UA_INLINE void
UA_BrowseRequest_clear(UA_BrowseRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}

static UA_INLINE void
UA_BrowseRequest_delete(UA_BrowseRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEREQUEST]);
}

/* BrowseResponse */
static UA_INLINE void
UA_BrowseResponse_init(UA_BrowseResponse *p) {
    memset(p, 0, sizeof(UA_BrowseResponse));
}

static UA_INLINE UA_BrowseResponse *
UA_BrowseResponse_new(void) {
    return (UA_BrowseResponse*)UA_new(&UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_BrowseResponse_copy(const UA_BrowseResponse *src, UA_BrowseResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseResponse_deleteMembers(UA_BrowseResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}

static UA_INLINE void
UA_BrowseResponse_clear(UA_BrowseResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}

static UA_INLINE void
UA_BrowseResponse_delete(UA_BrowseResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESPONSE]);
}

/* BrowseNextRequest */
static UA_INLINE void
UA_BrowseNextRequest_init(UA_BrowseNextRequest *p) {
    memset(p, 0, sizeof(UA_BrowseNextRequest));
}

static UA_INLINE UA_BrowseNextRequest *
UA_BrowseNextRequest_new(void) {
    return (UA_BrowseNextRequest*)UA_new(&UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_BrowseNextRequest_copy(const UA_BrowseNextRequest *src, UA_BrowseNextRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseNextRequest_deleteMembers(UA_BrowseNextRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}

static UA_INLINE void
UA_BrowseNextRequest_clear(UA_BrowseNextRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}

static UA_INLINE void
UA_BrowseNextRequest_delete(UA_BrowseNextRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]);
}

/* BrowseNextResponse */
static UA_INLINE void
UA_BrowseNextResponse_init(UA_BrowseNextResponse *p) {
    memset(p, 0, sizeof(UA_BrowseNextResponse));
}

static UA_INLINE UA_BrowseNextResponse *
UA_BrowseNextResponse_new(void) {
    return (UA_BrowseNextResponse*)UA_new(&UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_BrowseNextResponse_copy(const UA_BrowseNextResponse *src, UA_BrowseNextResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowseNextResponse_deleteMembers(UA_BrowseNextResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}

static UA_INLINE void
UA_BrowseNextResponse_clear(UA_BrowseNextResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}

static UA_INLINE void
UA_BrowseNextResponse_delete(UA_BrowseNextResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]);
}

/* RelativePathElement */
static UA_INLINE void
UA_RelativePathElement_init(UA_RelativePathElement *p) {
    memset(p, 0, sizeof(UA_RelativePathElement));
}

static UA_INLINE UA_RelativePathElement *
UA_RelativePathElement_new(void) {
    return (UA_RelativePathElement*)UA_new(&UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}

static UA_INLINE UA_StatusCode
UA_RelativePathElement_copy(const UA_RelativePathElement *src, UA_RelativePathElement *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_RelativePathElement_deleteMembers(UA_RelativePathElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}

static UA_INLINE void
UA_RelativePathElement_clear(UA_RelativePathElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}

static UA_INLINE void
UA_RelativePathElement_delete(UA_RelativePathElement *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]);
}

/* RelativePath */
static UA_INLINE void
UA_RelativePath_init(UA_RelativePath *p) {
    memset(p, 0, sizeof(UA_RelativePath));
}

static UA_INLINE UA_RelativePath *
UA_RelativePath_new(void) {
    return (UA_RelativePath*)UA_new(&UA_TYPES[UA_TYPES_RELATIVEPATH]);
}

static UA_INLINE UA_StatusCode
UA_RelativePath_copy(const UA_RelativePath *src, UA_RelativePath *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RELATIVEPATH]);
}

UA_DEPRECATED static UA_INLINE void
UA_RelativePath_deleteMembers(UA_RelativePath *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RELATIVEPATH]);
}

static UA_INLINE void
UA_RelativePath_clear(UA_RelativePath *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RELATIVEPATH]);
}

static UA_INLINE void
UA_RelativePath_delete(UA_RelativePath *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RELATIVEPATH]);
}

/* BrowsePath */
static UA_INLINE void
UA_BrowsePath_init(UA_BrowsePath *p) {
    memset(p, 0, sizeof(UA_BrowsePath));
}

static UA_INLINE UA_BrowsePath *
UA_BrowsePath_new(void) {
    return (UA_BrowsePath*)UA_new(&UA_TYPES[UA_TYPES_BROWSEPATH]);
}

static UA_INLINE UA_StatusCode
UA_BrowsePath_copy(const UA_BrowsePath *src, UA_BrowsePath *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATH]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowsePath_deleteMembers(UA_BrowsePath *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATH]);
}

static UA_INLINE void
UA_BrowsePath_clear(UA_BrowsePath *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATH]);
}

static UA_INLINE void
UA_BrowsePath_delete(UA_BrowsePath *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATH]);
}

/* BrowsePathTarget */
static UA_INLINE void
UA_BrowsePathTarget_init(UA_BrowsePathTarget *p) {
    memset(p, 0, sizeof(UA_BrowsePathTarget));
}

static UA_INLINE UA_BrowsePathTarget *
UA_BrowsePathTarget_new(void) {
    return (UA_BrowsePathTarget*)UA_new(&UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}

static UA_INLINE UA_StatusCode
UA_BrowsePathTarget_copy(const UA_BrowsePathTarget *src, UA_BrowsePathTarget *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowsePathTarget_deleteMembers(UA_BrowsePathTarget *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}

static UA_INLINE void
UA_BrowsePathTarget_clear(UA_BrowsePathTarget *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}

static UA_INLINE void
UA_BrowsePathTarget_delete(UA_BrowsePathTarget *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]);
}

/* BrowsePathResult */
static UA_INLINE void
UA_BrowsePathResult_init(UA_BrowsePathResult *p) {
    memset(p, 0, sizeof(UA_BrowsePathResult));
}

static UA_INLINE UA_BrowsePathResult *
UA_BrowsePathResult_new(void) {
    return (UA_BrowsePathResult*)UA_new(&UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}

static UA_INLINE UA_StatusCode
UA_BrowsePathResult_copy(const UA_BrowsePathResult *src, UA_BrowsePathResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_BrowsePathResult_deleteMembers(UA_BrowsePathResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}

static UA_INLINE void
UA_BrowsePathResult_clear(UA_BrowsePathResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}

static UA_INLINE void
UA_BrowsePathResult_delete(UA_BrowsePathResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]);
}

/* TranslateBrowsePathsToNodeIdsRequest */
static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsRequest_init(UA_TranslateBrowsePathsToNodeIdsRequest *p) {
    memset(p, 0, sizeof(UA_TranslateBrowsePathsToNodeIdsRequest));
}

static UA_INLINE UA_TranslateBrowsePathsToNodeIdsRequest *
UA_TranslateBrowsePathsToNodeIdsRequest_new(void) {
    return (UA_TranslateBrowsePathsToNodeIdsRequest*)UA_new(&UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsRequest_copy(const UA_TranslateBrowsePathsToNodeIdsRequest *src, UA_TranslateBrowsePathsToNodeIdsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsRequest_deleteMembers(UA_TranslateBrowsePathsToNodeIdsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}

static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsRequest_clear(UA_TranslateBrowsePathsToNodeIdsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}

static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsRequest_delete(UA_TranslateBrowsePathsToNodeIdsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]);
}

/* TranslateBrowsePathsToNodeIdsResponse */
static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsResponse_init(UA_TranslateBrowsePathsToNodeIdsResponse *p) {
    memset(p, 0, sizeof(UA_TranslateBrowsePathsToNodeIdsResponse));
}

static UA_INLINE UA_TranslateBrowsePathsToNodeIdsResponse *
UA_TranslateBrowsePathsToNodeIdsResponse_new(void) {
    return (UA_TranslateBrowsePathsToNodeIdsResponse*)UA_new(&UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_TranslateBrowsePathsToNodeIdsResponse_copy(const UA_TranslateBrowsePathsToNodeIdsResponse *src, UA_TranslateBrowsePathsToNodeIdsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsResponse_deleteMembers(UA_TranslateBrowsePathsToNodeIdsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}

static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsResponse_clear(UA_TranslateBrowsePathsToNodeIdsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}

static UA_INLINE void
UA_TranslateBrowsePathsToNodeIdsResponse_delete(UA_TranslateBrowsePathsToNodeIdsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]);
}

/* RegisterNodesRequest */
static UA_INLINE void
UA_RegisterNodesRequest_init(UA_RegisterNodesRequest *p) {
    memset(p, 0, sizeof(UA_RegisterNodesRequest));
}

static UA_INLINE UA_RegisterNodesRequest *
UA_RegisterNodesRequest_new(void) {
    return (UA_RegisterNodesRequest*)UA_new(&UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_RegisterNodesRequest_copy(const UA_RegisterNodesRequest *src, UA_RegisterNodesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterNodesRequest_deleteMembers(UA_RegisterNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}

static UA_INLINE void
UA_RegisterNodesRequest_clear(UA_RegisterNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}

static UA_INLINE void
UA_RegisterNodesRequest_delete(UA_RegisterNodesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]);
}

/* RegisterNodesResponse */
static UA_INLINE void
UA_RegisterNodesResponse_init(UA_RegisterNodesResponse *p) {
    memset(p, 0, sizeof(UA_RegisterNodesResponse));
}

static UA_INLINE UA_RegisterNodesResponse *
UA_RegisterNodesResponse_new(void) {
    return (UA_RegisterNodesResponse*)UA_new(&UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_RegisterNodesResponse_copy(const UA_RegisterNodesResponse *src, UA_RegisterNodesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RegisterNodesResponse_deleteMembers(UA_RegisterNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}

static UA_INLINE void
UA_RegisterNodesResponse_clear(UA_RegisterNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}

static UA_INLINE void
UA_RegisterNodesResponse_delete(UA_RegisterNodesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]);
}

/* UnregisterNodesRequest */
static UA_INLINE void
UA_UnregisterNodesRequest_init(UA_UnregisterNodesRequest *p) {
    memset(p, 0, sizeof(UA_UnregisterNodesRequest));
}

static UA_INLINE UA_UnregisterNodesRequest *
UA_UnregisterNodesRequest_new(void) {
    return (UA_UnregisterNodesRequest*)UA_new(&UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_UnregisterNodesRequest_copy(const UA_UnregisterNodesRequest *src, UA_UnregisterNodesRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_UnregisterNodesRequest_deleteMembers(UA_UnregisterNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}

static UA_INLINE void
UA_UnregisterNodesRequest_clear(UA_UnregisterNodesRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}

static UA_INLINE void
UA_UnregisterNodesRequest_delete(UA_UnregisterNodesRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]);
}

/* UnregisterNodesResponse */
static UA_INLINE void
UA_UnregisterNodesResponse_init(UA_UnregisterNodesResponse *p) {
    memset(p, 0, sizeof(UA_UnregisterNodesResponse));
}

static UA_INLINE UA_UnregisterNodesResponse *
UA_UnregisterNodesResponse_new(void) {
    return (UA_UnregisterNodesResponse*)UA_new(&UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_UnregisterNodesResponse_copy(const UA_UnregisterNodesResponse *src, UA_UnregisterNodesResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UnregisterNodesResponse_deleteMembers(UA_UnregisterNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}

static UA_INLINE void
UA_UnregisterNodesResponse_clear(UA_UnregisterNodesResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}

static UA_INLINE void
UA_UnregisterNodesResponse_delete(UA_UnregisterNodesResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]);
}

/* Counter */
static UA_INLINE void
UA_Counter_init(UA_Counter *p) {
    memset(p, 0, sizeof(UA_Counter));
}

static UA_INLINE UA_Counter *
UA_Counter_new(void) {
    return (UA_Counter*)UA_new(&UA_TYPES[UA_TYPES_COUNTER]);
}

static UA_INLINE UA_StatusCode
UA_Counter_copy(const UA_Counter *src, UA_Counter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_COUNTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_Counter_deleteMembers(UA_Counter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_COUNTER]);
}

static UA_INLINE void
UA_Counter_clear(UA_Counter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_COUNTER]);
}

static UA_INLINE void
UA_Counter_delete(UA_Counter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_COUNTER]);
}

/* OpaqueNumericRange */
static UA_INLINE void
UA_OpaqueNumericRange_init(UA_OpaqueNumericRange *p) {
    memset(p, 0, sizeof(UA_OpaqueNumericRange));
}

static UA_INLINE UA_OpaqueNumericRange *
UA_OpaqueNumericRange_new(void) {
    return (UA_OpaqueNumericRange*)UA_new(&UA_TYPES[UA_TYPES_OPAQUENUMERICRANGE]);
}

static UA_INLINE UA_StatusCode
UA_OpaqueNumericRange_copy(const UA_OpaqueNumericRange *src, UA_OpaqueNumericRange *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPAQUENUMERICRANGE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpaqueNumericRange_deleteMembers(UA_OpaqueNumericRange *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPAQUENUMERICRANGE]);
}

static UA_INLINE void
UA_OpaqueNumericRange_clear(UA_OpaqueNumericRange *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_OPAQUENUMERICRANGE]);
}

static UA_INLINE void
UA_OpaqueNumericRange_delete(UA_OpaqueNumericRange *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_OPAQUENUMERICRANGE]);
}

/* Time */
static UA_INLINE void
UA_Time_init(UA_Time *p) {
    memset(p, 0, sizeof(UA_Time));
}

static UA_INLINE UA_Time *
UA_Time_new(void) {
    return (UA_Time*)UA_new(&UA_TYPES[UA_TYPES_TIME]);
}

static UA_INLINE UA_StatusCode
UA_Time_copy(const UA_Time *src, UA_Time *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TIME]);
}

UA_DEPRECATED static UA_INLINE void
UA_Time_deleteMembers(UA_Time *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIME]);
}

static UA_INLINE void
UA_Time_clear(UA_Time *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIME]);
}

static UA_INLINE void
UA_Time_delete(UA_Time *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TIME]);
}

/* Date */
static UA_INLINE void
UA_Date_init(UA_Date *p) {
    memset(p, 0, sizeof(UA_Date));
}

static UA_INLINE UA_Date *
UA_Date_new(void) {
    return (UA_Date*)UA_new(&UA_TYPES[UA_TYPES_DATE]);
}

static UA_INLINE UA_StatusCode
UA_Date_copy(const UA_Date *src, UA_Date *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_Date_deleteMembers(UA_Date *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATE]);
}

static UA_INLINE void
UA_Date_clear(UA_Date *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATE]);
}

static UA_INLINE void
UA_Date_delete(UA_Date *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATE]);
}

/* EndpointConfiguration */
static UA_INLINE void
UA_EndpointConfiguration_init(UA_EndpointConfiguration *p) {
    memset(p, 0, sizeof(UA_EndpointConfiguration));
}

static UA_INLINE UA_EndpointConfiguration *
UA_EndpointConfiguration_new(void) {
    return (UA_EndpointConfiguration*)UA_new(&UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}

static UA_INLINE UA_StatusCode
UA_EndpointConfiguration_copy(const UA_EndpointConfiguration *src, UA_EndpointConfiguration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndpointConfiguration_deleteMembers(UA_EndpointConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}

static UA_INLINE void
UA_EndpointConfiguration_clear(UA_EndpointConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}

static UA_INLINE void
UA_EndpointConfiguration_delete(UA_EndpointConfiguration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENDPOINTCONFIGURATION]);
}

/* QueryDataDescription */
static UA_INLINE void
UA_QueryDataDescription_init(UA_QueryDataDescription *p) {
    memset(p, 0, sizeof(UA_QueryDataDescription));
}

static UA_INLINE UA_QueryDataDescription *
UA_QueryDataDescription_new(void) {
    return (UA_QueryDataDescription*)UA_new(&UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_QueryDataDescription_copy(const UA_QueryDataDescription *src, UA_QueryDataDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryDataDescription_deleteMembers(UA_QueryDataDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}

static UA_INLINE void
UA_QueryDataDescription_clear(UA_QueryDataDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}

static UA_INLINE void
UA_QueryDataDescription_delete(UA_QueryDataDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]);
}

/* NodeTypeDescription */
static UA_INLINE void
UA_NodeTypeDescription_init(UA_NodeTypeDescription *p) {
    memset(p, 0, sizeof(UA_NodeTypeDescription));
}

static UA_INLINE UA_NodeTypeDescription *
UA_NodeTypeDescription_new(void) {
    return (UA_NodeTypeDescription*)UA_new(&UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_NodeTypeDescription_copy(const UA_NodeTypeDescription *src, UA_NodeTypeDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeTypeDescription_deleteMembers(UA_NodeTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}

static UA_INLINE void
UA_NodeTypeDescription_clear(UA_NodeTypeDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}

static UA_INLINE void
UA_NodeTypeDescription_delete(UA_NodeTypeDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]);
}

/* FilterOperator */
static UA_INLINE void
UA_FilterOperator_init(UA_FilterOperator *p) {
    memset(p, 0, sizeof(UA_FilterOperator));
}

static UA_INLINE UA_FilterOperator *
UA_FilterOperator_new(void) {
    return (UA_FilterOperator*)UA_new(&UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}

static UA_INLINE UA_StatusCode
UA_FilterOperator_copy(const UA_FilterOperator *src, UA_FilterOperator *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}

UA_DEPRECATED static UA_INLINE void
UA_FilterOperator_deleteMembers(UA_FilterOperator *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}

static UA_INLINE void
UA_FilterOperator_clear(UA_FilterOperator *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}

static UA_INLINE void
UA_FilterOperator_delete(UA_FilterOperator *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FILTEROPERATOR]);
}

/* QueryDataSet */
static UA_INLINE void
UA_QueryDataSet_init(UA_QueryDataSet *p) {
    memset(p, 0, sizeof(UA_QueryDataSet));
}

static UA_INLINE UA_QueryDataSet *
UA_QueryDataSet_new(void) {
    return (UA_QueryDataSet*)UA_new(&UA_TYPES[UA_TYPES_QUERYDATASET]);
}

static UA_INLINE UA_StatusCode
UA_QueryDataSet_copy(const UA_QueryDataSet *src, UA_QueryDataSet *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYDATASET]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryDataSet_deleteMembers(UA_QueryDataSet *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYDATASET]);
}

static UA_INLINE void
UA_QueryDataSet_clear(UA_QueryDataSet *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYDATASET]);
}

static UA_INLINE void
UA_QueryDataSet_delete(UA_QueryDataSet *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYDATASET]);
}

/* NodeReference */
static UA_INLINE void
UA_NodeReference_init(UA_NodeReference *p) {
    memset(p, 0, sizeof(UA_NodeReference));
}

static UA_INLINE UA_NodeReference *
UA_NodeReference_new(void) {
    return (UA_NodeReference*)UA_new(&UA_TYPES[UA_TYPES_NODEREFERENCE]);
}

static UA_INLINE UA_StatusCode
UA_NodeReference_copy(const UA_NodeReference *src, UA_NodeReference *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEREFERENCE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NodeReference_deleteMembers(UA_NodeReference *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEREFERENCE]);
}

static UA_INLINE void
UA_NodeReference_clear(UA_NodeReference *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NODEREFERENCE]);
}

static UA_INLINE void
UA_NodeReference_delete(UA_NodeReference *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NODEREFERENCE]);
}

/* ContentFilterElement */
static UA_INLINE void
UA_ContentFilterElement_init(UA_ContentFilterElement *p) {
    memset(p, 0, sizeof(UA_ContentFilterElement));
}

static UA_INLINE UA_ContentFilterElement *
UA_ContentFilterElement_new(void) {
    return (UA_ContentFilterElement*)UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}

static UA_INLINE UA_StatusCode
UA_ContentFilterElement_copy(const UA_ContentFilterElement *src, UA_ContentFilterElement *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ContentFilterElement_deleteMembers(UA_ContentFilterElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}

static UA_INLINE void
UA_ContentFilterElement_clear(UA_ContentFilterElement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}

static UA_INLINE void
UA_ContentFilterElement_delete(UA_ContentFilterElement *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]);
}

/* ContentFilter */
static UA_INLINE void
UA_ContentFilter_init(UA_ContentFilter *p) {
    memset(p, 0, sizeof(UA_ContentFilter));
}

static UA_INLINE UA_ContentFilter *
UA_ContentFilter_new(void) {
    return (UA_ContentFilter*)UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTER]);
}

static UA_INLINE UA_StatusCode
UA_ContentFilter_copy(const UA_ContentFilter *src, UA_ContentFilter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_ContentFilter_deleteMembers(UA_ContentFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTER]);
}

static UA_INLINE void
UA_ContentFilter_clear(UA_ContentFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTER]);
}

static UA_INLINE void
UA_ContentFilter_delete(UA_ContentFilter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTER]);
}

/* FilterOperand */
static UA_INLINE void
UA_FilterOperand_init(UA_FilterOperand *p) {
    memset(p, 0, sizeof(UA_FilterOperand));
}

static UA_INLINE UA_FilterOperand *
UA_FilterOperand_new(void) {
    return (UA_FilterOperand*)UA_new(&UA_TYPES[UA_TYPES_FILTEROPERAND]);
}

static UA_INLINE UA_StatusCode
UA_FilterOperand_copy(const UA_FilterOperand *src, UA_FilterOperand *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FILTEROPERAND]);
}

UA_DEPRECATED static UA_INLINE void
UA_FilterOperand_deleteMembers(UA_FilterOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FILTEROPERAND]);
}

static UA_INLINE void
UA_FilterOperand_clear(UA_FilterOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FILTEROPERAND]);
}

static UA_INLINE void
UA_FilterOperand_delete(UA_FilterOperand *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FILTEROPERAND]);
}

/* ElementOperand */
static UA_INLINE void
UA_ElementOperand_init(UA_ElementOperand *p) {
    memset(p, 0, sizeof(UA_ElementOperand));
}

static UA_INLINE UA_ElementOperand *
UA_ElementOperand_new(void) {
    return (UA_ElementOperand*)UA_new(&UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}

static UA_INLINE UA_StatusCode
UA_ElementOperand_copy(const UA_ElementOperand *src, UA_ElementOperand *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}

UA_DEPRECATED static UA_INLINE void
UA_ElementOperand_deleteMembers(UA_ElementOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}

static UA_INLINE void
UA_ElementOperand_clear(UA_ElementOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}

static UA_INLINE void
UA_ElementOperand_delete(UA_ElementOperand *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ELEMENTOPERAND]);
}

/* LiteralOperand */
static UA_INLINE void
UA_LiteralOperand_init(UA_LiteralOperand *p) {
    memset(p, 0, sizeof(UA_LiteralOperand));
}

static UA_INLINE UA_LiteralOperand *
UA_LiteralOperand_new(void) {
    return (UA_LiteralOperand*)UA_new(&UA_TYPES[UA_TYPES_LITERALOPERAND]);
}

static UA_INLINE UA_StatusCode
UA_LiteralOperand_copy(const UA_LiteralOperand *src, UA_LiteralOperand *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_LITERALOPERAND]);
}

UA_DEPRECATED static UA_INLINE void
UA_LiteralOperand_deleteMembers(UA_LiteralOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LITERALOPERAND]);
}

static UA_INLINE void
UA_LiteralOperand_clear(UA_LiteralOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_LITERALOPERAND]);
}

static UA_INLINE void
UA_LiteralOperand_delete(UA_LiteralOperand *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_LITERALOPERAND]);
}

/* AttributeOperand */
static UA_INLINE void
UA_AttributeOperand_init(UA_AttributeOperand *p) {
    memset(p, 0, sizeof(UA_AttributeOperand));
}

static UA_INLINE UA_AttributeOperand *
UA_AttributeOperand_new(void) {
    return (UA_AttributeOperand*)UA_new(&UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}

static UA_INLINE UA_StatusCode
UA_AttributeOperand_copy(const UA_AttributeOperand *src, UA_AttributeOperand *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}

UA_DEPRECATED static UA_INLINE void
UA_AttributeOperand_deleteMembers(UA_AttributeOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}

static UA_INLINE void
UA_AttributeOperand_clear(UA_AttributeOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}

static UA_INLINE void
UA_AttributeOperand_delete(UA_AttributeOperand *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ATTRIBUTEOPERAND]);
}

/* SimpleAttributeOperand */
static UA_INLINE void
UA_SimpleAttributeOperand_init(UA_SimpleAttributeOperand *p) {
    memset(p, 0, sizeof(UA_SimpleAttributeOperand));
}

static UA_INLINE UA_SimpleAttributeOperand *
UA_SimpleAttributeOperand_new(void) {
    return (UA_SimpleAttributeOperand*)UA_new(&UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}

static UA_INLINE UA_StatusCode
UA_SimpleAttributeOperand_copy(const UA_SimpleAttributeOperand *src, UA_SimpleAttributeOperand *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}

UA_DEPRECATED static UA_INLINE void
UA_SimpleAttributeOperand_deleteMembers(UA_SimpleAttributeOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}

static UA_INLINE void
UA_SimpleAttributeOperand_clear(UA_SimpleAttributeOperand *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}

static UA_INLINE void
UA_SimpleAttributeOperand_delete(UA_SimpleAttributeOperand *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SIMPLEATTRIBUTEOPERAND]);
}

/* ContentFilterElementResult */
static UA_INLINE void
UA_ContentFilterElementResult_init(UA_ContentFilterElementResult *p) {
    memset(p, 0, sizeof(UA_ContentFilterElementResult));
}

static UA_INLINE UA_ContentFilterElementResult *
UA_ContentFilterElementResult_new(void) {
    return (UA_ContentFilterElementResult*)UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}

static UA_INLINE UA_StatusCode
UA_ContentFilterElementResult_copy(const UA_ContentFilterElementResult *src, UA_ContentFilterElementResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ContentFilterElementResult_deleteMembers(UA_ContentFilterElementResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}

static UA_INLINE void
UA_ContentFilterElementResult_clear(UA_ContentFilterElementResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}

static UA_INLINE void
UA_ContentFilterElementResult_delete(UA_ContentFilterElementResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]);
}

/* ContentFilterResult */
static UA_INLINE void
UA_ContentFilterResult_init(UA_ContentFilterResult *p) {
    memset(p, 0, sizeof(UA_ContentFilterResult));
}

static UA_INLINE UA_ContentFilterResult *
UA_ContentFilterResult_new(void) {
    return (UA_ContentFilterResult*)UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}

static UA_INLINE UA_StatusCode
UA_ContentFilterResult_copy(const UA_ContentFilterResult *src, UA_ContentFilterResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ContentFilterResult_deleteMembers(UA_ContentFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}

static UA_INLINE void
UA_ContentFilterResult_clear(UA_ContentFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}

static UA_INLINE void
UA_ContentFilterResult_delete(UA_ContentFilterResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]);
}

/* ParsingResult */
static UA_INLINE void
UA_ParsingResult_init(UA_ParsingResult *p) {
    memset(p, 0, sizeof(UA_ParsingResult));
}

static UA_INLINE UA_ParsingResult *
UA_ParsingResult_new(void) {
    return (UA_ParsingResult*)UA_new(&UA_TYPES[UA_TYPES_PARSINGRESULT]);
}

static UA_INLINE UA_StatusCode
UA_ParsingResult_copy(const UA_ParsingResult *src, UA_ParsingResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PARSINGRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ParsingResult_deleteMembers(UA_ParsingResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PARSINGRESULT]);
}

static UA_INLINE void
UA_ParsingResult_clear(UA_ParsingResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PARSINGRESULT]);
}

static UA_INLINE void
UA_ParsingResult_delete(UA_ParsingResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PARSINGRESULT]);
}

/* QueryFirstRequest */
static UA_INLINE void
UA_QueryFirstRequest_init(UA_QueryFirstRequest *p) {
    memset(p, 0, sizeof(UA_QueryFirstRequest));
}

static UA_INLINE UA_QueryFirstRequest *
UA_QueryFirstRequest_new(void) {
    return (UA_QueryFirstRequest*)UA_new(&UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_QueryFirstRequest_copy(const UA_QueryFirstRequest *src, UA_QueryFirstRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryFirstRequest_deleteMembers(UA_QueryFirstRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}

static UA_INLINE void
UA_QueryFirstRequest_clear(UA_QueryFirstRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}

static UA_INLINE void
UA_QueryFirstRequest_delete(UA_QueryFirstRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]);
}

/* QueryFirstResponse */
static UA_INLINE void
UA_QueryFirstResponse_init(UA_QueryFirstResponse *p) {
    memset(p, 0, sizeof(UA_QueryFirstResponse));
}

static UA_INLINE UA_QueryFirstResponse *
UA_QueryFirstResponse_new(void) {
    return (UA_QueryFirstResponse*)UA_new(&UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_QueryFirstResponse_copy(const UA_QueryFirstResponse *src, UA_QueryFirstResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryFirstResponse_deleteMembers(UA_QueryFirstResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}

static UA_INLINE void
UA_QueryFirstResponse_clear(UA_QueryFirstResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}

static UA_INLINE void
UA_QueryFirstResponse_delete(UA_QueryFirstResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]);
}

/* QueryNextRequest */
static UA_INLINE void
UA_QueryNextRequest_init(UA_QueryNextRequest *p) {
    memset(p, 0, sizeof(UA_QueryNextRequest));
}

static UA_INLINE UA_QueryNextRequest *
UA_QueryNextRequest_new(void) {
    return (UA_QueryNextRequest*)UA_new(&UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_QueryNextRequest_copy(const UA_QueryNextRequest *src, UA_QueryNextRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryNextRequest_deleteMembers(UA_QueryNextRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}

static UA_INLINE void
UA_QueryNextRequest_clear(UA_QueryNextRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}

static UA_INLINE void
UA_QueryNextRequest_delete(UA_QueryNextRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]);
}

/* QueryNextResponse */
static UA_INLINE void
UA_QueryNextResponse_init(UA_QueryNextResponse *p) {
    memset(p, 0, sizeof(UA_QueryNextResponse));
}

static UA_INLINE UA_QueryNextResponse *
UA_QueryNextResponse_new(void) {
    return (UA_QueryNextResponse*)UA_new(&UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_QueryNextResponse_copy(const UA_QueryNextResponse *src, UA_QueryNextResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_QueryNextResponse_deleteMembers(UA_QueryNextResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}

static UA_INLINE void
UA_QueryNextResponse_clear(UA_QueryNextResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}

static UA_INLINE void
UA_QueryNextResponse_delete(UA_QueryNextResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]);
}

/* TimestampsToReturn */
static UA_INLINE void
UA_TimestampsToReturn_init(UA_TimestampsToReturn *p) {
    memset(p, 0, sizeof(UA_TimestampsToReturn));
}

static UA_INLINE UA_TimestampsToReturn *
UA_TimestampsToReturn_new(void) {
    return (UA_TimestampsToReturn*)UA_new(&UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}

static UA_INLINE UA_StatusCode
UA_TimestampsToReturn_copy(const UA_TimestampsToReturn *src, UA_TimestampsToReturn *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}

UA_DEPRECATED static UA_INLINE void
UA_TimestampsToReturn_deleteMembers(UA_TimestampsToReturn *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}

static UA_INLINE void
UA_TimestampsToReturn_clear(UA_TimestampsToReturn *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}

static UA_INLINE void
UA_TimestampsToReturn_delete(UA_TimestampsToReturn *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]);
}

/* ReadValueId */
static UA_INLINE void
UA_ReadValueId_init(UA_ReadValueId *p) {
    memset(p, 0, sizeof(UA_ReadValueId));
}

static UA_INLINE UA_ReadValueId *
UA_ReadValueId_new(void) {
    return (UA_ReadValueId*)UA_new(&UA_TYPES[UA_TYPES_READVALUEID]);
}

static UA_INLINE UA_StatusCode
UA_ReadValueId_copy(const UA_ReadValueId *src, UA_ReadValueId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READVALUEID]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadValueId_deleteMembers(UA_ReadValueId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READVALUEID]);
}

static UA_INLINE void
UA_ReadValueId_clear(UA_ReadValueId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READVALUEID]);
}

static UA_INLINE void
UA_ReadValueId_delete(UA_ReadValueId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READVALUEID]);
}

/* ReadRequest */
static UA_INLINE void
UA_ReadRequest_init(UA_ReadRequest *p) {
    memset(p, 0, sizeof(UA_ReadRequest));
}

static UA_INLINE UA_ReadRequest *
UA_ReadRequest_new(void) {
    return (UA_ReadRequest*)UA_new(&UA_TYPES[UA_TYPES_READREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_ReadRequest_copy(const UA_ReadRequest *src, UA_ReadRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadRequest_deleteMembers(UA_ReadRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READREQUEST]);
}

static UA_INLINE void
UA_ReadRequest_clear(UA_ReadRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READREQUEST]);
}

static UA_INLINE void
UA_ReadRequest_delete(UA_ReadRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READREQUEST]);
}

/* ReadResponse */
static UA_INLINE void
UA_ReadResponse_init(UA_ReadResponse *p) {
    memset(p, 0, sizeof(UA_ReadResponse));
}

static UA_INLINE UA_ReadResponse *
UA_ReadResponse_new(void) {
    return (UA_ReadResponse*)UA_new(&UA_TYPES[UA_TYPES_READRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_ReadResponse_copy(const UA_ReadResponse *src, UA_ReadResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadResponse_deleteMembers(UA_ReadResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READRESPONSE]);
}

static UA_INLINE void
UA_ReadResponse_clear(UA_ReadResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READRESPONSE]);
}

static UA_INLINE void
UA_ReadResponse_delete(UA_ReadResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READRESPONSE]);
}

/* HistoryReadValueId */
static UA_INLINE void
UA_HistoryReadValueId_init(UA_HistoryReadValueId *p) {
    memset(p, 0, sizeof(UA_HistoryReadValueId));
}

static UA_INLINE UA_HistoryReadValueId *
UA_HistoryReadValueId_new(void) {
    return (UA_HistoryReadValueId*)UA_new(&UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}

static UA_INLINE UA_StatusCode
UA_HistoryReadValueId_copy(const UA_HistoryReadValueId *src, UA_HistoryReadValueId *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryReadValueId_deleteMembers(UA_HistoryReadValueId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}

static UA_INLINE void
UA_HistoryReadValueId_clear(UA_HistoryReadValueId *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}

static UA_INLINE void
UA_HistoryReadValueId_delete(UA_HistoryReadValueId *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYREADVALUEID]);
}

/* HistoryReadResult */
static UA_INLINE void
UA_HistoryReadResult_init(UA_HistoryReadResult *p) {
    memset(p, 0, sizeof(UA_HistoryReadResult));
}

static UA_INLINE UA_HistoryReadResult *
UA_HistoryReadResult_new(void) {
    return (UA_HistoryReadResult*)UA_new(&UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}

static UA_INLINE UA_StatusCode
UA_HistoryReadResult_copy(const UA_HistoryReadResult *src, UA_HistoryReadResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryReadResult_deleteMembers(UA_HistoryReadResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}

static UA_INLINE void
UA_HistoryReadResult_clear(UA_HistoryReadResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}

static UA_INLINE void
UA_HistoryReadResult_delete(UA_HistoryReadResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYREADRESULT]);
}

/* HistoryReadDetails */
static UA_INLINE void
UA_HistoryReadDetails_init(UA_HistoryReadDetails *p) {
    memset(p, 0, sizeof(UA_HistoryReadDetails));
}

static UA_INLINE UA_HistoryReadDetails *
UA_HistoryReadDetails_new(void) {
    return (UA_HistoryReadDetails*)UA_new(&UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_HistoryReadDetails_copy(const UA_HistoryReadDetails *src, UA_HistoryReadDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryReadDetails_deleteMembers(UA_HistoryReadDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}

static UA_INLINE void
UA_HistoryReadDetails_clear(UA_HistoryReadDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}

static UA_INLINE void
UA_HistoryReadDetails_delete(UA_HistoryReadDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYREADDETAILS]);
}

/* ReadRawModifiedDetails */
static UA_INLINE void
UA_ReadRawModifiedDetails_init(UA_ReadRawModifiedDetails *p) {
    memset(p, 0, sizeof(UA_ReadRawModifiedDetails));
}

static UA_INLINE UA_ReadRawModifiedDetails *
UA_ReadRawModifiedDetails_new(void) {
    return (UA_ReadRawModifiedDetails*)UA_new(&UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_ReadRawModifiedDetails_copy(const UA_ReadRawModifiedDetails *src, UA_ReadRawModifiedDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadRawModifiedDetails_deleteMembers(UA_ReadRawModifiedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}

static UA_INLINE void
UA_ReadRawModifiedDetails_clear(UA_ReadRawModifiedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}

static UA_INLINE void
UA_ReadRawModifiedDetails_delete(UA_ReadRawModifiedDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READRAWMODIFIEDDETAILS]);
}

/* ReadAtTimeDetails */
static UA_INLINE void
UA_ReadAtTimeDetails_init(UA_ReadAtTimeDetails *p) {
    memset(p, 0, sizeof(UA_ReadAtTimeDetails));
}

static UA_INLINE UA_ReadAtTimeDetails *
UA_ReadAtTimeDetails_new(void) {
    return (UA_ReadAtTimeDetails*)UA_new(&UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_ReadAtTimeDetails_copy(const UA_ReadAtTimeDetails *src, UA_ReadAtTimeDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadAtTimeDetails_deleteMembers(UA_ReadAtTimeDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}

static UA_INLINE void
UA_ReadAtTimeDetails_clear(UA_ReadAtTimeDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}

static UA_INLINE void
UA_ReadAtTimeDetails_delete(UA_ReadAtTimeDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READATTIMEDETAILS]);
}

/* ReadAnnotationDataDetails */
static UA_INLINE void
UA_ReadAnnotationDataDetails_init(UA_ReadAnnotationDataDetails *p) {
    memset(p, 0, sizeof(UA_ReadAnnotationDataDetails));
}

static UA_INLINE UA_ReadAnnotationDataDetails *
UA_ReadAnnotationDataDetails_new(void) {
    return (UA_ReadAnnotationDataDetails*)UA_new(&UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}

static UA_INLINE UA_StatusCode
UA_ReadAnnotationDataDetails_copy(const UA_ReadAnnotationDataDetails *src, UA_ReadAnnotationDataDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadAnnotationDataDetails_deleteMembers(UA_ReadAnnotationDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}

static UA_INLINE void
UA_ReadAnnotationDataDetails_clear(UA_ReadAnnotationDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}

static UA_INLINE void
UA_ReadAnnotationDataDetails_delete(UA_ReadAnnotationDataDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READANNOTATIONDATADETAILS]);
}

/* HistoryData */
static UA_INLINE void
UA_HistoryData_init(UA_HistoryData *p) {
    memset(p, 0, sizeof(UA_HistoryData));
}

static UA_INLINE UA_HistoryData *
UA_HistoryData_new(void) {
    return (UA_HistoryData*)UA_new(&UA_TYPES[UA_TYPES_HISTORYDATA]);
}

static UA_INLINE UA_StatusCode
UA_HistoryData_copy(const UA_HistoryData *src, UA_HistoryData *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYDATA]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryData_deleteMembers(UA_HistoryData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYDATA]);
}

static UA_INLINE void
UA_HistoryData_clear(UA_HistoryData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYDATA]);
}

static UA_INLINE void
UA_HistoryData_delete(UA_HistoryData *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYDATA]);
}

/* HistoryReadRequest */
static UA_INLINE void
UA_HistoryReadRequest_init(UA_HistoryReadRequest *p) {
    memset(p, 0, sizeof(UA_HistoryReadRequest));
}

static UA_INLINE UA_HistoryReadRequest *
UA_HistoryReadRequest_new(void) {
    return (UA_HistoryReadRequest*)UA_new(&UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_HistoryReadRequest_copy(const UA_HistoryReadRequest *src, UA_HistoryReadRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryReadRequest_deleteMembers(UA_HistoryReadRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}

static UA_INLINE void
UA_HistoryReadRequest_clear(UA_HistoryReadRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}

static UA_INLINE void
UA_HistoryReadRequest_delete(UA_HistoryReadRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYREADREQUEST]);
}

/* HistoryReadResponse */
static UA_INLINE void
UA_HistoryReadResponse_init(UA_HistoryReadResponse *p) {
    memset(p, 0, sizeof(UA_HistoryReadResponse));
}

static UA_INLINE UA_HistoryReadResponse *
UA_HistoryReadResponse_new(void) {
    return (UA_HistoryReadResponse*)UA_new(&UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_HistoryReadResponse_copy(const UA_HistoryReadResponse *src, UA_HistoryReadResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryReadResponse_deleteMembers(UA_HistoryReadResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}

static UA_INLINE void
UA_HistoryReadResponse_clear(UA_HistoryReadResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}

static UA_INLINE void
UA_HistoryReadResponse_delete(UA_HistoryReadResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYREADRESPONSE]);
}

/* WriteValue */
static UA_INLINE void
UA_WriteValue_init(UA_WriteValue *p) {
    memset(p, 0, sizeof(UA_WriteValue));
}

static UA_INLINE UA_WriteValue *
UA_WriteValue_new(void) {
    return (UA_WriteValue*)UA_new(&UA_TYPES[UA_TYPES_WRITEVALUE]);
}

static UA_INLINE UA_StatusCode
UA_WriteValue_copy(const UA_WriteValue *src, UA_WriteValue *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITEVALUE]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriteValue_deleteMembers(UA_WriteValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITEVALUE]);
}

static UA_INLINE void
UA_WriteValue_clear(UA_WriteValue *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITEVALUE]);
}

static UA_INLINE void
UA_WriteValue_delete(UA_WriteValue *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITEVALUE]);
}

/* WriteRequest */
static UA_INLINE void
UA_WriteRequest_init(UA_WriteRequest *p) {
    memset(p, 0, sizeof(UA_WriteRequest));
}

static UA_INLINE UA_WriteRequest *
UA_WriteRequest_new(void) {
    return (UA_WriteRequest*)UA_new(&UA_TYPES[UA_TYPES_WRITEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_WriteRequest_copy(const UA_WriteRequest *src, UA_WriteRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriteRequest_deleteMembers(UA_WriteRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITEREQUEST]);
}

static UA_INLINE void
UA_WriteRequest_clear(UA_WriteRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITEREQUEST]);
}

static UA_INLINE void
UA_WriteRequest_delete(UA_WriteRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITEREQUEST]);
}

/* WriteResponse */
static UA_INLINE void
UA_WriteResponse_init(UA_WriteResponse *p) {
    memset(p, 0, sizeof(UA_WriteResponse));
}

static UA_INLINE UA_WriteResponse *
UA_WriteResponse_new(void) {
    return (UA_WriteResponse*)UA_new(&UA_TYPES[UA_TYPES_WRITERESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_WriteResponse_copy(const UA_WriteResponse *src, UA_WriteResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITERESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriteResponse_deleteMembers(UA_WriteResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERESPONSE]);
}

static UA_INLINE void
UA_WriteResponse_clear(UA_WriteResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERESPONSE]);
}

static UA_INLINE void
UA_WriteResponse_delete(UA_WriteResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITERESPONSE]);
}

/* HistoryUpdateDetails */
static UA_INLINE void
UA_HistoryUpdateDetails_init(UA_HistoryUpdateDetails *p) {
    memset(p, 0, sizeof(UA_HistoryUpdateDetails));
}

static UA_INLINE UA_HistoryUpdateDetails *
UA_HistoryUpdateDetails_new(void) {
    return (UA_HistoryUpdateDetails*)UA_new(&UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_HistoryUpdateDetails_copy(const UA_HistoryUpdateDetails *src, UA_HistoryUpdateDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryUpdateDetails_deleteMembers(UA_HistoryUpdateDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}

static UA_INLINE void
UA_HistoryUpdateDetails_clear(UA_HistoryUpdateDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}

static UA_INLINE void
UA_HistoryUpdateDetails_delete(UA_HistoryUpdateDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEDETAILS]);
}

/* HistoryUpdateType */
static UA_INLINE void
UA_HistoryUpdateType_init(UA_HistoryUpdateType *p) {
    memset(p, 0, sizeof(UA_HistoryUpdateType));
}

static UA_INLINE UA_HistoryUpdateType *
UA_HistoryUpdateType_new(void) {
    return (UA_HistoryUpdateType*)UA_new(&UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}

static UA_INLINE UA_StatusCode
UA_HistoryUpdateType_copy(const UA_HistoryUpdateType *src, UA_HistoryUpdateType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryUpdateType_deleteMembers(UA_HistoryUpdateType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}

static UA_INLINE void
UA_HistoryUpdateType_clear(UA_HistoryUpdateType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}

static UA_INLINE void
UA_HistoryUpdateType_delete(UA_HistoryUpdateType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYUPDATETYPE]);
}

/* PerformUpdateType */
static UA_INLINE void
UA_PerformUpdateType_init(UA_PerformUpdateType *p) {
    memset(p, 0, sizeof(UA_PerformUpdateType));
}

static UA_INLINE UA_PerformUpdateType *
UA_PerformUpdateType_new(void) {
    return (UA_PerformUpdateType*)UA_new(&UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}

static UA_INLINE UA_StatusCode
UA_PerformUpdateType_copy(const UA_PerformUpdateType *src, UA_PerformUpdateType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PerformUpdateType_deleteMembers(UA_PerformUpdateType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}

static UA_INLINE void
UA_PerformUpdateType_clear(UA_PerformUpdateType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}

static UA_INLINE void
UA_PerformUpdateType_delete(UA_PerformUpdateType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PERFORMUPDATETYPE]);
}

/* UpdateDataDetails */
static UA_INLINE void
UA_UpdateDataDetails_init(UA_UpdateDataDetails *p) {
    memset(p, 0, sizeof(UA_UpdateDataDetails));
}

static UA_INLINE UA_UpdateDataDetails *
UA_UpdateDataDetails_new(void) {
    return (UA_UpdateDataDetails*)UA_new(&UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}

static UA_INLINE UA_StatusCode
UA_UpdateDataDetails_copy(const UA_UpdateDataDetails *src, UA_UpdateDataDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_UpdateDataDetails_deleteMembers(UA_UpdateDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}

static UA_INLINE void
UA_UpdateDataDetails_clear(UA_UpdateDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}

static UA_INLINE void
UA_UpdateDataDetails_delete(UA_UpdateDataDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UPDATEDATADETAILS]);
}

/* UpdateStructureDataDetails */
static UA_INLINE void
UA_UpdateStructureDataDetails_init(UA_UpdateStructureDataDetails *p) {
    memset(p, 0, sizeof(UA_UpdateStructureDataDetails));
}

static UA_INLINE UA_UpdateStructureDataDetails *
UA_UpdateStructureDataDetails_new(void) {
    return (UA_UpdateStructureDataDetails*)UA_new(&UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}

static UA_INLINE UA_StatusCode
UA_UpdateStructureDataDetails_copy(const UA_UpdateStructureDataDetails *src, UA_UpdateStructureDataDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_UpdateStructureDataDetails_deleteMembers(UA_UpdateStructureDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}

static UA_INLINE void
UA_UpdateStructureDataDetails_clear(UA_UpdateStructureDataDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}

static UA_INLINE void
UA_UpdateStructureDataDetails_delete(UA_UpdateStructureDataDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UPDATESTRUCTUREDATADETAILS]);
}

/* DeleteRawModifiedDetails */
static UA_INLINE void
UA_DeleteRawModifiedDetails_init(UA_DeleteRawModifiedDetails *p) {
    memset(p, 0, sizeof(UA_DeleteRawModifiedDetails));
}

static UA_INLINE UA_DeleteRawModifiedDetails *
UA_DeleteRawModifiedDetails_new(void) {
    return (UA_DeleteRawModifiedDetails*)UA_new(&UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_DeleteRawModifiedDetails_copy(const UA_DeleteRawModifiedDetails *src, UA_DeleteRawModifiedDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteRawModifiedDetails_deleteMembers(UA_DeleteRawModifiedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}

static UA_INLINE void
UA_DeleteRawModifiedDetails_clear(UA_DeleteRawModifiedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}

static UA_INLINE void
UA_DeleteRawModifiedDetails_delete(UA_DeleteRawModifiedDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETERAWMODIFIEDDETAILS]);
}

/* DeleteAtTimeDetails */
static UA_INLINE void
UA_DeleteAtTimeDetails_init(UA_DeleteAtTimeDetails *p) {
    memset(p, 0, sizeof(UA_DeleteAtTimeDetails));
}

static UA_INLINE UA_DeleteAtTimeDetails *
UA_DeleteAtTimeDetails_new(void) {
    return (UA_DeleteAtTimeDetails*)UA_new(&UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_DeleteAtTimeDetails_copy(const UA_DeleteAtTimeDetails *src, UA_DeleteAtTimeDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteAtTimeDetails_deleteMembers(UA_DeleteAtTimeDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}

static UA_INLINE void
UA_DeleteAtTimeDetails_clear(UA_DeleteAtTimeDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}

static UA_INLINE void
UA_DeleteAtTimeDetails_delete(UA_DeleteAtTimeDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEATTIMEDETAILS]);
}

/* DeleteEventDetails */
static UA_INLINE void
UA_DeleteEventDetails_init(UA_DeleteEventDetails *p) {
    memset(p, 0, sizeof(UA_DeleteEventDetails));
}

static UA_INLINE UA_DeleteEventDetails *
UA_DeleteEventDetails_new(void) {
    return (UA_DeleteEventDetails*)UA_new(&UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_DeleteEventDetails_copy(const UA_DeleteEventDetails *src, UA_DeleteEventDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteEventDetails_deleteMembers(UA_DeleteEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}

static UA_INLINE void
UA_DeleteEventDetails_clear(UA_DeleteEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}

static UA_INLINE void
UA_DeleteEventDetails_delete(UA_DeleteEventDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEEVENTDETAILS]);
}

/* HistoryUpdateResult */
static UA_INLINE void
UA_HistoryUpdateResult_init(UA_HistoryUpdateResult *p) {
    memset(p, 0, sizeof(UA_HistoryUpdateResult));
}

static UA_INLINE UA_HistoryUpdateResult *
UA_HistoryUpdateResult_new(void) {
    return (UA_HistoryUpdateResult*)UA_new(&UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}

static UA_INLINE UA_StatusCode
UA_HistoryUpdateResult_copy(const UA_HistoryUpdateResult *src, UA_HistoryUpdateResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryUpdateResult_deleteMembers(UA_HistoryUpdateResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}

static UA_INLINE void
UA_HistoryUpdateResult_clear(UA_HistoryUpdateResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}

static UA_INLINE void
UA_HistoryUpdateResult_delete(UA_HistoryUpdateResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESULT]);
}

/* HistoryUpdateRequest */
static UA_INLINE void
UA_HistoryUpdateRequest_init(UA_HistoryUpdateRequest *p) {
    memset(p, 0, sizeof(UA_HistoryUpdateRequest));
}

static UA_INLINE UA_HistoryUpdateRequest *
UA_HistoryUpdateRequest_new(void) {
    return (UA_HistoryUpdateRequest*)UA_new(&UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_HistoryUpdateRequest_copy(const UA_HistoryUpdateRequest *src, UA_HistoryUpdateRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryUpdateRequest_deleteMembers(UA_HistoryUpdateRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}

static UA_INLINE void
UA_HistoryUpdateRequest_clear(UA_HistoryUpdateRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}

static UA_INLINE void
UA_HistoryUpdateRequest_delete(UA_HistoryUpdateRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYUPDATEREQUEST]);
}

/* HistoryUpdateResponse */
static UA_INLINE void
UA_HistoryUpdateResponse_init(UA_HistoryUpdateResponse *p) {
    memset(p, 0, sizeof(UA_HistoryUpdateResponse));
}

static UA_INLINE UA_HistoryUpdateResponse *
UA_HistoryUpdateResponse_new(void) {
    return (UA_HistoryUpdateResponse*)UA_new(&UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_HistoryUpdateResponse_copy(const UA_HistoryUpdateResponse *src, UA_HistoryUpdateResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryUpdateResponse_deleteMembers(UA_HistoryUpdateResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}

static UA_INLINE void
UA_HistoryUpdateResponse_clear(UA_HistoryUpdateResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}

static UA_INLINE void
UA_HistoryUpdateResponse_delete(UA_HistoryUpdateResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYUPDATERESPONSE]);
}

/* CallMethodRequest */
static UA_INLINE void
UA_CallMethodRequest_init(UA_CallMethodRequest *p) {
    memset(p, 0, sizeof(UA_CallMethodRequest));
}

static UA_INLINE UA_CallMethodRequest *
UA_CallMethodRequest_new(void) {
    return (UA_CallMethodRequest*)UA_new(&UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CallMethodRequest_copy(const UA_CallMethodRequest *src, UA_CallMethodRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CallMethodRequest_deleteMembers(UA_CallMethodRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}

static UA_INLINE void
UA_CallMethodRequest_clear(UA_CallMethodRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}

static UA_INLINE void
UA_CallMethodRequest_delete(UA_CallMethodRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]);
}

/* CallMethodResult */
static UA_INLINE void
UA_CallMethodResult_init(UA_CallMethodResult *p) {
    memset(p, 0, sizeof(UA_CallMethodResult));
}

static UA_INLINE UA_CallMethodResult *
UA_CallMethodResult_new(void) {
    return (UA_CallMethodResult*)UA_new(&UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}

static UA_INLINE UA_StatusCode
UA_CallMethodResult_copy(const UA_CallMethodResult *src, UA_CallMethodResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_CallMethodResult_deleteMembers(UA_CallMethodResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}

static UA_INLINE void
UA_CallMethodResult_clear(UA_CallMethodResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}

static UA_INLINE void
UA_CallMethodResult_delete(UA_CallMethodResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]);
}

/* CallRequest */
static UA_INLINE void
UA_CallRequest_init(UA_CallRequest *p) {
    memset(p, 0, sizeof(UA_CallRequest));
}

static UA_INLINE UA_CallRequest *
UA_CallRequest_new(void) {
    return (UA_CallRequest*)UA_new(&UA_TYPES[UA_TYPES_CALLREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CallRequest_copy(const UA_CallRequest *src, UA_CallRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CallRequest_deleteMembers(UA_CallRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLREQUEST]);
}

static UA_INLINE void
UA_CallRequest_clear(UA_CallRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLREQUEST]);
}

static UA_INLINE void
UA_CallRequest_delete(UA_CallRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CALLREQUEST]);
}

/* CallResponse */
static UA_INLINE void
UA_CallResponse_init(UA_CallResponse *p) {
    memset(p, 0, sizeof(UA_CallResponse));
}

static UA_INLINE UA_CallResponse *
UA_CallResponse_new(void) {
    return (UA_CallResponse*)UA_new(&UA_TYPES[UA_TYPES_CALLRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CallResponse_copy(const UA_CallResponse *src, UA_CallResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CallResponse_deleteMembers(UA_CallResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLRESPONSE]);
}

static UA_INLINE void
UA_CallResponse_clear(UA_CallResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CALLRESPONSE]);
}

static UA_INLINE void
UA_CallResponse_delete(UA_CallResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CALLRESPONSE]);
}

/* MonitoringMode */
static UA_INLINE void
UA_MonitoringMode_init(UA_MonitoringMode *p) {
    memset(p, 0, sizeof(UA_MonitoringMode));
}

static UA_INLINE UA_MonitoringMode *
UA_MonitoringMode_new(void) {
    return (UA_MonitoringMode*)UA_new(&UA_TYPES[UA_TYPES_MONITORINGMODE]);
}

static UA_INLINE UA_StatusCode
UA_MonitoringMode_copy(const UA_MonitoringMode *src, UA_MonitoringMode *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITORINGMODE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoringMode_deleteMembers(UA_MonitoringMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGMODE]);
}

static UA_INLINE void
UA_MonitoringMode_clear(UA_MonitoringMode *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGMODE]);
}

static UA_INLINE void
UA_MonitoringMode_delete(UA_MonitoringMode *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGMODE]);
}

/* DataChangeTrigger */
static UA_INLINE void
UA_DataChangeTrigger_init(UA_DataChangeTrigger *p) {
    memset(p, 0, sizeof(UA_DataChangeTrigger));
}

static UA_INLINE UA_DataChangeTrigger *
UA_DataChangeTrigger_new(void) {
    return (UA_DataChangeTrigger*)UA_new(&UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}

static UA_INLINE UA_StatusCode
UA_DataChangeTrigger_copy(const UA_DataChangeTrigger *src, UA_DataChangeTrigger *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataChangeTrigger_deleteMembers(UA_DataChangeTrigger *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}

static UA_INLINE void
UA_DataChangeTrigger_clear(UA_DataChangeTrigger *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}

static UA_INLINE void
UA_DataChangeTrigger_delete(UA_DataChangeTrigger *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATACHANGETRIGGER]);
}

/* DeadbandType */
static UA_INLINE void
UA_DeadbandType_init(UA_DeadbandType *p) {
    memset(p, 0, sizeof(UA_DeadbandType));
}

static UA_INLINE UA_DeadbandType *
UA_DeadbandType_new(void) {
    return (UA_DeadbandType*)UA_new(&UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}

static UA_INLINE UA_StatusCode
UA_DeadbandType_copy(const UA_DeadbandType *src, UA_DeadbandType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeadbandType_deleteMembers(UA_DeadbandType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}

static UA_INLINE void
UA_DeadbandType_clear(UA_DeadbandType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}

static UA_INLINE void
UA_DeadbandType_delete(UA_DeadbandType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DEADBANDTYPE]);
}

/* MonitoringFilter */
static UA_INLINE void
UA_MonitoringFilter_init(UA_MonitoringFilter *p) {
    memset(p, 0, sizeof(UA_MonitoringFilter));
}

static UA_INLINE UA_MonitoringFilter *
UA_MonitoringFilter_new(void) {
    return (UA_MonitoringFilter*)UA_new(&UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}

static UA_INLINE UA_StatusCode
UA_MonitoringFilter_copy(const UA_MonitoringFilter *src, UA_MonitoringFilter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoringFilter_deleteMembers(UA_MonitoringFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}

static UA_INLINE void
UA_MonitoringFilter_clear(UA_MonitoringFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}

static UA_INLINE void
UA_MonitoringFilter_delete(UA_MonitoringFilter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGFILTER]);
}

/* DataChangeFilter */
static UA_INLINE void
UA_DataChangeFilter_init(UA_DataChangeFilter *p) {
    memset(p, 0, sizeof(UA_DataChangeFilter));
}

static UA_INLINE UA_DataChangeFilter *
UA_DataChangeFilter_new(void) {
    return (UA_DataChangeFilter*)UA_new(&UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}

static UA_INLINE UA_StatusCode
UA_DataChangeFilter_copy(const UA_DataChangeFilter *src, UA_DataChangeFilter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataChangeFilter_deleteMembers(UA_DataChangeFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}

static UA_INLINE void
UA_DataChangeFilter_clear(UA_DataChangeFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}

static UA_INLINE void
UA_DataChangeFilter_delete(UA_DataChangeFilter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATACHANGEFILTER]);
}

/* EventFilter */
static UA_INLINE void
UA_EventFilter_init(UA_EventFilter *p) {
    memset(p, 0, sizeof(UA_EventFilter));
}

static UA_INLINE UA_EventFilter *
UA_EventFilter_new(void) {
    return (UA_EventFilter*)UA_new(&UA_TYPES[UA_TYPES_EVENTFILTER]);
}

static UA_INLINE UA_StatusCode
UA_EventFilter_copy(const UA_EventFilter *src, UA_EventFilter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EVENTFILTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_EventFilter_deleteMembers(UA_EventFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFILTER]);
}

static UA_INLINE void
UA_EventFilter_clear(UA_EventFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFILTER]);
}

static UA_INLINE void
UA_EventFilter_delete(UA_EventFilter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EVENTFILTER]);
}

/* AggregateConfiguration */
static UA_INLINE void
UA_AggregateConfiguration_init(UA_AggregateConfiguration *p) {
    memset(p, 0, sizeof(UA_AggregateConfiguration));
}

static UA_INLINE UA_AggregateConfiguration *
UA_AggregateConfiguration_new(void) {
    return (UA_AggregateConfiguration*)UA_new(&UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}

static UA_INLINE UA_StatusCode
UA_AggregateConfiguration_copy(const UA_AggregateConfiguration *src, UA_AggregateConfiguration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_AggregateConfiguration_deleteMembers(UA_AggregateConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}

static UA_INLINE void
UA_AggregateConfiguration_clear(UA_AggregateConfiguration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}

static UA_INLINE void
UA_AggregateConfiguration_delete(UA_AggregateConfiguration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AGGREGATECONFIGURATION]);
}

/* AggregateFilter */
static UA_INLINE void
UA_AggregateFilter_init(UA_AggregateFilter *p) {
    memset(p, 0, sizeof(UA_AggregateFilter));
}

static UA_INLINE UA_AggregateFilter *
UA_AggregateFilter_new(void) {
    return (UA_AggregateFilter*)UA_new(&UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}

static UA_INLINE UA_StatusCode
UA_AggregateFilter_copy(const UA_AggregateFilter *src, UA_AggregateFilter *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}

UA_DEPRECATED static UA_INLINE void
UA_AggregateFilter_deleteMembers(UA_AggregateFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}

static UA_INLINE void
UA_AggregateFilter_clear(UA_AggregateFilter *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}

static UA_INLINE void
UA_AggregateFilter_delete(UA_AggregateFilter *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTER]);
}

/* MonitoringFilterResult */
static UA_INLINE void
UA_MonitoringFilterResult_init(UA_MonitoringFilterResult *p) {
    memset(p, 0, sizeof(UA_MonitoringFilterResult));
}

static UA_INLINE UA_MonitoringFilterResult *
UA_MonitoringFilterResult_new(void) {
    return (UA_MonitoringFilterResult*)UA_new(&UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}

static UA_INLINE UA_StatusCode
UA_MonitoringFilterResult_copy(const UA_MonitoringFilterResult *src, UA_MonitoringFilterResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoringFilterResult_deleteMembers(UA_MonitoringFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}

static UA_INLINE void
UA_MonitoringFilterResult_clear(UA_MonitoringFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}

static UA_INLINE void
UA_MonitoringFilterResult_delete(UA_MonitoringFilterResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGFILTERRESULT]);
}

/* EventFilterResult */
static UA_INLINE void
UA_EventFilterResult_init(UA_EventFilterResult *p) {
    memset(p, 0, sizeof(UA_EventFilterResult));
}

static UA_INLINE UA_EventFilterResult *
UA_EventFilterResult_new(void) {
    return (UA_EventFilterResult*)UA_new(&UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}

static UA_INLINE UA_StatusCode
UA_EventFilterResult_copy(const UA_EventFilterResult *src, UA_EventFilterResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_EventFilterResult_deleteMembers(UA_EventFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}

static UA_INLINE void
UA_EventFilterResult_clear(UA_EventFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}

static UA_INLINE void
UA_EventFilterResult_delete(UA_EventFilterResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EVENTFILTERRESULT]);
}

/* AggregateFilterResult */
static UA_INLINE void
UA_AggregateFilterResult_init(UA_AggregateFilterResult *p) {
    memset(p, 0, sizeof(UA_AggregateFilterResult));
}

static UA_INLINE UA_AggregateFilterResult *
UA_AggregateFilterResult_new(void) {
    return (UA_AggregateFilterResult*)UA_new(&UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}

static UA_INLINE UA_StatusCode
UA_AggregateFilterResult_copy(const UA_AggregateFilterResult *src, UA_AggregateFilterResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_AggregateFilterResult_deleteMembers(UA_AggregateFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}

static UA_INLINE void
UA_AggregateFilterResult_clear(UA_AggregateFilterResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}

static UA_INLINE void
UA_AggregateFilterResult_delete(UA_AggregateFilterResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AGGREGATEFILTERRESULT]);
}

/* MonitoringParameters */
static UA_INLINE void
UA_MonitoringParameters_init(UA_MonitoringParameters *p) {
    memset(p, 0, sizeof(UA_MonitoringParameters));
}

static UA_INLINE UA_MonitoringParameters *
UA_MonitoringParameters_new(void) {
    return (UA_MonitoringParameters*)UA_new(&UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}

static UA_INLINE UA_StatusCode
UA_MonitoringParameters_copy(const UA_MonitoringParameters *src, UA_MonitoringParameters *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoringParameters_deleteMembers(UA_MonitoringParameters *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}

static UA_INLINE void
UA_MonitoringParameters_clear(UA_MonitoringParameters *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}

static UA_INLINE void
UA_MonitoringParameters_delete(UA_MonitoringParameters *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]);
}

/* MonitoredItemCreateRequest */
static UA_INLINE void
UA_MonitoredItemCreateRequest_init(UA_MonitoredItemCreateRequest *p) {
    memset(p, 0, sizeof(UA_MonitoredItemCreateRequest));
}

static UA_INLINE UA_MonitoredItemCreateRequest *
UA_MonitoredItemCreateRequest_new(void) {
    return (UA_MonitoredItemCreateRequest*)UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateRequest_copy(const UA_MonitoredItemCreateRequest *src, UA_MonitoredItemCreateRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoredItemCreateRequest_deleteMembers(UA_MonitoredItemCreateRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}

static UA_INLINE void
UA_MonitoredItemCreateRequest_clear(UA_MonitoredItemCreateRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}

static UA_INLINE void
UA_MonitoredItemCreateRequest_delete(UA_MonitoredItemCreateRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]);
}

/* MonitoredItemCreateResult */
static UA_INLINE void
UA_MonitoredItemCreateResult_init(UA_MonitoredItemCreateResult *p) {
    memset(p, 0, sizeof(UA_MonitoredItemCreateResult));
}

static UA_INLINE UA_MonitoredItemCreateResult *
UA_MonitoredItemCreateResult_new(void) {
    return (UA_MonitoredItemCreateResult*)UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}

static UA_INLINE UA_StatusCode
UA_MonitoredItemCreateResult_copy(const UA_MonitoredItemCreateResult *src, UA_MonitoredItemCreateResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoredItemCreateResult_deleteMembers(UA_MonitoredItemCreateResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}

static UA_INLINE void
UA_MonitoredItemCreateResult_clear(UA_MonitoredItemCreateResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}

static UA_INLINE void
UA_MonitoredItemCreateResult_delete(UA_MonitoredItemCreateResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]);
}

/* CreateMonitoredItemsRequest */
static UA_INLINE void
UA_CreateMonitoredItemsRequest_init(UA_CreateMonitoredItemsRequest *p) {
    memset(p, 0, sizeof(UA_CreateMonitoredItemsRequest));
}

static UA_INLINE UA_CreateMonitoredItemsRequest *
UA_CreateMonitoredItemsRequest_new(void) {
    return (UA_CreateMonitoredItemsRequest*)UA_new(&UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsRequest_copy(const UA_CreateMonitoredItemsRequest *src, UA_CreateMonitoredItemsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateMonitoredItemsRequest_deleteMembers(UA_CreateMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_CreateMonitoredItemsRequest_clear(UA_CreateMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_CreateMonitoredItemsRequest_delete(UA_CreateMonitoredItemsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]);
}

/* CreateMonitoredItemsResponse */
static UA_INLINE void
UA_CreateMonitoredItemsResponse_init(UA_CreateMonitoredItemsResponse *p) {
    memset(p, 0, sizeof(UA_CreateMonitoredItemsResponse));
}

static UA_INLINE UA_CreateMonitoredItemsResponse *
UA_CreateMonitoredItemsResponse_new(void) {
    return (UA_CreateMonitoredItemsResponse*)UA_new(&UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CreateMonitoredItemsResponse_copy(const UA_CreateMonitoredItemsResponse *src, UA_CreateMonitoredItemsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateMonitoredItemsResponse_deleteMembers(UA_CreateMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_CreateMonitoredItemsResponse_clear(UA_CreateMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_CreateMonitoredItemsResponse_delete(UA_CreateMonitoredItemsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]);
}

/* MonitoredItemModifyRequest */
static UA_INLINE void
UA_MonitoredItemModifyRequest_init(UA_MonitoredItemModifyRequest *p) {
    memset(p, 0, sizeof(UA_MonitoredItemModifyRequest));
}

static UA_INLINE UA_MonitoredItemModifyRequest *
UA_MonitoredItemModifyRequest_new(void) {
    return (UA_MonitoredItemModifyRequest*)UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyRequest_copy(const UA_MonitoredItemModifyRequest *src, UA_MonitoredItemModifyRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoredItemModifyRequest_deleteMembers(UA_MonitoredItemModifyRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}

static UA_INLINE void
UA_MonitoredItemModifyRequest_clear(UA_MonitoredItemModifyRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}

static UA_INLINE void
UA_MonitoredItemModifyRequest_delete(UA_MonitoredItemModifyRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYREQUEST]);
}

/* MonitoredItemModifyResult */
static UA_INLINE void
UA_MonitoredItemModifyResult_init(UA_MonitoredItemModifyResult *p) {
    memset(p, 0, sizeof(UA_MonitoredItemModifyResult));
}

static UA_INLINE UA_MonitoredItemModifyResult *
UA_MonitoredItemModifyResult_new(void) {
    return (UA_MonitoredItemModifyResult*)UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}

static UA_INLINE UA_StatusCode
UA_MonitoredItemModifyResult_copy(const UA_MonitoredItemModifyResult *src, UA_MonitoredItemModifyResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoredItemModifyResult_deleteMembers(UA_MonitoredItemModifyResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}

static UA_INLINE void
UA_MonitoredItemModifyResult_clear(UA_MonitoredItemModifyResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}

static UA_INLINE void
UA_MonitoredItemModifyResult_delete(UA_MonitoredItemModifyResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMMODIFYRESULT]);
}

/* ModifyMonitoredItemsRequest */
static UA_INLINE void
UA_ModifyMonitoredItemsRequest_init(UA_ModifyMonitoredItemsRequest *p) {
    memset(p, 0, sizeof(UA_ModifyMonitoredItemsRequest));
}

static UA_INLINE UA_ModifyMonitoredItemsRequest *
UA_ModifyMonitoredItemsRequest_new(void) {
    return (UA_ModifyMonitoredItemsRequest*)UA_new(&UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsRequest_copy(const UA_ModifyMonitoredItemsRequest *src, UA_ModifyMonitoredItemsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModifyMonitoredItemsRequest_deleteMembers(UA_ModifyMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_ModifyMonitoredItemsRequest_clear(UA_ModifyMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_ModifyMonitoredItemsRequest_delete(UA_ModifyMonitoredItemsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSREQUEST]);
}

/* ModifyMonitoredItemsResponse */
static UA_INLINE void
UA_ModifyMonitoredItemsResponse_init(UA_ModifyMonitoredItemsResponse *p) {
    memset(p, 0, sizeof(UA_ModifyMonitoredItemsResponse));
}

static UA_INLINE UA_ModifyMonitoredItemsResponse *
UA_ModifyMonitoredItemsResponse_new(void) {
    return (UA_ModifyMonitoredItemsResponse*)UA_new(&UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_ModifyMonitoredItemsResponse_copy(const UA_ModifyMonitoredItemsResponse *src, UA_ModifyMonitoredItemsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModifyMonitoredItemsResponse_deleteMembers(UA_ModifyMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_ModifyMonitoredItemsResponse_clear(UA_ModifyMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_ModifyMonitoredItemsResponse_delete(UA_ModifyMonitoredItemsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYMONITOREDITEMSRESPONSE]);
}

/* SetMonitoringModeRequest */
static UA_INLINE void
UA_SetMonitoringModeRequest_init(UA_SetMonitoringModeRequest *p) {
    memset(p, 0, sizeof(UA_SetMonitoringModeRequest));
}

static UA_INLINE UA_SetMonitoringModeRequest *
UA_SetMonitoringModeRequest_new(void) {
    return (UA_SetMonitoringModeRequest*)UA_new(&UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_SetMonitoringModeRequest_copy(const UA_SetMonitoringModeRequest *src, UA_SetMonitoringModeRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMonitoringModeRequest_deleteMembers(UA_SetMonitoringModeRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}

static UA_INLINE void
UA_SetMonitoringModeRequest_clear(UA_SetMonitoringModeRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}

static UA_INLINE void
UA_SetMonitoringModeRequest_delete(UA_SetMonitoringModeRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODEREQUEST]);
}

/* SetMonitoringModeResponse */
static UA_INLINE void
UA_SetMonitoringModeResponse_init(UA_SetMonitoringModeResponse *p) {
    memset(p, 0, sizeof(UA_SetMonitoringModeResponse));
}

static UA_INLINE UA_SetMonitoringModeResponse *
UA_SetMonitoringModeResponse_new(void) {
    return (UA_SetMonitoringModeResponse*)UA_new(&UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_SetMonitoringModeResponse_copy(const UA_SetMonitoringModeResponse *src, UA_SetMonitoringModeResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMonitoringModeResponse_deleteMembers(UA_SetMonitoringModeResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}

static UA_INLINE void
UA_SetMonitoringModeResponse_clear(UA_SetMonitoringModeResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}

static UA_INLINE void
UA_SetMonitoringModeResponse_delete(UA_SetMonitoringModeResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETMONITORINGMODERESPONSE]);
}

/* SetTriggeringRequest */
static UA_INLINE void
UA_SetTriggeringRequest_init(UA_SetTriggeringRequest *p) {
    memset(p, 0, sizeof(UA_SetTriggeringRequest));
}

static UA_INLINE UA_SetTriggeringRequest *
UA_SetTriggeringRequest_new(void) {
    return (UA_SetTriggeringRequest*)UA_new(&UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_SetTriggeringRequest_copy(const UA_SetTriggeringRequest *src, UA_SetTriggeringRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTriggeringRequest_deleteMembers(UA_SetTriggeringRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}

static UA_INLINE void
UA_SetTriggeringRequest_clear(UA_SetTriggeringRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}

static UA_INLINE void
UA_SetTriggeringRequest_delete(UA_SetTriggeringRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGREQUEST]);
}

/* SetTriggeringResponse */
static UA_INLINE void
UA_SetTriggeringResponse_init(UA_SetTriggeringResponse *p) {
    memset(p, 0, sizeof(UA_SetTriggeringResponse));
}

static UA_INLINE UA_SetTriggeringResponse *
UA_SetTriggeringResponse_new(void) {
    return (UA_SetTriggeringResponse*)UA_new(&UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_SetTriggeringResponse_copy(const UA_SetTriggeringResponse *src, UA_SetTriggeringResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTriggeringResponse_deleteMembers(UA_SetTriggeringResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}

static UA_INLINE void
UA_SetTriggeringResponse_clear(UA_SetTriggeringResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}

static UA_INLINE void
UA_SetTriggeringResponse_delete(UA_SetTriggeringResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETTRIGGERINGRESPONSE]);
}

/* DeleteMonitoredItemsRequest */
static UA_INLINE void
UA_DeleteMonitoredItemsRequest_init(UA_DeleteMonitoredItemsRequest *p) {
    memset(p, 0, sizeof(UA_DeleteMonitoredItemsRequest));
}

static UA_INLINE UA_DeleteMonitoredItemsRequest *
UA_DeleteMonitoredItemsRequest_new(void) {
    return (UA_DeleteMonitoredItemsRequest*)UA_new(&UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsRequest_copy(const UA_DeleteMonitoredItemsRequest *src, UA_DeleteMonitoredItemsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteMonitoredItemsRequest_deleteMembers(UA_DeleteMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_DeleteMonitoredItemsRequest_clear(UA_DeleteMonitoredItemsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}

static UA_INLINE void
UA_DeleteMonitoredItemsRequest_delete(UA_DeleteMonitoredItemsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]);
}

/* DeleteMonitoredItemsResponse */
static UA_INLINE void
UA_DeleteMonitoredItemsResponse_init(UA_DeleteMonitoredItemsResponse *p) {
    memset(p, 0, sizeof(UA_DeleteMonitoredItemsResponse));
}

static UA_INLINE UA_DeleteMonitoredItemsResponse *
UA_DeleteMonitoredItemsResponse_new(void) {
    return (UA_DeleteMonitoredItemsResponse*)UA_new(&UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_DeleteMonitoredItemsResponse_copy(const UA_DeleteMonitoredItemsResponse *src, UA_DeleteMonitoredItemsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteMonitoredItemsResponse_deleteMembers(UA_DeleteMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_DeleteMonitoredItemsResponse_clear(UA_DeleteMonitoredItemsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}

static UA_INLINE void
UA_DeleteMonitoredItemsResponse_delete(UA_DeleteMonitoredItemsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]);
}

/* CreateSubscriptionRequest */
static UA_INLINE void
UA_CreateSubscriptionRequest_init(UA_CreateSubscriptionRequest *p) {
    memset(p, 0, sizeof(UA_CreateSubscriptionRequest));
}

static UA_INLINE UA_CreateSubscriptionRequest *
UA_CreateSubscriptionRequest_new(void) {
    return (UA_CreateSubscriptionRequest*)UA_new(&UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_CreateSubscriptionRequest_copy(const UA_CreateSubscriptionRequest *src, UA_CreateSubscriptionRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateSubscriptionRequest_deleteMembers(UA_CreateSubscriptionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}

static UA_INLINE void
UA_CreateSubscriptionRequest_clear(UA_CreateSubscriptionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}

static UA_INLINE void
UA_CreateSubscriptionRequest_delete(UA_CreateSubscriptionRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]);
}

/* CreateSubscriptionResponse */
static UA_INLINE void
UA_CreateSubscriptionResponse_init(UA_CreateSubscriptionResponse *p) {
    memset(p, 0, sizeof(UA_CreateSubscriptionResponse));
}

static UA_INLINE UA_CreateSubscriptionResponse *
UA_CreateSubscriptionResponse_new(void) {
    return (UA_CreateSubscriptionResponse*)UA_new(&UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_CreateSubscriptionResponse_copy(const UA_CreateSubscriptionResponse *src, UA_CreateSubscriptionResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CreateSubscriptionResponse_deleteMembers(UA_CreateSubscriptionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}

static UA_INLINE void
UA_CreateSubscriptionResponse_clear(UA_CreateSubscriptionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}

static UA_INLINE void
UA_CreateSubscriptionResponse_delete(UA_CreateSubscriptionResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]);
}

/* ModifySubscriptionRequest */
static UA_INLINE void
UA_ModifySubscriptionRequest_init(UA_ModifySubscriptionRequest *p) {
    memset(p, 0, sizeof(UA_ModifySubscriptionRequest));
}

static UA_INLINE UA_ModifySubscriptionRequest *
UA_ModifySubscriptionRequest_new(void) {
    return (UA_ModifySubscriptionRequest*)UA_new(&UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_ModifySubscriptionRequest_copy(const UA_ModifySubscriptionRequest *src, UA_ModifySubscriptionRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModifySubscriptionRequest_deleteMembers(UA_ModifySubscriptionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}

static UA_INLINE void
UA_ModifySubscriptionRequest_clear(UA_ModifySubscriptionRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}

static UA_INLINE void
UA_ModifySubscriptionRequest_delete(UA_ModifySubscriptionRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]);
}

/* ModifySubscriptionResponse */
static UA_INLINE void
UA_ModifySubscriptionResponse_init(UA_ModifySubscriptionResponse *p) {
    memset(p, 0, sizeof(UA_ModifySubscriptionResponse));
}

static UA_INLINE UA_ModifySubscriptionResponse *
UA_ModifySubscriptionResponse_new(void) {
    return (UA_ModifySubscriptionResponse*)UA_new(&UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_ModifySubscriptionResponse_copy(const UA_ModifySubscriptionResponse *src, UA_ModifySubscriptionResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModifySubscriptionResponse_deleteMembers(UA_ModifySubscriptionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}

static UA_INLINE void
UA_ModifySubscriptionResponse_clear(UA_ModifySubscriptionResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}

static UA_INLINE void
UA_ModifySubscriptionResponse_delete(UA_ModifySubscriptionResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]);
}

/* SetPublishingModeRequest */
static UA_INLINE void
UA_SetPublishingModeRequest_init(UA_SetPublishingModeRequest *p) {
    memset(p, 0, sizeof(UA_SetPublishingModeRequest));
}

static UA_INLINE UA_SetPublishingModeRequest *
UA_SetPublishingModeRequest_new(void) {
    return (UA_SetPublishingModeRequest*)UA_new(&UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_SetPublishingModeRequest_copy(const UA_SetPublishingModeRequest *src, UA_SetPublishingModeRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetPublishingModeRequest_deleteMembers(UA_SetPublishingModeRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}

static UA_INLINE void
UA_SetPublishingModeRequest_clear(UA_SetPublishingModeRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}

static UA_INLINE void
UA_SetPublishingModeRequest_delete(UA_SetPublishingModeRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]);
}

/* SetPublishingModeResponse */
static UA_INLINE void
UA_SetPublishingModeResponse_init(UA_SetPublishingModeResponse *p) {
    memset(p, 0, sizeof(UA_SetPublishingModeResponse));
}

static UA_INLINE UA_SetPublishingModeResponse *
UA_SetPublishingModeResponse_new(void) {
    return (UA_SetPublishingModeResponse*)UA_new(&UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_SetPublishingModeResponse_copy(const UA_SetPublishingModeResponse *src, UA_SetPublishingModeResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetPublishingModeResponse_deleteMembers(UA_SetPublishingModeResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}

static UA_INLINE void
UA_SetPublishingModeResponse_clear(UA_SetPublishingModeResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}

static UA_INLINE void
UA_SetPublishingModeResponse_delete(UA_SetPublishingModeResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]);
}

/* NotificationMessage */
static UA_INLINE void
UA_NotificationMessage_init(UA_NotificationMessage *p) {
    memset(p, 0, sizeof(UA_NotificationMessage));
}

static UA_INLINE UA_NotificationMessage *
UA_NotificationMessage_new(void) {
    return (UA_NotificationMessage*)UA_new(&UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}

static UA_INLINE UA_StatusCode
UA_NotificationMessage_copy(const UA_NotificationMessage *src, UA_NotificationMessage *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NotificationMessage_deleteMembers(UA_NotificationMessage *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}

static UA_INLINE void
UA_NotificationMessage_clear(UA_NotificationMessage *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}

static UA_INLINE void
UA_NotificationMessage_delete(UA_NotificationMessage *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]);
}

/* NotificationData */
static UA_INLINE void
UA_NotificationData_init(UA_NotificationData *p) {
    memset(p, 0, sizeof(UA_NotificationData));
}

static UA_INLINE UA_NotificationData *
UA_NotificationData_new(void) {
    return (UA_NotificationData*)UA_new(&UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}

static UA_INLINE UA_StatusCode
UA_NotificationData_copy(const UA_NotificationData *src, UA_NotificationData *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}

UA_DEPRECATED static UA_INLINE void
UA_NotificationData_deleteMembers(UA_NotificationData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}

static UA_INLINE void
UA_NotificationData_clear(UA_NotificationData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}

static UA_INLINE void
UA_NotificationData_delete(UA_NotificationData *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NOTIFICATIONDATA]);
}

/* MonitoredItemNotification */
static UA_INLINE void
UA_MonitoredItemNotification_init(UA_MonitoredItemNotification *p) {
    memset(p, 0, sizeof(UA_MonitoredItemNotification));
}

static UA_INLINE UA_MonitoredItemNotification *
UA_MonitoredItemNotification_new(void) {
    return (UA_MonitoredItemNotification*)UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}

static UA_INLINE UA_StatusCode
UA_MonitoredItemNotification_copy(const UA_MonitoredItemNotification *src, UA_MonitoredItemNotification *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_MonitoredItemNotification_deleteMembers(UA_MonitoredItemNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}

static UA_INLINE void
UA_MonitoredItemNotification_clear(UA_MonitoredItemNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}

static UA_INLINE void
UA_MonitoredItemNotification_delete(UA_MonitoredItemNotification *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]);
}

/* EventFieldList */
static UA_INLINE void
UA_EventFieldList_init(UA_EventFieldList *p) {
    memset(p, 0, sizeof(UA_EventFieldList));
}

static UA_INLINE UA_EventFieldList *
UA_EventFieldList_new(void) {
    return (UA_EventFieldList*)UA_new(&UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}

static UA_INLINE UA_StatusCode
UA_EventFieldList_copy(const UA_EventFieldList *src, UA_EventFieldList *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}

UA_DEPRECATED static UA_INLINE void
UA_EventFieldList_deleteMembers(UA_EventFieldList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}

static UA_INLINE void
UA_EventFieldList_clear(UA_EventFieldList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}

static UA_INLINE void
UA_EventFieldList_delete(UA_EventFieldList *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EVENTFIELDLIST]);
}

/* HistoryEventFieldList */
static UA_INLINE void
UA_HistoryEventFieldList_init(UA_HistoryEventFieldList *p) {
    memset(p, 0, sizeof(UA_HistoryEventFieldList));
}

static UA_INLINE UA_HistoryEventFieldList *
UA_HistoryEventFieldList_new(void) {
    return (UA_HistoryEventFieldList*)UA_new(&UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}

static UA_INLINE UA_StatusCode
UA_HistoryEventFieldList_copy(const UA_HistoryEventFieldList *src, UA_HistoryEventFieldList *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryEventFieldList_deleteMembers(UA_HistoryEventFieldList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}

static UA_INLINE void
UA_HistoryEventFieldList_clear(UA_HistoryEventFieldList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}

static UA_INLINE void
UA_HistoryEventFieldList_delete(UA_HistoryEventFieldList *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYEVENTFIELDLIST]);
}

/* StatusChangeNotification */
static UA_INLINE void
UA_StatusChangeNotification_init(UA_StatusChangeNotification *p) {
    memset(p, 0, sizeof(UA_StatusChangeNotification));
}

static UA_INLINE UA_StatusChangeNotification *
UA_StatusChangeNotification_new(void) {
    return (UA_StatusChangeNotification*)UA_new(&UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}

static UA_INLINE UA_StatusCode
UA_StatusChangeNotification_copy(const UA_StatusChangeNotification *src, UA_StatusChangeNotification *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_StatusChangeNotification_deleteMembers(UA_StatusChangeNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}

static UA_INLINE void
UA_StatusChangeNotification_clear(UA_StatusChangeNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}

static UA_INLINE void
UA_StatusChangeNotification_delete(UA_StatusChangeNotification *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STATUSCHANGENOTIFICATION]);
}

/* SubscriptionAcknowledgement */
static UA_INLINE void
UA_SubscriptionAcknowledgement_init(UA_SubscriptionAcknowledgement *p) {
    memset(p, 0, sizeof(UA_SubscriptionAcknowledgement));
}

static UA_INLINE UA_SubscriptionAcknowledgement *
UA_SubscriptionAcknowledgement_new(void) {
    return (UA_SubscriptionAcknowledgement*)UA_new(&UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}

static UA_INLINE UA_StatusCode
UA_SubscriptionAcknowledgement_copy(const UA_SubscriptionAcknowledgement *src, UA_SubscriptionAcknowledgement *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_SubscriptionAcknowledgement_deleteMembers(UA_SubscriptionAcknowledgement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}

static UA_INLINE void
UA_SubscriptionAcknowledgement_clear(UA_SubscriptionAcknowledgement *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}

static UA_INLINE void
UA_SubscriptionAcknowledgement_delete(UA_SubscriptionAcknowledgement *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]);
}

/* PublishRequest */
static UA_INLINE void
UA_PublishRequest_init(UA_PublishRequest *p) {
    memset(p, 0, sizeof(UA_PublishRequest));
}

static UA_INLINE UA_PublishRequest *
UA_PublishRequest_new(void) {
    return (UA_PublishRequest*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_PublishRequest_copy(const UA_PublishRequest *src, UA_PublishRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishRequest_deleteMembers(UA_PublishRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}

static UA_INLINE void
UA_PublishRequest_clear(UA_PublishRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}

static UA_INLINE void
UA_PublishRequest_delete(UA_PublishRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]);
}

/* PublishResponse */
static UA_INLINE void
UA_PublishResponse_init(UA_PublishResponse *p) {
    memset(p, 0, sizeof(UA_PublishResponse));
}

static UA_INLINE UA_PublishResponse *
UA_PublishResponse_new(void) {
    return (UA_PublishResponse*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_PublishResponse_copy(const UA_PublishResponse *src, UA_PublishResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishResponse_deleteMembers(UA_PublishResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}

static UA_INLINE void
UA_PublishResponse_clear(UA_PublishResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}

static UA_INLINE void
UA_PublishResponse_delete(UA_PublishResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]);
}

/* RepublishRequest */
static UA_INLINE void
UA_RepublishRequest_init(UA_RepublishRequest *p) {
    memset(p, 0, sizeof(UA_RepublishRequest));
}

static UA_INLINE UA_RepublishRequest *
UA_RepublishRequest_new(void) {
    return (UA_RepublishRequest*)UA_new(&UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_RepublishRequest_copy(const UA_RepublishRequest *src, UA_RepublishRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_RepublishRequest_deleteMembers(UA_RepublishRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}

static UA_INLINE void
UA_RepublishRequest_clear(UA_RepublishRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}

static UA_INLINE void
UA_RepublishRequest_delete(UA_RepublishRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]);
}

/* RepublishResponse */
static UA_INLINE void
UA_RepublishResponse_init(UA_RepublishResponse *p) {
    memset(p, 0, sizeof(UA_RepublishResponse));
}

static UA_INLINE UA_RepublishResponse *
UA_RepublishResponse_new(void) {
    return (UA_RepublishResponse*)UA_new(&UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_RepublishResponse_copy(const UA_RepublishResponse *src, UA_RepublishResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RepublishResponse_deleteMembers(UA_RepublishResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}

static UA_INLINE void
UA_RepublishResponse_clear(UA_RepublishResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}

static UA_INLINE void
UA_RepublishResponse_delete(UA_RepublishResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]);
}

/* TransferResult */
static UA_INLINE void
UA_TransferResult_init(UA_TransferResult *p) {
    memset(p, 0, sizeof(UA_TransferResult));
}

static UA_INLINE UA_TransferResult *
UA_TransferResult_new(void) {
    return (UA_TransferResult*)UA_new(&UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}

static UA_INLINE UA_StatusCode
UA_TransferResult_copy(const UA_TransferResult *src, UA_TransferResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_TransferResult_deleteMembers(UA_TransferResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}

static UA_INLINE void
UA_TransferResult_clear(UA_TransferResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}

static UA_INLINE void
UA_TransferResult_delete(UA_TransferResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRANSFERRESULT]);
}

/* TransferSubscriptionsRequest */
static UA_INLINE void
UA_TransferSubscriptionsRequest_init(UA_TransferSubscriptionsRequest *p) {
    memset(p, 0, sizeof(UA_TransferSubscriptionsRequest));
}

static UA_INLINE UA_TransferSubscriptionsRequest *
UA_TransferSubscriptionsRequest_new(void) {
    return (UA_TransferSubscriptionsRequest*)UA_new(&UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsRequest_copy(const UA_TransferSubscriptionsRequest *src, UA_TransferSubscriptionsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_TransferSubscriptionsRequest_deleteMembers(UA_TransferSubscriptionsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}

static UA_INLINE void
UA_TransferSubscriptionsRequest_clear(UA_TransferSubscriptionsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}

static UA_INLINE void
UA_TransferSubscriptionsRequest_delete(UA_TransferSubscriptionsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSREQUEST]);
}

/* TransferSubscriptionsResponse */
static UA_INLINE void
UA_TransferSubscriptionsResponse_init(UA_TransferSubscriptionsResponse *p) {
    memset(p, 0, sizeof(UA_TransferSubscriptionsResponse));
}

static UA_INLINE UA_TransferSubscriptionsResponse *
UA_TransferSubscriptionsResponse_new(void) {
    return (UA_TransferSubscriptionsResponse*)UA_new(&UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_TransferSubscriptionsResponse_copy(const UA_TransferSubscriptionsResponse *src, UA_TransferSubscriptionsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TransferSubscriptionsResponse_deleteMembers(UA_TransferSubscriptionsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE void
UA_TransferSubscriptionsResponse_clear(UA_TransferSubscriptionsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE void
UA_TransferSubscriptionsResponse_delete(UA_TransferSubscriptionsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TRANSFERSUBSCRIPTIONSRESPONSE]);
}

/* DeleteSubscriptionsRequest */
static UA_INLINE void
UA_DeleteSubscriptionsRequest_init(UA_DeleteSubscriptionsRequest *p) {
    memset(p, 0, sizeof(UA_DeleteSubscriptionsRequest));
}

static UA_INLINE UA_DeleteSubscriptionsRequest *
UA_DeleteSubscriptionsRequest_new(void) {
    return (UA_DeleteSubscriptionsRequest*)UA_new(&UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}

static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsRequest_copy(const UA_DeleteSubscriptionsRequest *src, UA_DeleteSubscriptionsRequest *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteSubscriptionsRequest_deleteMembers(UA_DeleteSubscriptionsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}

static UA_INLINE void
UA_DeleteSubscriptionsRequest_clear(UA_DeleteSubscriptionsRequest *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}

static UA_INLINE void
UA_DeleteSubscriptionsRequest_delete(UA_DeleteSubscriptionsRequest *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]);
}

/* DeleteSubscriptionsResponse */
static UA_INLINE void
UA_DeleteSubscriptionsResponse_init(UA_DeleteSubscriptionsResponse *p) {
    memset(p, 0, sizeof(UA_DeleteSubscriptionsResponse));
}

static UA_INLINE UA_DeleteSubscriptionsResponse *
UA_DeleteSubscriptionsResponse_new(void) {
    return (UA_DeleteSubscriptionsResponse*)UA_new(&UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE UA_StatusCode
UA_DeleteSubscriptionsResponse_copy(const UA_DeleteSubscriptionsResponse *src, UA_DeleteSubscriptionsResponse *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DeleteSubscriptionsResponse_deleteMembers(UA_DeleteSubscriptionsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE void
UA_DeleteSubscriptionsResponse_clear(UA_DeleteSubscriptionsResponse *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}

static UA_INLINE void
UA_DeleteSubscriptionsResponse_delete(UA_DeleteSubscriptionsResponse *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]);
}

/* BuildInfo */
static UA_INLINE void
UA_BuildInfo_init(UA_BuildInfo *p) {
    memset(p, 0, sizeof(UA_BuildInfo));
}

static UA_INLINE UA_BuildInfo *
UA_BuildInfo_new(void) {
    return (UA_BuildInfo*)UA_new(&UA_TYPES[UA_TYPES_BUILDINFO]);
}

static UA_INLINE UA_StatusCode
UA_BuildInfo_copy(const UA_BuildInfo *src, UA_BuildInfo *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BUILDINFO]);
}

UA_DEPRECATED static UA_INLINE void
UA_BuildInfo_deleteMembers(UA_BuildInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BUILDINFO]);
}

static UA_INLINE void
UA_BuildInfo_clear(UA_BuildInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_BUILDINFO]);
}

static UA_INLINE void
UA_BuildInfo_delete(UA_BuildInfo *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_BUILDINFO]);
}

/* RedundancySupport */
static UA_INLINE void
UA_RedundancySupport_init(UA_RedundancySupport *p) {
    memset(p, 0, sizeof(UA_RedundancySupport));
}

static UA_INLINE UA_RedundancySupport *
UA_RedundancySupport_new(void) {
    return (UA_RedundancySupport*)UA_new(&UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}

static UA_INLINE UA_StatusCode
UA_RedundancySupport_copy(const UA_RedundancySupport *src, UA_RedundancySupport *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}

UA_DEPRECATED static UA_INLINE void
UA_RedundancySupport_deleteMembers(UA_RedundancySupport *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}

static UA_INLINE void
UA_RedundancySupport_clear(UA_RedundancySupport *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}

static UA_INLINE void
UA_RedundancySupport_delete(UA_RedundancySupport *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REDUNDANCYSUPPORT]);
}

/* ServerState */
static UA_INLINE void
UA_ServerState_init(UA_ServerState *p) {
    memset(p, 0, sizeof(UA_ServerState));
}

static UA_INLINE UA_ServerState *
UA_ServerState_new(void) {
    return (UA_ServerState*)UA_new(&UA_TYPES[UA_TYPES_SERVERSTATE]);
}

static UA_INLINE UA_StatusCode
UA_ServerState_copy(const UA_ServerState *src, UA_ServerState *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVERSTATE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServerState_deleteMembers(UA_ServerState *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERSTATE]);
}

static UA_INLINE void
UA_ServerState_clear(UA_ServerState *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERSTATE]);
}

static UA_INLINE void
UA_ServerState_delete(UA_ServerState *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVERSTATE]);
}

/* RedundantServerDataType */
static UA_INLINE void
UA_RedundantServerDataType_init(UA_RedundantServerDataType *p) {
    memset(p, 0, sizeof(UA_RedundantServerDataType));
}

static UA_INLINE UA_RedundantServerDataType *
UA_RedundantServerDataType_new(void) {
    return (UA_RedundantServerDataType*)UA_new(&UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_RedundantServerDataType_copy(const UA_RedundantServerDataType *src, UA_RedundantServerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RedundantServerDataType_deleteMembers(UA_RedundantServerDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}

static UA_INLINE void
UA_RedundantServerDataType_clear(UA_RedundantServerDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}

static UA_INLINE void
UA_RedundantServerDataType_delete(UA_RedundantServerDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_REDUNDANTSERVERDATATYPE]);
}

/* EndpointUrlListDataType */
static UA_INLINE void
UA_EndpointUrlListDataType_init(UA_EndpointUrlListDataType *p) {
    memset(p, 0, sizeof(UA_EndpointUrlListDataType));
}

static UA_INLINE UA_EndpointUrlListDataType *
UA_EndpointUrlListDataType_new(void) {
    return (UA_EndpointUrlListDataType*)UA_new(&UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndpointUrlListDataType_copy(const UA_EndpointUrlListDataType *src, UA_EndpointUrlListDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndpointUrlListDataType_deleteMembers(UA_EndpointUrlListDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}

static UA_INLINE void
UA_EndpointUrlListDataType_clear(UA_EndpointUrlListDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}

static UA_INLINE void
UA_EndpointUrlListDataType_delete(UA_EndpointUrlListDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENDPOINTURLLISTDATATYPE]);
}

/* NetworkGroupDataType */
static UA_INLINE void
UA_NetworkGroupDataType_init(UA_NetworkGroupDataType *p) {
    memset(p, 0, sizeof(UA_NetworkGroupDataType));
}

static UA_INLINE UA_NetworkGroupDataType *
UA_NetworkGroupDataType_new(void) {
    return (UA_NetworkGroupDataType*)UA_new(&UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_NetworkGroupDataType_copy(const UA_NetworkGroupDataType *src, UA_NetworkGroupDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_NetworkGroupDataType_deleteMembers(UA_NetworkGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}

static UA_INLINE void
UA_NetworkGroupDataType_clear(UA_NetworkGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}

static UA_INLINE void
UA_NetworkGroupDataType_delete(UA_NetworkGroupDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_NETWORKGROUPDATATYPE]);
}

/* SamplingIntervalDiagnosticsDataType */
static UA_INLINE void
UA_SamplingIntervalDiagnosticsDataType_init(UA_SamplingIntervalDiagnosticsDataType *p) {
    memset(p, 0, sizeof(UA_SamplingIntervalDiagnosticsDataType));
}

static UA_INLINE UA_SamplingIntervalDiagnosticsDataType *
UA_SamplingIntervalDiagnosticsDataType_new(void) {
    return (UA_SamplingIntervalDiagnosticsDataType*)UA_new(&UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SamplingIntervalDiagnosticsDataType_copy(const UA_SamplingIntervalDiagnosticsDataType *src, UA_SamplingIntervalDiagnosticsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SamplingIntervalDiagnosticsDataType_deleteMembers(UA_SamplingIntervalDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SamplingIntervalDiagnosticsDataType_clear(UA_SamplingIntervalDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SamplingIntervalDiagnosticsDataType_delete(UA_SamplingIntervalDiagnosticsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SAMPLINGINTERVALDIAGNOSTICSDATATYPE]);
}

/* ServerDiagnosticsSummaryDataType */
static UA_INLINE void
UA_ServerDiagnosticsSummaryDataType_init(UA_ServerDiagnosticsSummaryDataType *p) {
    memset(p, 0, sizeof(UA_ServerDiagnosticsSummaryDataType));
}

static UA_INLINE UA_ServerDiagnosticsSummaryDataType *
UA_ServerDiagnosticsSummaryDataType_new(void) {
    return (UA_ServerDiagnosticsSummaryDataType*)UA_new(&UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ServerDiagnosticsSummaryDataType_copy(const UA_ServerDiagnosticsSummaryDataType *src, UA_ServerDiagnosticsSummaryDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServerDiagnosticsSummaryDataType_deleteMembers(UA_ServerDiagnosticsSummaryDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}

static UA_INLINE void
UA_ServerDiagnosticsSummaryDataType_clear(UA_ServerDiagnosticsSummaryDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}

static UA_INLINE void
UA_ServerDiagnosticsSummaryDataType_delete(UA_ServerDiagnosticsSummaryDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVERDIAGNOSTICSSUMMARYDATATYPE]);
}

/* ServerStatusDataType */
static UA_INLINE void
UA_ServerStatusDataType_init(UA_ServerStatusDataType *p) {
    memset(p, 0, sizeof(UA_ServerStatusDataType));
}

static UA_INLINE UA_ServerStatusDataType *
UA_ServerStatusDataType_new(void) {
    return (UA_ServerStatusDataType*)UA_new(&UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ServerStatusDataType_copy(const UA_ServerStatusDataType *src, UA_ServerStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServerStatusDataType_deleteMembers(UA_ServerStatusDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_ServerStatusDataType_clear(UA_ServerStatusDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_ServerStatusDataType_delete(UA_ServerStatusDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]);
}

/* SessionSecurityDiagnosticsDataType */
static UA_INLINE void
UA_SessionSecurityDiagnosticsDataType_init(UA_SessionSecurityDiagnosticsDataType *p) {
    memset(p, 0, sizeof(UA_SessionSecurityDiagnosticsDataType));
}

static UA_INLINE UA_SessionSecurityDiagnosticsDataType *
UA_SessionSecurityDiagnosticsDataType_new(void) {
    return (UA_SessionSecurityDiagnosticsDataType*)UA_new(&UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SessionSecurityDiagnosticsDataType_copy(const UA_SessionSecurityDiagnosticsDataType *src, UA_SessionSecurityDiagnosticsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SessionSecurityDiagnosticsDataType_deleteMembers(UA_SessionSecurityDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SessionSecurityDiagnosticsDataType_clear(UA_SessionSecurityDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SessionSecurityDiagnosticsDataType_delete(UA_SessionSecurityDiagnosticsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SESSIONSECURITYDIAGNOSTICSDATATYPE]);
}

/* ServiceCounterDataType */
static UA_INLINE void
UA_ServiceCounterDataType_init(UA_ServiceCounterDataType *p) {
    memset(p, 0, sizeof(UA_ServiceCounterDataType));
}

static UA_INLINE UA_ServiceCounterDataType *
UA_ServiceCounterDataType_new(void) {
    return (UA_ServiceCounterDataType*)UA_new(&UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ServiceCounterDataType_copy(const UA_ServiceCounterDataType *src, UA_ServiceCounterDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ServiceCounterDataType_deleteMembers(UA_ServiceCounterDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}

static UA_INLINE void
UA_ServiceCounterDataType_clear(UA_ServiceCounterDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}

static UA_INLINE void
UA_ServiceCounterDataType_delete(UA_ServiceCounterDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SERVICECOUNTERDATATYPE]);
}

/* StatusResult */
static UA_INLINE void
UA_StatusResult_init(UA_StatusResult *p) {
    memset(p, 0, sizeof(UA_StatusResult));
}

static UA_INLINE UA_StatusResult *
UA_StatusResult_new(void) {
    return (UA_StatusResult*)UA_new(&UA_TYPES[UA_TYPES_STATUSRESULT]);
}

static UA_INLINE UA_StatusCode
UA_StatusResult_copy(const UA_StatusResult *src, UA_StatusResult *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STATUSRESULT]);
}

UA_DEPRECATED static UA_INLINE void
UA_StatusResult_deleteMembers(UA_StatusResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSRESULT]);
}

static UA_INLINE void
UA_StatusResult_clear(UA_StatusResult *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STATUSRESULT]);
}

static UA_INLINE void
UA_StatusResult_delete(UA_StatusResult *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STATUSRESULT]);
}

/* SubscriptionDiagnosticsDataType */
static UA_INLINE void
UA_SubscriptionDiagnosticsDataType_init(UA_SubscriptionDiagnosticsDataType *p) {
    memset(p, 0, sizeof(UA_SubscriptionDiagnosticsDataType));
}

static UA_INLINE UA_SubscriptionDiagnosticsDataType *
UA_SubscriptionDiagnosticsDataType_new(void) {
    return (UA_SubscriptionDiagnosticsDataType*)UA_new(&UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SubscriptionDiagnosticsDataType_copy(const UA_SubscriptionDiagnosticsDataType *src, UA_SubscriptionDiagnosticsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SubscriptionDiagnosticsDataType_deleteMembers(UA_SubscriptionDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SubscriptionDiagnosticsDataType_clear(UA_SubscriptionDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SubscriptionDiagnosticsDataType_delete(UA_SubscriptionDiagnosticsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONDIAGNOSTICSDATATYPE]);
}

/* ModelChangeStructureVerbMask */
static UA_INLINE void
UA_ModelChangeStructureVerbMask_init(UA_ModelChangeStructureVerbMask *p) {
    memset(p, 0, sizeof(UA_ModelChangeStructureVerbMask));
}

static UA_INLINE UA_ModelChangeStructureVerbMask *
UA_ModelChangeStructureVerbMask_new(void) {
    return (UA_ModelChangeStructureVerbMask*)UA_new(&UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}

static UA_INLINE UA_StatusCode
UA_ModelChangeStructureVerbMask_copy(const UA_ModelChangeStructureVerbMask *src, UA_ModelChangeStructureVerbMask *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModelChangeStructureVerbMask_deleteMembers(UA_ModelChangeStructureVerbMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}

static UA_INLINE void
UA_ModelChangeStructureVerbMask_clear(UA_ModelChangeStructureVerbMask *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}

static UA_INLINE void
UA_ModelChangeStructureVerbMask_delete(UA_ModelChangeStructureVerbMask *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREVERBMASK]);
}

/* ModelChangeStructureDataType */
static UA_INLINE void
UA_ModelChangeStructureDataType_init(UA_ModelChangeStructureDataType *p) {
    memset(p, 0, sizeof(UA_ModelChangeStructureDataType));
}

static UA_INLINE UA_ModelChangeStructureDataType *
UA_ModelChangeStructureDataType_new(void) {
    return (UA_ModelChangeStructureDataType*)UA_new(&UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ModelChangeStructureDataType_copy(const UA_ModelChangeStructureDataType *src, UA_ModelChangeStructureDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModelChangeStructureDataType_deleteMembers(UA_ModelChangeStructureDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE void
UA_ModelChangeStructureDataType_clear(UA_ModelChangeStructureDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE void
UA_ModelChangeStructureDataType_delete(UA_ModelChangeStructureDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODELCHANGESTRUCTUREDATATYPE]);
}

/* SemanticChangeStructureDataType */
static UA_INLINE void
UA_SemanticChangeStructureDataType_init(UA_SemanticChangeStructureDataType *p) {
    memset(p, 0, sizeof(UA_SemanticChangeStructureDataType));
}

static UA_INLINE UA_SemanticChangeStructureDataType *
UA_SemanticChangeStructureDataType_new(void) {
    return (UA_SemanticChangeStructureDataType*)UA_new(&UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SemanticChangeStructureDataType_copy(const UA_SemanticChangeStructureDataType *src, UA_SemanticChangeStructureDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SemanticChangeStructureDataType_deleteMembers(UA_SemanticChangeStructureDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE void
UA_SemanticChangeStructureDataType_clear(UA_SemanticChangeStructureDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}

static UA_INLINE void
UA_SemanticChangeStructureDataType_delete(UA_SemanticChangeStructureDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SEMANTICCHANGESTRUCTUREDATATYPE]);
}

/* Range */
static UA_INLINE void
UA_Range_init(UA_Range *p) {
    memset(p, 0, sizeof(UA_Range));
}

static UA_INLINE UA_Range *
UA_Range_new(void) {
    return (UA_Range*)UA_new(&UA_TYPES[UA_TYPES_RANGE]);
}

static UA_INLINE UA_StatusCode
UA_Range_copy(const UA_Range *src, UA_Range *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RANGE]);
}

UA_DEPRECATED static UA_INLINE void
UA_Range_deleteMembers(UA_Range *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RANGE]);
}

static UA_INLINE void
UA_Range_clear(UA_Range *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_RANGE]);
}

static UA_INLINE void
UA_Range_delete(UA_Range *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_RANGE]);
}

/* EUInformation */
static UA_INLINE void
UA_EUInformation_init(UA_EUInformation *p) {
    memset(p, 0, sizeof(UA_EUInformation));
}

static UA_INLINE UA_EUInformation *
UA_EUInformation_new(void) {
    return (UA_EUInformation*)UA_new(&UA_TYPES[UA_TYPES_EUINFORMATION]);
}

static UA_INLINE UA_StatusCode
UA_EUInformation_copy(const UA_EUInformation *src, UA_EUInformation *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EUINFORMATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_EUInformation_deleteMembers(UA_EUInformation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EUINFORMATION]);
}

static UA_INLINE void
UA_EUInformation_clear(UA_EUInformation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EUINFORMATION]);
}

static UA_INLINE void
UA_EUInformation_delete(UA_EUInformation *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EUINFORMATION]);
}

/* AxisScaleEnumeration */
static UA_INLINE void
UA_AxisScaleEnumeration_init(UA_AxisScaleEnumeration *p) {
    memset(p, 0, sizeof(UA_AxisScaleEnumeration));
}

static UA_INLINE UA_AxisScaleEnumeration *
UA_AxisScaleEnumeration_new(void) {
    return (UA_AxisScaleEnumeration*)UA_new(&UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}

static UA_INLINE UA_StatusCode
UA_AxisScaleEnumeration_copy(const UA_AxisScaleEnumeration *src, UA_AxisScaleEnumeration *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_AxisScaleEnumeration_deleteMembers(UA_AxisScaleEnumeration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}

static UA_INLINE void
UA_AxisScaleEnumeration_clear(UA_AxisScaleEnumeration *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}

static UA_INLINE void
UA_AxisScaleEnumeration_delete(UA_AxisScaleEnumeration *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AXISSCALEENUMERATION]);
}

/* ComplexNumberType */
static UA_INLINE void
UA_ComplexNumberType_init(UA_ComplexNumberType *p) {
    memset(p, 0, sizeof(UA_ComplexNumberType));
}

static UA_INLINE UA_ComplexNumberType *
UA_ComplexNumberType_new(void) {
    return (UA_ComplexNumberType*)UA_new(&UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}

static UA_INLINE UA_StatusCode
UA_ComplexNumberType_copy(const UA_ComplexNumberType *src, UA_ComplexNumberType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ComplexNumberType_deleteMembers(UA_ComplexNumberType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}

static UA_INLINE void
UA_ComplexNumberType_clear(UA_ComplexNumberType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}

static UA_INLINE void
UA_ComplexNumberType_delete(UA_ComplexNumberType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_COMPLEXNUMBERTYPE]);
}

/* DoubleComplexNumberType */
static UA_INLINE void
UA_DoubleComplexNumberType_init(UA_DoubleComplexNumberType *p) {
    memset(p, 0, sizeof(UA_DoubleComplexNumberType));
}

static UA_INLINE UA_DoubleComplexNumberType *
UA_DoubleComplexNumberType_new(void) {
    return (UA_DoubleComplexNumberType*)UA_new(&UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}

static UA_INLINE UA_StatusCode
UA_DoubleComplexNumberType_copy(const UA_DoubleComplexNumberType *src, UA_DoubleComplexNumberType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DoubleComplexNumberType_deleteMembers(UA_DoubleComplexNumberType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}

static UA_INLINE void
UA_DoubleComplexNumberType_clear(UA_DoubleComplexNumberType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}

static UA_INLINE void
UA_DoubleComplexNumberType_delete(UA_DoubleComplexNumberType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DOUBLECOMPLEXNUMBERTYPE]);
}

/* AxisInformation */
static UA_INLINE void
UA_AxisInformation_init(UA_AxisInformation *p) {
    memset(p, 0, sizeof(UA_AxisInformation));
}

static UA_INLINE UA_AxisInformation *
UA_AxisInformation_new(void) {
    return (UA_AxisInformation*)UA_new(&UA_TYPES[UA_TYPES_AXISINFORMATION]);
}

static UA_INLINE UA_StatusCode
UA_AxisInformation_copy(const UA_AxisInformation *src, UA_AxisInformation *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_AXISINFORMATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_AxisInformation_deleteMembers(UA_AxisInformation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AXISINFORMATION]);
}

static UA_INLINE void
UA_AxisInformation_clear(UA_AxisInformation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_AXISINFORMATION]);
}

static UA_INLINE void
UA_AxisInformation_delete(UA_AxisInformation *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_AXISINFORMATION]);
}

/* XVType */
static UA_INLINE void
UA_XVType_init(UA_XVType *p) {
    memset(p, 0, sizeof(UA_XVType));
}

static UA_INLINE UA_XVType *
UA_XVType_new(void) {
    return (UA_XVType*)UA_new(&UA_TYPES[UA_TYPES_XVTYPE]);
}

static UA_INLINE UA_StatusCode
UA_XVType_copy(const UA_XVType *src, UA_XVType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_XVTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_XVType_deleteMembers(UA_XVType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_XVTYPE]);
}

static UA_INLINE void
UA_XVType_clear(UA_XVType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_XVTYPE]);
}

static UA_INLINE void
UA_XVType_delete(UA_XVType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_XVTYPE]);
}

/* ProgramDiagnosticDataType */
static UA_INLINE void
UA_ProgramDiagnosticDataType_init(UA_ProgramDiagnosticDataType *p) {
    memset(p, 0, sizeof(UA_ProgramDiagnosticDataType));
}

static UA_INLINE UA_ProgramDiagnosticDataType *
UA_ProgramDiagnosticDataType_new(void) {
    return (UA_ProgramDiagnosticDataType*)UA_new(&UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ProgramDiagnosticDataType_copy(const UA_ProgramDiagnosticDataType *src, UA_ProgramDiagnosticDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ProgramDiagnosticDataType_deleteMembers(UA_ProgramDiagnosticDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}

static UA_INLINE void
UA_ProgramDiagnosticDataType_clear(UA_ProgramDiagnosticDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}

static UA_INLINE void
UA_ProgramDiagnosticDataType_delete(UA_ProgramDiagnosticDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTICDATATYPE]);
}

/* ProgramDiagnostic2DataType */
static UA_INLINE void
UA_ProgramDiagnostic2DataType_init(UA_ProgramDiagnostic2DataType *p) {
    memset(p, 0, sizeof(UA_ProgramDiagnostic2DataType));
}

static UA_INLINE UA_ProgramDiagnostic2DataType *
UA_ProgramDiagnostic2DataType_new(void) {
    return (UA_ProgramDiagnostic2DataType*)UA_new(&UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ProgramDiagnostic2DataType_copy(const UA_ProgramDiagnostic2DataType *src, UA_ProgramDiagnostic2DataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ProgramDiagnostic2DataType_deleteMembers(UA_ProgramDiagnostic2DataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}

static UA_INLINE void
UA_ProgramDiagnostic2DataType_clear(UA_ProgramDiagnostic2DataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}

static UA_INLINE void
UA_ProgramDiagnostic2DataType_delete(UA_ProgramDiagnostic2DataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PROGRAMDIAGNOSTIC2DATATYPE]);
}

/* Annotation */
static UA_INLINE void
UA_Annotation_init(UA_Annotation *p) {
    memset(p, 0, sizeof(UA_Annotation));
}

static UA_INLINE UA_Annotation *
UA_Annotation_new(void) {
    return (UA_Annotation*)UA_new(&UA_TYPES[UA_TYPES_ANNOTATION]);
}

static UA_INLINE UA_StatusCode
UA_Annotation_copy(const UA_Annotation *src, UA_Annotation *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ANNOTATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_Annotation_deleteMembers(UA_Annotation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ANNOTATION]);
}

static UA_INLINE void
UA_Annotation_clear(UA_Annotation *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ANNOTATION]);
}

static UA_INLINE void
UA_Annotation_delete(UA_Annotation *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ANNOTATION]);
}

/* ExceptionDeviationFormat */
static UA_INLINE void
UA_ExceptionDeviationFormat_init(UA_ExceptionDeviationFormat *p) {
    memset(p, 0, sizeof(UA_ExceptionDeviationFormat));
}

static UA_INLINE UA_ExceptionDeviationFormat *
UA_ExceptionDeviationFormat_new(void) {
    return (UA_ExceptionDeviationFormat*)UA_new(&UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}

static UA_INLINE UA_StatusCode
UA_ExceptionDeviationFormat_copy(const UA_ExceptionDeviationFormat *src, UA_ExceptionDeviationFormat *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}

UA_DEPRECATED static UA_INLINE void
UA_ExceptionDeviationFormat_deleteMembers(UA_ExceptionDeviationFormat *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}

static UA_INLINE void
UA_ExceptionDeviationFormat_clear(UA_ExceptionDeviationFormat *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}

static UA_INLINE void
UA_ExceptionDeviationFormat_delete(UA_ExceptionDeviationFormat *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EXCEPTIONDEVIATIONFORMAT]);
}

/* EndpointType */
static UA_INLINE void
UA_EndpointType_init(UA_EndpointType *p) {
    memset(p, 0, sizeof(UA_EndpointType));
}

static UA_INLINE UA_EndpointType *
UA_EndpointType_new(void) {
    return (UA_EndpointType*)UA_new(&UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndpointType_copy(const UA_EndpointType *src, UA_EndpointType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndpointType_deleteMembers(UA_EndpointType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}

static UA_INLINE void
UA_EndpointType_clear(UA_EndpointType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}

static UA_INLINE void
UA_EndpointType_delete(UA_EndpointType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENDPOINTTYPE]);
}

/* StructureDescription */
static UA_INLINE void
UA_StructureDescription_init(UA_StructureDescription *p) {
    memset(p, 0, sizeof(UA_StructureDescription));
}

static UA_INLINE UA_StructureDescription *
UA_StructureDescription_new(void) {
    return (UA_StructureDescription*)UA_new(&UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_StructureDescription_copy(const UA_StructureDescription *src, UA_StructureDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_StructureDescription_deleteMembers(UA_StructureDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}

static UA_INLINE void
UA_StructureDescription_clear(UA_StructureDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}

static UA_INLINE void
UA_StructureDescription_delete(UA_StructureDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_STRUCTUREDESCRIPTION]);
}

/* FieldMetaData */
static UA_INLINE void
UA_FieldMetaData_init(UA_FieldMetaData *p) {
    memset(p, 0, sizeof(UA_FieldMetaData));
}

static UA_INLINE UA_FieldMetaData *
UA_FieldMetaData_new(void) {
    return (UA_FieldMetaData*)UA_new(&UA_TYPES[UA_TYPES_FIELDMETADATA]);
}

static UA_INLINE UA_StatusCode
UA_FieldMetaData_copy(const UA_FieldMetaData *src, UA_FieldMetaData *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FIELDMETADATA]);
}

UA_DEPRECATED static UA_INLINE void
UA_FieldMetaData_deleteMembers(UA_FieldMetaData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FIELDMETADATA]);
}

static UA_INLINE void
UA_FieldMetaData_clear(UA_FieldMetaData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FIELDMETADATA]);
}

static UA_INLINE void
UA_FieldMetaData_delete(UA_FieldMetaData *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FIELDMETADATA]);
}

/* PublishedEventsDataType */
static UA_INLINE void
UA_PublishedEventsDataType_init(UA_PublishedEventsDataType *p) {
    memset(p, 0, sizeof(UA_PublishedEventsDataType));
}

static UA_INLINE UA_PublishedEventsDataType *
UA_PublishedEventsDataType_new(void) {
    return (UA_PublishedEventsDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PublishedEventsDataType_copy(const UA_PublishedEventsDataType *src, UA_PublishedEventsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishedEventsDataType_deleteMembers(UA_PublishedEventsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}

static UA_INLINE void
UA_PublishedEventsDataType_clear(UA_PublishedEventsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}

static UA_INLINE void
UA_PublishedEventsDataType_delete(UA_PublishedEventsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHEDEVENTSDATATYPE]);
}

/* PubSubGroupDataType */
static UA_INLINE void
UA_PubSubGroupDataType_init(UA_PubSubGroupDataType *p) {
    memset(p, 0, sizeof(UA_PubSubGroupDataType));
}

static UA_INLINE UA_PubSubGroupDataType *
UA_PubSubGroupDataType_new(void) {
    return (UA_PubSubGroupDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PubSubGroupDataType_copy(const UA_PubSubGroupDataType *src, UA_PubSubGroupDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubGroupDataType_deleteMembers(UA_PubSubGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}

static UA_INLINE void
UA_PubSubGroupDataType_clear(UA_PubSubGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}

static UA_INLINE void
UA_PubSubGroupDataType_delete(UA_PubSubGroupDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBSUBGROUPDATATYPE]);
}

/* WriterGroupDataType */
static UA_INLINE void
UA_WriterGroupDataType_init(UA_WriterGroupDataType *p) {
    memset(p, 0, sizeof(UA_WriterGroupDataType));
}

static UA_INLINE UA_WriterGroupDataType *
UA_WriterGroupDataType_new(void) {
    return (UA_WriterGroupDataType*)UA_new(&UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_WriterGroupDataType_copy(const UA_WriterGroupDataType *src, UA_WriterGroupDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_WriterGroupDataType_deleteMembers(UA_WriterGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupDataType_clear(UA_WriterGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}

static UA_INLINE void
UA_WriterGroupDataType_delete(UA_WriterGroupDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_WRITERGROUPDATATYPE]);
}

/* FieldTargetDataType */
static UA_INLINE void
UA_FieldTargetDataType_init(UA_FieldTargetDataType *p) {
    memset(p, 0, sizeof(UA_FieldTargetDataType));
}

static UA_INLINE UA_FieldTargetDataType *
UA_FieldTargetDataType_new(void) {
    return (UA_FieldTargetDataType*)UA_new(&UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_FieldTargetDataType_copy(const UA_FieldTargetDataType *src, UA_FieldTargetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_FieldTargetDataType_deleteMembers(UA_FieldTargetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}

static UA_INLINE void
UA_FieldTargetDataType_clear(UA_FieldTargetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}

static UA_INLINE void
UA_FieldTargetDataType_delete(UA_FieldTargetDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_FIELDTARGETDATATYPE]);
}

/* SubscribedDataSetMirrorDataType */
static UA_INLINE void
UA_SubscribedDataSetMirrorDataType_init(UA_SubscribedDataSetMirrorDataType *p) {
    memset(p, 0, sizeof(UA_SubscribedDataSetMirrorDataType));
}

static UA_INLINE UA_SubscribedDataSetMirrorDataType *
UA_SubscribedDataSetMirrorDataType_new(void) {
    return (UA_SubscribedDataSetMirrorDataType*)UA_new(&UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SubscribedDataSetMirrorDataType_copy(const UA_SubscribedDataSetMirrorDataType *src, UA_SubscribedDataSetMirrorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SubscribedDataSetMirrorDataType_deleteMembers(UA_SubscribedDataSetMirrorDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}

static UA_INLINE void
UA_SubscribedDataSetMirrorDataType_clear(UA_SubscribedDataSetMirrorDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}

static UA_INLINE void
UA_SubscribedDataSetMirrorDataType_delete(UA_SubscribedDataSetMirrorDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SUBSCRIBEDDATASETMIRRORDATATYPE]);
}

/* EnumDefinition */
static UA_INLINE void
UA_EnumDefinition_init(UA_EnumDefinition *p) {
    memset(p, 0, sizeof(UA_EnumDefinition));
}

static UA_INLINE UA_EnumDefinition *
UA_EnumDefinition_new(void) {
    return (UA_EnumDefinition*)UA_new(&UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}

static UA_INLINE UA_StatusCode
UA_EnumDefinition_copy(const UA_EnumDefinition *src, UA_EnumDefinition *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnumDefinition_deleteMembers(UA_EnumDefinition *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}

static UA_INLINE void
UA_EnumDefinition_clear(UA_EnumDefinition *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}

static UA_INLINE void
UA_EnumDefinition_delete(UA_EnumDefinition *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENUMDEFINITION]);
}

/* ReadEventDetails */
static UA_INLINE void
UA_ReadEventDetails_init(UA_ReadEventDetails *p) {
    memset(p, 0, sizeof(UA_ReadEventDetails));
}

static UA_INLINE UA_ReadEventDetails *
UA_ReadEventDetails_new(void) {
    return (UA_ReadEventDetails*)UA_new(&UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_ReadEventDetails_copy(const UA_ReadEventDetails *src, UA_ReadEventDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadEventDetails_deleteMembers(UA_ReadEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}

static UA_INLINE void
UA_ReadEventDetails_clear(UA_ReadEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}

static UA_INLINE void
UA_ReadEventDetails_delete(UA_ReadEventDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READEVENTDETAILS]);
}

/* ReadProcessedDetails */
static UA_INLINE void
UA_ReadProcessedDetails_init(UA_ReadProcessedDetails *p) {
    memset(p, 0, sizeof(UA_ReadProcessedDetails));
}

static UA_INLINE UA_ReadProcessedDetails *
UA_ReadProcessedDetails_new(void) {
    return (UA_ReadProcessedDetails*)UA_new(&UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_ReadProcessedDetails_copy(const UA_ReadProcessedDetails *src, UA_ReadProcessedDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReadProcessedDetails_deleteMembers(UA_ReadProcessedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}

static UA_INLINE void
UA_ReadProcessedDetails_clear(UA_ReadProcessedDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}

static UA_INLINE void
UA_ReadProcessedDetails_delete(UA_ReadProcessedDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READPROCESSEDDETAILS]);
}

/* ModificationInfo */
static UA_INLINE void
UA_ModificationInfo_init(UA_ModificationInfo *p) {
    memset(p, 0, sizeof(UA_ModificationInfo));
}

static UA_INLINE UA_ModificationInfo *
UA_ModificationInfo_new(void) {
    return (UA_ModificationInfo*)UA_new(&UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}

static UA_INLINE UA_StatusCode
UA_ModificationInfo_copy(const UA_ModificationInfo *src, UA_ModificationInfo *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}

UA_DEPRECATED static UA_INLINE void
UA_ModificationInfo_deleteMembers(UA_ModificationInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}

static UA_INLINE void
UA_ModificationInfo_clear(UA_ModificationInfo *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}

static UA_INLINE void
UA_ModificationInfo_delete(UA_ModificationInfo *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_MODIFICATIONINFO]);
}

/* HistoryModifiedData */
static UA_INLINE void
UA_HistoryModifiedData_init(UA_HistoryModifiedData *p) {
    memset(p, 0, sizeof(UA_HistoryModifiedData));
}

static UA_INLINE UA_HistoryModifiedData *
UA_HistoryModifiedData_new(void) {
    return (UA_HistoryModifiedData*)UA_new(&UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}

static UA_INLINE UA_StatusCode
UA_HistoryModifiedData_copy(const UA_HistoryModifiedData *src, UA_HistoryModifiedData *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryModifiedData_deleteMembers(UA_HistoryModifiedData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}

static UA_INLINE void
UA_HistoryModifiedData_clear(UA_HistoryModifiedData *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}

static UA_INLINE void
UA_HistoryModifiedData_delete(UA_HistoryModifiedData *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYMODIFIEDDATA]);
}

/* HistoryEvent */
static UA_INLINE void
UA_HistoryEvent_init(UA_HistoryEvent *p) {
    memset(p, 0, sizeof(UA_HistoryEvent));
}

static UA_INLINE UA_HistoryEvent *
UA_HistoryEvent_new(void) {
    return (UA_HistoryEvent*)UA_new(&UA_TYPES[UA_TYPES_HISTORYEVENT]);
}

static UA_INLINE UA_StatusCode
UA_HistoryEvent_copy(const UA_HistoryEvent *src, UA_HistoryEvent *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_HISTORYEVENT]);
}

UA_DEPRECATED static UA_INLINE void
UA_HistoryEvent_deleteMembers(UA_HistoryEvent *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYEVENT]);
}

static UA_INLINE void
UA_HistoryEvent_clear(UA_HistoryEvent *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_HISTORYEVENT]);
}

static UA_INLINE void
UA_HistoryEvent_delete(UA_HistoryEvent *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_HISTORYEVENT]);
}

/* UpdateEventDetails */
static UA_INLINE void
UA_UpdateEventDetails_init(UA_UpdateEventDetails *p) {
    memset(p, 0, sizeof(UA_UpdateEventDetails));
}

static UA_INLINE UA_UpdateEventDetails *
UA_UpdateEventDetails_new(void) {
    return (UA_UpdateEventDetails*)UA_new(&UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}

static UA_INLINE UA_StatusCode
UA_UpdateEventDetails_copy(const UA_UpdateEventDetails *src, UA_UpdateEventDetails *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}

UA_DEPRECATED static UA_INLINE void
UA_UpdateEventDetails_deleteMembers(UA_UpdateEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}

static UA_INLINE void
UA_UpdateEventDetails_clear(UA_UpdateEventDetails *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}

static UA_INLINE void
UA_UpdateEventDetails_delete(UA_UpdateEventDetails *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UPDATEEVENTDETAILS]);
}

/* DataChangeNotification */
static UA_INLINE void
UA_DataChangeNotification_init(UA_DataChangeNotification *p) {
    memset(p, 0, sizeof(UA_DataChangeNotification));
}

static UA_INLINE UA_DataChangeNotification *
UA_DataChangeNotification_new(void) {
    return (UA_DataChangeNotification*)UA_new(&UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}

static UA_INLINE UA_StatusCode
UA_DataChangeNotification_copy(const UA_DataChangeNotification *src, UA_DataChangeNotification *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataChangeNotification_deleteMembers(UA_DataChangeNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}

static UA_INLINE void
UA_DataChangeNotification_clear(UA_DataChangeNotification *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}

static UA_INLINE void
UA_DataChangeNotification_delete(UA_DataChangeNotification *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]);
}

/* EventNotificationList */
static UA_INLINE void
UA_EventNotificationList_init(UA_EventNotificationList *p) {
    memset(p, 0, sizeof(UA_EventNotificationList));
}

static UA_INLINE UA_EventNotificationList *
UA_EventNotificationList_new(void) {
    return (UA_EventNotificationList*)UA_new(&UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}

static UA_INLINE UA_StatusCode
UA_EventNotificationList_copy(const UA_EventNotificationList *src, UA_EventNotificationList *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}

UA_DEPRECATED static UA_INLINE void
UA_EventNotificationList_deleteMembers(UA_EventNotificationList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}

static UA_INLINE void
UA_EventNotificationList_clear(UA_EventNotificationList *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}

static UA_INLINE void
UA_EventNotificationList_delete(UA_EventNotificationList *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_EVENTNOTIFICATIONLIST]);
}

/* SessionDiagnosticsDataType */
static UA_INLINE void
UA_SessionDiagnosticsDataType_init(UA_SessionDiagnosticsDataType *p) {
    memset(p, 0, sizeof(UA_SessionDiagnosticsDataType));
}

static UA_INLINE UA_SessionDiagnosticsDataType *
UA_SessionDiagnosticsDataType_new(void) {
    return (UA_SessionDiagnosticsDataType*)UA_new(&UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SessionDiagnosticsDataType_copy(const UA_SessionDiagnosticsDataType *src, UA_SessionDiagnosticsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SessionDiagnosticsDataType_deleteMembers(UA_SessionDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SessionDiagnosticsDataType_clear(UA_SessionDiagnosticsDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}

static UA_INLINE void
UA_SessionDiagnosticsDataType_delete(UA_SessionDiagnosticsDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_SESSIONDIAGNOSTICSDATATYPE]);
}

/* EnumDescription */
static UA_INLINE void
UA_EnumDescription_init(UA_EnumDescription *p) {
    memset(p, 0, sizeof(UA_EnumDescription));
}

static UA_INLINE UA_EnumDescription *
UA_EnumDescription_new(void) {
    return (UA_EnumDescription*)UA_new(&UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}

static UA_INLINE UA_StatusCode
UA_EnumDescription_copy(const UA_EnumDescription *src, UA_EnumDescription *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnumDescription_deleteMembers(UA_EnumDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}

static UA_INLINE void
UA_EnumDescription_clear(UA_EnumDescription *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}

static UA_INLINE void
UA_EnumDescription_delete(UA_EnumDescription *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_ENUMDESCRIPTION]);
}

/* UABinaryFileDataType */
static UA_INLINE void
UA_UABinaryFileDataType_init(UA_UABinaryFileDataType *p) {
    memset(p, 0, sizeof(UA_UABinaryFileDataType));
}

static UA_INLINE UA_UABinaryFileDataType *
UA_UABinaryFileDataType_new(void) {
    return (UA_UABinaryFileDataType*)UA_new(&UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_UABinaryFileDataType_copy(const UA_UABinaryFileDataType *src, UA_UABinaryFileDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UABinaryFileDataType_deleteMembers(UA_UABinaryFileDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}

static UA_INLINE void
UA_UABinaryFileDataType_clear(UA_UABinaryFileDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}

static UA_INLINE void
UA_UABinaryFileDataType_delete(UA_UABinaryFileDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_UABINARYFILEDATATYPE]);
}

/* DataSetMetaDataType */
static UA_INLINE void
UA_DataSetMetaDataType_init(UA_DataSetMetaDataType *p) {
    memset(p, 0, sizeof(UA_DataSetMetaDataType));
}

static UA_INLINE UA_DataSetMetaDataType *
UA_DataSetMetaDataType_new(void) {
    return (UA_DataSetMetaDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetMetaDataType_copy(const UA_DataSetMetaDataType *src, UA_DataSetMetaDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetMetaDataType_deleteMembers(UA_DataSetMetaDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}

static UA_INLINE void
UA_DataSetMetaDataType_clear(UA_DataSetMetaDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}

static UA_INLINE void
UA_DataSetMetaDataType_delete(UA_DataSetMetaDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETMETADATATYPE]);
}

/* PublishedDataSetDataType */
static UA_INLINE void
UA_PublishedDataSetDataType_init(UA_PublishedDataSetDataType *p) {
    memset(p, 0, sizeof(UA_PublishedDataSetDataType));
}

static UA_INLINE UA_PublishedDataSetDataType *
UA_PublishedDataSetDataType_new(void) {
    return (UA_PublishedDataSetDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PublishedDataSetDataType_copy(const UA_PublishedDataSetDataType *src, UA_PublishedDataSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PublishedDataSetDataType_deleteMembers(UA_PublishedDataSetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataSetDataType_clear(UA_PublishedDataSetDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}

static UA_INLINE void
UA_PublishedDataSetDataType_delete(UA_PublishedDataSetDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHEDDATASETDATATYPE]);
}

/* DataSetReaderDataType */
static UA_INLINE void
UA_DataSetReaderDataType_init(UA_DataSetReaderDataType *p) {
    memset(p, 0, sizeof(UA_DataSetReaderDataType));
}

static UA_INLINE UA_DataSetReaderDataType *
UA_DataSetReaderDataType_new(void) {
    return (UA_DataSetReaderDataType*)UA_new(&UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DataSetReaderDataType_copy(const UA_DataSetReaderDataType *src, UA_DataSetReaderDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataSetReaderDataType_deleteMembers(UA_DataSetReaderDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderDataType_clear(UA_DataSetReaderDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}

static UA_INLINE void
UA_DataSetReaderDataType_delete(UA_DataSetReaderDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATASETREADERDATATYPE]);
}

/* TargetVariablesDataType */
static UA_INLINE void
UA_TargetVariablesDataType_init(UA_TargetVariablesDataType *p) {
    memset(p, 0, sizeof(UA_TargetVariablesDataType));
}

static UA_INLINE UA_TargetVariablesDataType *
UA_TargetVariablesDataType_new(void) {
    return (UA_TargetVariablesDataType*)UA_new(&UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_TargetVariablesDataType_copy(const UA_TargetVariablesDataType *src, UA_TargetVariablesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_TargetVariablesDataType_deleteMembers(UA_TargetVariablesDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}

static UA_INLINE void
UA_TargetVariablesDataType_clear(UA_TargetVariablesDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}

static UA_INLINE void
UA_TargetVariablesDataType_delete(UA_TargetVariablesDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_TARGETVARIABLESDATATYPE]);
}

/* DataTypeSchemaHeader */
static UA_INLINE void
UA_DataTypeSchemaHeader_init(UA_DataTypeSchemaHeader *p) {
    memset(p, 0, sizeof(UA_DataTypeSchemaHeader));
}

static UA_INLINE UA_DataTypeSchemaHeader *
UA_DataTypeSchemaHeader_new(void) {
    return (UA_DataTypeSchemaHeader*)UA_new(&UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}

static UA_INLINE UA_StatusCode
UA_DataTypeSchemaHeader_copy(const UA_DataTypeSchemaHeader *src, UA_DataTypeSchemaHeader *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}

UA_DEPRECATED static UA_INLINE void
UA_DataTypeSchemaHeader_deleteMembers(UA_DataTypeSchemaHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}

static UA_INLINE void
UA_DataTypeSchemaHeader_clear(UA_DataTypeSchemaHeader *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}

static UA_INLINE void
UA_DataTypeSchemaHeader_delete(UA_DataTypeSchemaHeader *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_DATATYPESCHEMAHEADER]);
}

/* ReaderGroupDataType */
static UA_INLINE void
UA_ReaderGroupDataType_init(UA_ReaderGroupDataType *p) {
    memset(p, 0, sizeof(UA_ReaderGroupDataType));
}

static UA_INLINE UA_ReaderGroupDataType *
UA_ReaderGroupDataType_new(void) {
    return (UA_ReaderGroupDataType*)UA_new(&UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ReaderGroupDataType_copy(const UA_ReaderGroupDataType *src, UA_ReaderGroupDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ReaderGroupDataType_deleteMembers(UA_ReaderGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupDataType_clear(UA_ReaderGroupDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}

static UA_INLINE void
UA_ReaderGroupDataType_delete(UA_ReaderGroupDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_READERGROUPDATATYPE]);
}

/* PubSubConnectionDataType */
static UA_INLINE void
UA_PubSubConnectionDataType_init(UA_PubSubConnectionDataType *p) {
    memset(p, 0, sizeof(UA_PubSubConnectionDataType));
}

static UA_INLINE UA_PubSubConnectionDataType *
UA_PubSubConnectionDataType_new(void) {
    return (UA_PubSubConnectionDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PubSubConnectionDataType_copy(const UA_PubSubConnectionDataType *src, UA_PubSubConnectionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubConnectionDataType_deleteMembers(UA_PubSubConnectionDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}

static UA_INLINE void
UA_PubSubConnectionDataType_clear(UA_PubSubConnectionDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}

static UA_INLINE void
UA_PubSubConnectionDataType_delete(UA_PubSubConnectionDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBSUBCONNECTIONDATATYPE]);
}

/* PubSubConfigurationDataType */
static UA_INLINE void
UA_PubSubConfigurationDataType_init(UA_PubSubConfigurationDataType *p) {
    memset(p, 0, sizeof(UA_PubSubConfigurationDataType));
}

static UA_INLINE UA_PubSubConfigurationDataType *
UA_PubSubConfigurationDataType_new(void) {
    return (UA_PubSubConfigurationDataType*)UA_new(&UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_PubSubConfigurationDataType_copy(const UA_PubSubConfigurationDataType *src, UA_PubSubConfigurationDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubConfigurationDataType_deleteMembers(UA_PubSubConfigurationDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}

static UA_INLINE void
UA_PubSubConfigurationDataType_clear(UA_PubSubConfigurationDataType *p) {
    UA_clear(p, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}

static UA_INLINE void
UA_PubSubConfigurationDataType_delete(UA_PubSubConfigurationDataType *p) {
    UA_delete(p, &UA_TYPES[UA_TYPES_PUBSUBCONFIGURATIONDATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_GENERATED_HANDLING_H_ */
