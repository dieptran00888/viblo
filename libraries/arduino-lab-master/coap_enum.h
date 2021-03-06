/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coap_enum.h
 * Author: Hoang Hoi
 *
 * Created on Ngày 02 tháng 4 năm 2017, 01:12
 */

#ifndef COAP_ENUM_H
#define COAP_ENUM_H

#define COAP_VERSION 0x01

//http://tools.ietf.org/html/rfc7252#section-12.2
typedef enum
{
    COAP_OPTION_IF_MATCH = 1,
    COAP_OPTION_URI_HOST = 3,
    COAP_OPTION_ETAG = 4,
    COAP_OPTION_IF_NONE_MATCH = 5,
    COAP_OPTION_OBSERVE = 6,
    COAP_OPTION_URI_PORT = 7,
    COAP_OPTION_LOCATION_PATH = 8,
    COAP_OPTION_URI_PATH = 11,
    COAP_OPTION_CONTENT_FORMAT = 12,
    COAP_OPTION_MAX_AGE = 14,
    COAP_OPTION_URI_QUERY = 15,
    COAP_OPTION_ACCEPT = 17,
    COAP_OPTION_LOCATION_QUERY = 20,
    COAP_OPTION_PROXY_URI = 35,
    COAP_OPTION_PROXY_SCHEME = 39
} coap_option_num_t;

//http://tools.ietf.org/html/rfc7252#section-12.1.1
typedef enum
{
    COAP_METHOD_GET = 1,
    COAP_METHOD_POST = 2,
    COAP_METHOD_PUT = 3,
    COAP_METHOD_DELETE = 4
} coap_method_t;

//http://tools.ietf.org/html/rfc7252#section-12.1.1
typedef enum
{
    COAP_TYPE_CON = 0,
    COAP_TYPE_NONCON = 1,
    COAP_TYPE_ACK = 2,
    COAP_TYPE_RESET = 3
} coap_msgtype_t;

//http://tools.ietf.org/html/rfc7252#section-5.2
//http://tools.ietf.org/html/rfc7252#section-12.1.2
#define MAKE_RSPCODE(clas, det) ((clas << 5) | (det))
typedef enum
{
    COAP_RSPCODE_CREATED = MAKE_RSPCODE(2, 1),
    COAP_RSPCODE_DELETED = MAKE_RSPCODE(2, 2),
    COAP_RSPCODE_VALID = MAKE_RSPCODE(2, 3),
    COAP_RSPCODE_CHANGED = MAKE_RSPCODE(2, 4),
    COAP_RSPCODE_CONTENT = MAKE_RSPCODE(2, 5),

    COAP_RSPCODE_BAD_REQUEST = MAKE_RSPCODE(4, 0),
    COAP_RSPCODE_UNAUTHORIZED = MAKE_RSPCODE(4, 1),
    COAP_RSPCODE_BAD_OPTION = MAKE_RSPCODE(4, 2),
    COAP_RSPCODE_FORBIDDEN = MAKE_RSPCODE(4, 3),
    COAP_RSPCODE_NOT_FOUND = MAKE_RSPCODE(4, 4),
    COAP_RSPCODE_METHOD_NOT_ALLOWED = MAKE_RSPCODE(4, 5),
    COAP_RSPCODE_NOT_ACCEPTABLE  = MAKE_RSPCODE(4, 6),

    COAP_RSPCODE_INTERNAL_SERVER_ERROR  = MAKE_RSPCODE(5, 0),
    COAP_RSPCODE_BAD_GATEWAY  = MAKE_RSPCODE(5, 2),
    COAP_RSPCODE_GATEWAY_TIMEOUT  = MAKE_RSPCODE(5, 4)
} coap_responsecode_t;

//http://tools.ietf.org/html/rfc7252#section-12.3
typedef enum
{
    COAP_CONTENTTYPE_NONE = -1, // bodge to allow us not to send option block
    COAP_CONTENTTYPE_TEXT_PLAIN = 0,
    COAP_CONTENTTYPE_APPLICATION_LINKFORMAT = 40,
    COAP_CONTENTTYPE_APPLICATION_XML = 41,
    COAP_CONTENTTYPE_APPLICATION_OCTECT_STREAM = 42,
    COAP_CONTENTTYPE_APPLICATION_EXI = 47,
    COAP_CONTENTTYPE_APPLICATION_JSON = 50,
} coap_content_type_t;

//////////////////////////////////////////////

typedef enum
{
    COAP_ERR_NONE = 0,
    COAP_ERR_HEADER_TOO_SHORT = 1,
    COAP_ERR_VERSION_NOT_1 = 2,
    COAP_ERR_TOKEN_TOO_SHORT = 3,
    COAP_ERR_OPTION_TOO_SHORT_FOR_HEADER = 4,
    COAP_ERR_OPTION_TOO_SHORT = 5,
    COAP_ERR_OPTION_OVERRUNS_PACKET = 6,
    COAP_ERR_OPTION_TOO_BIG = 7,
    COAP_ERR_OPTION_LEN_INVALID = 8,
    COAP_ERR_BUFFER_TOO_SMALL = 9,
    COAP_ERR_UNSUPPORTED = 10,
    COAP_ERR_OPTION_DELTA_INVALID = 11,
} coap_error_t;

#endif
