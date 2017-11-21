/**
 * Facestore API
 * This is a reference to Facestore API.  # Introduction This API is documented in **OpenAPI format** and provided by [facestore.pt](http://facestore.pt) team.  # About the API Through the Facestore API your applications can retrieve and manage Facestore platform content in your store. The base address of the API is `https://api.facestore.pt`. There are several endpoints at that address, each with its own unique path. All endpoints are private and you need the permissions to access them. To get an API Token you have to be client of Facestore and access your personal account to request it (see the next topic).  # Get API Token To consume the Facestore API is take the unique token to identify your requests. You can do that accessing the store manager admin and doing the following steps: 1. Go to ``configurations > API`` section. 2. Copy the unique token.  # Requests The API is based on REST principles: data resources are accessed via standard HTTPS requests in UTF-8 format to an API endpoint. Where possible, the API strives to use appropriate HTTP verbs for each action: | VERB     | DESCRIPTION                                            | | -------- |:-------------:                                         | | GET      | Used for retrieving resources.                         | | POST     | Used for creating resources.                           | | PUT      | Used for changing/replacing resources or collections.  | | PATCH    | Used for changing/replacing partial resources.         | | DELETE   | Used for deleting resources.                           |  # Responses Response Status Codes The API uses the following response status codes, as defined in the RFC 2616 and RFC 6585:  | STATUS CODE | DESCRIPTION                                                                                                                                                                                                                       | |:-----------:|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:| | 200         | OK - The request has succeeded. The client can read the result of the request in the body and the headers of the response.                                                                                                        | | 201         | Created - The request has been fulfilled and resulted in a new resource being created.                                                                                                                                            | | 202         | Accepted - The request has been accepted for processing, but the processing has not been completed.                                                                                                                               | | 204         | No Content - The request has succeeded but returns no message body.                                                                                                                                                               | | 304         | Not Modified. See Conditional requests.                                                                                                                                                                                           | | 400         | Bad Request - The request could not be understood by the server due to malformed syntax. The message body will contain more information; see Error Details.                                                                       | | 401         | Unauthorized - The request requires user authentication or, if the request included authorization credentials, authorization has been refused for those credentials.                                                              | | 403         | Forbidden - The server understood the request, but is refusing to fulfill it.                                                                                                                                                     | | 404         | Not Found - The requested resource could not be found. This error can be due to a temporary or permanent condition.                                                                                                               | | 429         | Too Many Requests - Rate limiting has been applied.                                                                                                                                                                               | | 500         | Internal Server Error. You should never receive this error because our clever coders catch them all ... but if you are unlucky enough to get one, please report it to us through a comment at the bottom of this page.            | | 502         | Bad Gateway - The server was acting as a gateway or proxy and received an invalid response from the upstream server.                                                                                                              | | 503         | Service Unavailable - The server is currently unable to handle the request due to a temporary condition which will be alleviated after some delay. You can choose to resend the request again.                                    |  # Rate limiting To make the API fast for everybody, rate limits apply.  Rate limiting is applied on an application basis (based on client id), regardless of how many users are using it.  If you get status code 429, it means that you have sent too many requests. If this happens, have a look in the Retry-After header, where you will see a number displayed. This is the amount of seconds that you need to wait, before you can retry sending your requests.  You can check the returned HTTP headers of any API request to see your current rate limit status:  ``` curl -i https://api.facestore.pt/v1/sample HTTP/1.1 200 OK Date: Mon, 01 Dec 2016 17:27:06 GMT Status: 200 OK X-RateLimit-Limit: 60 X-RateLimit-Remaining: 56 X-RateLimit-Reset: 1372700873 ```  The headers tell you everything you need to know about your current rate limit status:  | HEADER NAME           | DESCRIPTION                                                                     | |:---------------------:|:-------------------------------------------------------------------------------:| | X-RateLimit-Limit   | The maximum number of requests that the consumer is permitted to make per hour. | | X-RateLimit-Remaining | The number of requests remaining in the current rate limit window.              | | X-RateLimit-Reset   | The time at which the current rate limit window resets in UTC epoch seconds.    |  # Timestamps Timestamps are returned in ISO 8601 format as Coordinated Universal Time (UTC) with zero offset: YYYY-MM-DDTHH:MM:SSZ. If the time is imprecise (for example, the date/time of an product is created), an additional field will show the precision; see for example, created_at in an product object.  # Error Details The API uses the following format to describe unsuccessful responses, return information about the error as an error JSON object containing the following information::  | KEY         | VALUE TYPE   | VALUE DESCRIPTION | |:-----------:|:------------:|:-----------------:| | status_code | integer    | The HTTP status code (also returned in the response header; see Response Status Codes for more information). | | message     | string     | A short description of the cause of the error. | 
 *
 * OpenAPI spec version: 0.1.4
 * Contact: apihelp@facestore.pt
 *
 * NOTE: This class is auto generated by the swagger code generator 3.0.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "ModelBase.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

ModelBase::ModelBase()
{
}
ModelBase::~ModelBase()
{
}

web::json::value ModelBase::toJson( const utility::string_t& value )
{
    return web::json::value::string(value);
}
web::json::value ModelBase::toJson( const utility::datetime& value )
{
    return web::json::value::string(value.to_string(utility::datetime::ISO_8601));
}
web::json::value ModelBase::toJson( int32_t value )
{
    return web::json::value::number(value);
}
web::json::value ModelBase::toJson( int64_t value )
{
    return web::json::value::number(value);
}
web::json::value ModelBase::toJson( double value )
{
    return web::json::value::number(value);
} 
web::json::value ModelBase::toJson(bool value) {
    return web::json::value::boolean(value);
}

web::json::value ModelBase::toJson( std::shared_ptr<HttpContent> content )
{
    web::json::value value;
    value[utility::conversions::to_string_t("ContentDisposition")] = ModelBase::toJson(content->getContentDisposition());
    value[utility::conversions::to_string_t("ContentType")] = ModelBase::toJson(content->getContentType());
    value[utility::conversions::to_string_t("FileName")] = ModelBase::toJson(content->getFileName());
    value[utility::conversions::to_string_t("InputStream")] = web::json::value::string( ModelBase::toBase64(content->getData()) );
    return value;
}

std::shared_ptr<HttpContent> ModelBase::fileFromJson(web::json::value& val)
{
    std::shared_ptr<HttpContent> content(new HttpContent);

    if(val.has_field(utility::conversions::to_string_t("ContentDisposition")))
    {
        content->setContentDisposition( ModelBase::stringFromJson(val[utility::conversions::to_string_t("ContentDisposition")]) );
    }
    if(val.has_field(utility::conversions::to_string_t("ContentType")))
    {
        content->setContentType( ModelBase::stringFromJson(val[utility::conversions::to_string_t("ContentType")]) );
    }
    if(val.has_field(utility::conversions::to_string_t("FileName")))
    {
        content->setFileName( ModelBase::stringFromJson(val[utility::conversions::to_string_t("FileName")]) );
    }
    if(val.has_field(utility::conversions::to_string_t("InputStream")))
    {
        content->setData( ModelBase::fromBase64( ModelBase::stringFromJson(val[utility::conversions::to_string_t("InputStream")]) ) );
    }

    return content;
}

web::json::value ModelBase::toJson( std::shared_ptr<ModelBase> content )
{
    return content.get() ? content->toJson() : web::json::value::null();
}

std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, const utility::string_t& value, const utility::string_t& contentType)
{
    std::shared_ptr<HttpContent> content(new HttpContent);
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
    content->setData( std::shared_ptr<std::istream>( new std::stringstream( utility::conversions::to_utf8string(value) ) ) );
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, const utility::datetime& value, const utility::string_t& contentType )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
    content->setData( std::shared_ptr<std::istream>( new std::stringstream( utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601) ) ) ) );
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, std::shared_ptr<HttpContent> value )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( value->getContentDisposition() );
    content->setContentType( value->getContentType() );
    content->setData( value->getData() );
    content->setFileName( value->getFileName() );
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, const web::json::value& value, const utility::string_t& contentType )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
    content->setData( std::shared_ptr<std::istream>( new std::stringstream( utility::conversions::to_utf8string(value.serialize()) ) ) );
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, int32_t value, const utility::string_t& contentType )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
	std::stringstream* valueAsStringStream = new std::stringstream();
	(*valueAsStringStream) << value;
    content->setData( std::shared_ptr<std::istream>( valueAsStringStream ) );
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, int64_t value, const utility::string_t& contentType )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
	std::stringstream* valueAsStringStream = new std::stringstream();
	(*valueAsStringStream) << value;
    content->setData( std::shared_ptr<std::istream>( valueAsStringStream) ) ;
    return content;
}
std::shared_ptr<HttpContent> ModelBase::toHttpContent( const utility::string_t& name, double value, const utility::string_t& contentType )
{
    std::shared_ptr<HttpContent> content( new HttpContent );
    content->setName( name );
    content->setContentDisposition( utility::conversions::to_string_t("form-data") );
    content->setContentType( contentType );
	std::stringstream* valueAsStringStream = new std::stringstream();
	(*valueAsStringStream) << value;
    content->setData( std::shared_ptr<std::istream>( valueAsStringStream ) );
    return content;
}

// base64 encoding/decoding based on : https://en.wikibooks.org/wiki/Algorithm_Implementation/Miscellaneous/Base64#C.2B.2B
const static char Base64Chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const static char Base64PadChar = '=';
utility::string_t ModelBase::toBase64( utility::string_t value )
{
    std::shared_ptr<std::istream> source( new std::stringstream( utility::conversions::to_utf8string(value) ) );
    return ModelBase::toBase64(source);
}
utility::string_t ModelBase::toBase64( std::shared_ptr<std::istream> value )
{
    value->seekg( 0, value->end );
    size_t length = value->tellg();
    value->seekg( 0, value->beg );
    utility::string_t base64;
    base64.reserve( ((length / 3) + (length % 3 > 0)) * 4 );
    char read[3] = { 0 };
    uint32_t temp;
    for ( size_t idx = 0; idx < length / 3; idx++ )
    {
        value->read( read, 3 );
        temp = (read[0]) << 16;
        temp += (read[1]) << 8;
        temp += (read[2]);
        base64.append( 1, Base64Chars[(temp & 0x00FC0000) >> 18] );
        base64.append( 1, Base64Chars[(temp & 0x0003F000) >> 12] );
        base64.append( 1, Base64Chars[(temp & 0x00000FC0) >> 6] );
        base64.append( 1, Base64Chars[(temp & 0x0000003F)] );
    }
    switch ( length % 3 )
    {
        case 1:
            value->read( read, 1 );
            temp = read[0] << 16;
            base64.append( 1, Base64Chars[(temp & 0x00FC0000) >> 18] );
            base64.append( 1, Base64Chars[(temp & 0x0003F000) >> 12] );
            base64.append( 2, Base64PadChar );
            break;
        case 2:
            value->read( read, 2 );
            temp = read[0] << 16;
            temp += read[1] << 8;
            base64.append( 1, Base64Chars[(temp & 0x00FC0000) >> 18] );
            base64.append( 1, Base64Chars[(temp & 0x0003F000) >> 12] );
            base64.append( 1, Base64Chars[(temp & 0x00000FC0) >> 6] );
            base64.append( 1, Base64PadChar );
            break;
    }
    return base64;
}


std::shared_ptr<std::istream> ModelBase::fromBase64( const utility::string_t& encoded )
{
    std::shared_ptr<std::stringstream> result(new std::stringstream);

    char outBuf[3] = { 0 };
    uint32_t temp = 0;

    utility::string_t::const_iterator cursor = encoded.begin();
    while ( cursor < encoded.end() )
    {
        for ( size_t quantumPosition = 0; quantumPosition < 4; quantumPosition++ )
        {
            temp <<= 6;
            if ( *cursor >= 0x41 && *cursor <= 0x5A )
            {
                temp |= *cursor - 0x41;
            }
            else if ( *cursor >= 0x61 && *cursor <= 0x7A )
            {
                temp |= *cursor - 0x47;
            }
            else if ( *cursor >= 0x30 && *cursor <= 0x39 )
            {
                temp |= *cursor + 0x04;
            }
            else if ( *cursor == 0x2B )
            {
                temp |= 0x3E; //change to 0x2D for URL alphabet
            }
            else if ( *cursor == 0x2F )
            {
                temp |= 0x3F; //change to 0x5F for URL alphabet
            }
            else if ( *cursor == Base64PadChar ) //pad
            {
                switch ( encoded.end() - cursor )
                {
                    case 1: //One pad character
                        outBuf[0] = (temp >> 16) & 0x000000FF;
                        outBuf[1] = (temp >> 8) & 0x000000FF;
                        result->write( outBuf, 2 );
                        return result;
                    case 2: //Two pad characters
                        outBuf[0] = (temp >> 10) & 0x000000FF;
                        result->write( outBuf, 1 );
                        return result;
                    default:
                        throw web::json::json_exception( utility::conversions::to_string_t( "Invalid Padding in Base 64!" ).c_str() );
                }
            }
            else
            {
                throw web::json::json_exception( utility::conversions::to_string_t( "Non-Valid Character in Base 64!" ).c_str() );
            }
            ++cursor;
        }

        outBuf[0] = (temp >> 16) & 0x000000FF;
        outBuf[1] = (temp >> 8) & 0x000000FF;
        outBuf[2] = (temp) & 0x000000FF;
        result->write( outBuf, 3 );
    }

    return result;
}

int64_t ModelBase::int64_tFromJson(web::json::value& val)
{
    return val.as_number().to_int64();
}
int32_t ModelBase::int32_tFromJson(web::json::value& val)
{
    return val.as_integer();
}
float ModelBase::floatFromJson(web::json::value& val)
{
    return static_cast<float>(val.as_double());
}
utility::string_t ModelBase::stringFromJson(web::json::value& val)
{
    return val.is_string() ? val.as_string() : utility::conversions::to_string_t("");
}

utility::datetime ModelBase::dateFromJson(web::json::value& val)
{
    return utility::datetime::from_string(val.as_string(), utility::datetime::ISO_8601);
}
bool ModelBase::boolFromJson(web::json::value& val)
{
    return val.as_bool();
}
double ModelBase::doubleFromJson(web::json::value& val)
{
    return val.as_double();
}

int64_t ModelBase::int64_tFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);

    utility::stringstream_t ss(str);
    int64_t result = 0;
    ss >> result;
    return result;
}
int32_t ModelBase::int32_tFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);

    utility::stringstream_t ss(str);
    int32_t result = 0;
    ss >> result;
    return result;
}
float ModelBase::floatFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);

    utility::stringstream_t ss(str);
    float result = 0;
    ss >> result;
    return result;
}
utility::string_t ModelBase::stringFromHttpContent(std::shared_ptr<HttpContent> val)
{
    std::shared_ptr<std::istream> data = val->getData();
    data->seekg( 0, data->beg );

    std::string str((std::istreambuf_iterator<char>(*data.get())),
                 std::istreambuf_iterator<char>());

    return utility::conversions::to_string_t(str);
}
utility::datetime ModelBase::dateFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);
    return utility::datetime::from_string(str, utility::datetime::ISO_8601);
}

bool ModelBase::boolFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);

    utility::stringstream_t ss(str);
    bool result = false;
    ss >> result;
    return result;
}
double ModelBase::doubleFromHttpContent(std::shared_ptr<HttpContent> val)
{
    utility::string_t str = ModelBase::stringFromHttpContent(val);

    utility::stringstream_t ss(str);
    double result = 0.0;
    ss >> result;
    return result;
}

}
}
}
}
