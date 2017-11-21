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



#include "I18nProduct.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

I18nProduct::I18nProduct()
{
    m_Locale = utility::conversions::to_string_t("");
    m_Name = utility::conversions::to_string_t("");
    m_Synopsis = utility::conversions::to_string_t("");
    m_SynopsisIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Characteristics = utility::conversions::to_string_t("");
    m_CharacteristicsIsSet = false;
    m_SeoIsSet = false;
}

I18nProduct::~I18nProduct()
{
}

void I18nProduct::validate()
{
    // TODO: implement validation
}

web::json::value I18nProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_Locale);
    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    if(m_SynopsisIsSet)
    {
        val[utility::conversions::to_string_t("synopsis")] = ModelBase::toJson(m_Synopsis);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_CharacteristicsIsSet)
    {
        val[utility::conversions::to_string_t("characteristics")] = ModelBase::toJson(m_Characteristics);
    }
    if(m_SeoIsSet)
    {
        val[utility::conversions::to_string_t("seo")] = ModelBase::toJson(m_Seo);
    }

    return val;
}

void I18nProduct::fromJson(web::json::value& val)
{
    setLocale(ModelBase::stringFromJson(val[utility::conversions::to_string_t("locale")]));
    setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    if(val.has_field(utility::conversions::to_string_t("synopsis")))
    {
        setSynopsis(ModelBase::stringFromJson(val[utility::conversions::to_string_t("synopsis")]));
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("description")]));
    }
    if(val.has_field(utility::conversions::to_string_t("characteristics")))
    {
        setCharacteristics(ModelBase::stringFromJson(val[utility::conversions::to_string_t("characteristics")]));
    }
    if(val.has_field(utility::conversions::to_string_t("seo")))
    {
        if(!val[utility::conversions::to_string_t("seo")].is_null())
        {
            std::shared_ptr<I18nProduct_seo> newItem(new I18nProduct_seo());
            newItem->fromJson(val[utility::conversions::to_string_t("seo")]);
            setSeo( newItem );
        }
    }
}

void I18nProduct::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locale"), m_Locale));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    if(m_SynopsisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("synopsis"), m_Synopsis));
        
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
        
    }
    if(m_CharacteristicsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("characteristics"), m_Characteristics));
        
    }
    if(m_SeoIsSet)
    {
        if (m_Seo.get())
        {
            m_Seo->toMultipart(multipart, utility::conversions::to_string_t("seo."));
        }
        
    }
}

void I18nProduct::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setLocale(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locale"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    if(multipart->hasContent(utility::conversions::to_string_t("synopsis")))
    {
        setSynopsis(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("synopsis"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("characteristics")))
    {
        setCharacteristics(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("characteristics"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("seo")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("seo")))
        {
            std::shared_ptr<I18nProduct_seo> newItem(new I18nProduct_seo());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("seo."));
            setSeo( newItem );
        }
    }
}

utility::string_t I18nProduct::getLocale() const
{
    return m_Locale;
}


void I18nProduct::setLocale(utility::string_t value)
{
    m_Locale = value;
    
}
utility::string_t I18nProduct::getName() const
{
    return m_Name;
}


void I18nProduct::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t I18nProduct::getSynopsis() const
{
    return m_Synopsis;
}


void I18nProduct::setSynopsis(utility::string_t value)
{
    m_Synopsis = value;
    m_SynopsisIsSet = true;
}
bool I18nProduct::synopsisIsSet() const
{
    return m_SynopsisIsSet;
}

void I18nProduct::unsetSynopsis()
{
    m_SynopsisIsSet = false;
}

utility::string_t I18nProduct::getDescription() const
{
    return m_Description;
}


void I18nProduct::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool I18nProduct::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void I18nProduct::unsetDescription()
{
    m_DescriptionIsSet = false;
}

utility::string_t I18nProduct::getCharacteristics() const
{
    return m_Characteristics;
}


void I18nProduct::setCharacteristics(utility::string_t value)
{
    m_Characteristics = value;
    m_CharacteristicsIsSet = true;
}
bool I18nProduct::characteristicsIsSet() const
{
    return m_CharacteristicsIsSet;
}

void I18nProduct::unsetCharacteristics()
{
    m_CharacteristicsIsSet = false;
}

std::shared_ptr<I18nProduct_seo> I18nProduct::getSeo() const
{
    return m_Seo;
}


void I18nProduct::setSeo(std::shared_ptr<I18nProduct_seo> value)
{
    m_Seo = value;
    m_SeoIsSet = true;
}
bool I18nProduct::seoIsSet() const
{
    return m_SeoIsSet;
}

void I18nProduct::unsetSeo()
{
    m_SeoIsSet = false;
}

}
}
}
}

