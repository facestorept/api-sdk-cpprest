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



#include "Category.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Category::Category()
{
    m_Id = 0;
    m_Position = 0;
    m_PositionIsSet = false;
    m_Image_small = utility::conversions::to_string_t("");
    m_Image_smallIsSet = false;
    m_Image_larger = utility::conversions::to_string_t("");
    m_Image_largerIsSet = false;
    m_Active = false;
    m_ActiveIsSet = false;
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Updated_at = utility::datetime();
    m_Updated_atIsSet = false;
    m_VisibilityIsSet = false;
    m_I18nIsSet = false;
}

Category::~Category()
{
}

void Category::validate()
{
    // TODO: implement validation
}

web::json::value Category::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_PositionIsSet)
    {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(m_Position);
    }
    if(m_Image_smallIsSet)
    {
        val[utility::conversions::to_string_t("image_small")] = ModelBase::toJson(m_Image_small);
    }
    if(m_Image_largerIsSet)
    {
        val[utility::conversions::to_string_t("image_larger")] = ModelBase::toJson(m_Image_larger);
    }
    if(m_ActiveIsSet)
    {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(m_Active);
    }
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Visibility )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("visibility")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_I18n )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("i18n")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Category::fromJson(web::json::value& val)
{
    setId(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("id")]));
    if(val.has_field(utility::conversions::to_string_t("position")))
    {
        setPosition(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("position")]));
    }
    if(val.has_field(utility::conversions::to_string_t("image_small")))
    {
        setImageSmall(ModelBase::stringFromJson(val[utility::conversions::to_string_t("image_small")]));
    }
    if(val.has_field(utility::conversions::to_string_t("image_larger")))
    {
        setImageLarger(ModelBase::stringFromJson(val[utility::conversions::to_string_t("image_larger")]));
    }
    if(val.has_field(utility::conversions::to_string_t("active")))
    {
        setActive(ModelBase::boolFromJson(val[utility::conversions::to_string_t("active")]));
    }
    if(val.has_field(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::dateFromJson(val[utility::conversions::to_string_t("created_at")]));
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::dateFromJson(val[utility::conversions::to_string_t("updated_at")]));
    }
    {
        m_Visibility.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("visibility")))
        {
        for( auto& item : val[utility::conversions::to_string_t("visibility")].as_array() )
        {
            m_Visibility.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_I18n.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("i18n")))
        {
        for( auto& item : val[utility::conversions::to_string_t("i18n")].as_array() )
        {
            if(item.is_null())
            {
                m_I18n.push_back( std::shared_ptr<I18n>(nullptr) );
            }
            else
            {
                std::shared_ptr<I18n> newItem(new I18n());
                newItem->fromJson(item);
                m_I18n.push_back( newItem );
            }
        }
        }
    }
}

void Category::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    if(m_PositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("position"), m_Position));
    }
    if(m_Image_smallIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image_small"), m_Image_small));
        
    }
    if(m_Image_largerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image_larger"), m_Image_larger));
        
    }
    if(m_ActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("active"), m_Active));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created_at"), m_Created_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Visibility )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("visibility"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_I18n )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("i18n"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void Category::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    if(multipart->hasContent(utility::conversions::to_string_t("position")))
    {
        setPosition(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("position"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image_small")))
    {
        setImageSmall(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("image_small"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image_larger")))
    {
        setImageLarger(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("image_larger"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("active")))
    {
        setActive(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("active"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created_at")))
    {
        setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
    {
        m_Visibility.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("visibility")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("visibility"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Visibility.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    {
        m_I18n.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("i18n")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("i18n"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_I18n.push_back( std::shared_ptr<I18n>(nullptr) );
            }
            else
            {
                std::shared_ptr<I18n> newItem(new I18n());
                newItem->fromJson(item);
                m_I18n.push_back( newItem );
            }
        }
        }
    }
}

int32_t Category::getId() const
{
    return m_Id;
}


void Category::setId(int32_t value)
{
    m_Id = value;
    
}
int32_t Category::getPosition() const
{
    return m_Position;
}


void Category::setPosition(int32_t value)
{
    m_Position = value;
    m_PositionIsSet = true;
}
bool Category::positionIsSet() const
{
    return m_PositionIsSet;
}

void Category::unsetPosition()
{
    m_PositionIsSet = false;
}

utility::string_t Category::getImageSmall() const
{
    return m_Image_small;
}


void Category::setImageSmall(utility::string_t value)
{
    m_Image_small = value;
    m_Image_smallIsSet = true;
}
bool Category::imageSmallIsSet() const
{
    return m_Image_smallIsSet;
}

void Category::unsetImage_small()
{
    m_Image_smallIsSet = false;
}

utility::string_t Category::getImageLarger() const
{
    return m_Image_larger;
}


void Category::setImageLarger(utility::string_t value)
{
    m_Image_larger = value;
    m_Image_largerIsSet = true;
}
bool Category::imageLargerIsSet() const
{
    return m_Image_largerIsSet;
}

void Category::unsetImage_larger()
{
    m_Image_largerIsSet = false;
}

bool Category::isActive() const
{
    return m_Active;
}


void Category::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool Category::activeIsSet() const
{
    return m_ActiveIsSet;
}

void Category::unsetActive()
{
    m_ActiveIsSet = false;
}

utility::datetime Category::getCreatedAt() const
{
    return m_Created_at;
}


void Category::setCreatedAt(utility::datetime value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Category::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Category::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::datetime Category::getUpdatedAt() const
{
    return m_Updated_at;
}


void Category::setUpdatedAt(utility::datetime value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Category::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void Category::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

std::vector<utility::string_t>& Category::getVisibility()
{
    return m_Visibility;
}

void Category::setVisibility(std::vector<utility::string_t> value)
{
    m_Visibility = value;
    m_VisibilityIsSet = true;
}
bool Category::visibilityIsSet() const
{
    return m_VisibilityIsSet;
}

void Category::unsetVisibility()
{
    m_VisibilityIsSet = false;
}

std::vector<std::shared_ptr<I18n>>& Category::getI18n()
{
    return m_I18n;
}

void Category::setI18n(std::vector<std::shared_ptr<I18n>> value)
{
    m_I18n = value;
    m_I18nIsSet = true;
}
bool Category::i18nIsSet() const
{
    return m_I18nIsSet;
}

void Category::unsetI18n()
{
    m_I18nIsSet = false;
}

}
}
}
}

