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



#include "Product.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Product::Product()
{
    m_Id = 0L;
    m_Sku = utility::conversions::to_string_t("");
    m_SkuIsSet = false;
    m_Manual = utility::conversions::to_string_t("");
    m_ManualIsSet = false;
    m_Url_video = utility::conversions::to_string_t("");
    m_Url_videoIsSet = false;
    m_VisibilityIsSet = false;
    m_In_homepage = false;
    m_In_homepageIsSet = false;
    m_Is_prefered = false;
    m_Is_preferedIsSet = false;
    m_Is_digital = false;
    m_Is_digitalIsSet = false;
    m_Url_digital = utility::conversions::to_string_t("");
    m_Url_digitalIsSet = false;
    m_Is_new = false;
    m_Is_newIsSet = false;
    m_I18nIsSet = false;
    m_Active = false;
    m_ActiveIsSet = false;
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Updated_at = utility::datetime();
    m_Updated_atIsSet = false;
    m_Expires_at = utility::datetime();
    m_Expires_atIsSet = false;
}

Product::~Product()
{
}

void Product::validate()
{
    // TODO: implement validation
}

web::json::value Product::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_SkuIsSet)
    {
        val[utility::conversions::to_string_t("sku")] = ModelBase::toJson(m_Sku);
    }
    if(m_ManualIsSet)
    {
        val[utility::conversions::to_string_t("manual")] = ModelBase::toJson(m_Manual);
    }
    if(m_Url_videoIsSet)
    {
        val[utility::conversions::to_string_t("url_video")] = ModelBase::toJson(m_Url_video);
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
    if(m_In_homepageIsSet)
    {
        val[utility::conversions::to_string_t("in_homepage")] = ModelBase::toJson(m_In_homepage);
    }
    if(m_Is_preferedIsSet)
    {
        val[utility::conversions::to_string_t("is_prefered")] = ModelBase::toJson(m_Is_prefered);
    }
    if(m_Is_digitalIsSet)
    {
        val[utility::conversions::to_string_t("is_digital")] = ModelBase::toJson(m_Is_digital);
    }
    if(m_Url_digitalIsSet)
    {
        val[utility::conversions::to_string_t("url_digital")] = ModelBase::toJson(m_Url_digital);
    }
    if(m_Is_newIsSet)
    {
        val[utility::conversions::to_string_t("is_new")] = ModelBase::toJson(m_Is_new);
    }
    if(m_I18nIsSet)
    {
        val[utility::conversions::to_string_t("i18n")] = ModelBase::toJson(m_I18n);
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
    if(m_Expires_atIsSet)
    {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(m_Expires_at);
    }

    return val;
}

void Product::fromJson(web::json::value& val)
{
    setId(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("id")]));
    if(val.has_field(utility::conversions::to_string_t("sku")))
    {
        setSku(ModelBase::stringFromJson(val[utility::conversions::to_string_t("sku")]));
    }
    if(val.has_field(utility::conversions::to_string_t("manual")))
    {
        setManual(ModelBase::stringFromJson(val[utility::conversions::to_string_t("manual")]));
    }
    if(val.has_field(utility::conversions::to_string_t("url_video")))
    {
        setUrlVideo(ModelBase::stringFromJson(val[utility::conversions::to_string_t("url_video")]));
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
    if(val.has_field(utility::conversions::to_string_t("in_homepage")))
    {
        setInHomepage(ModelBase::boolFromJson(val[utility::conversions::to_string_t("in_homepage")]));
    }
    if(val.has_field(utility::conversions::to_string_t("is_prefered")))
    {
        setIsPrefered(ModelBase::boolFromJson(val[utility::conversions::to_string_t("is_prefered")]));
    }
    if(val.has_field(utility::conversions::to_string_t("is_digital")))
    {
        setIsDigital(ModelBase::boolFromJson(val[utility::conversions::to_string_t("is_digital")]));
    }
    if(val.has_field(utility::conversions::to_string_t("url_digital")))
    {
        setUrlDigital(ModelBase::stringFromJson(val[utility::conversions::to_string_t("url_digital")]));
    }
    if(val.has_field(utility::conversions::to_string_t("is_new")))
    {
        setIsNew(ModelBase::boolFromJson(val[utility::conversions::to_string_t("is_new")]));
    }
    if(val.has_field(utility::conversions::to_string_t("i18n")))
    {
        if(!val[utility::conversions::to_string_t("i18n")].is_null())
        {
            std::shared_ptr<I18nProduct> newItem(new I18nProduct());
            newItem->fromJson(val[utility::conversions::to_string_t("i18n")]);
            setI18n( newItem );
        }
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
    if(val.has_field(utility::conversions::to_string_t("expires_at")))
    {
        setExpiresAt(ModelBase::dateFromJson(val[utility::conversions::to_string_t("expires_at")]));
    }
}

void Product::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    if(m_SkuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sku"), m_Sku));
        
    }
    if(m_ManualIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manual"), m_Manual));
        
    }
    if(m_Url_videoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url_video"), m_Url_video));
        
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
    if(m_In_homepageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("in_homepage"), m_In_homepage));
    }
    if(m_Is_preferedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_prefered"), m_Is_prefered));
    }
    if(m_Is_digitalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_digital"), m_Is_digital));
    }
    if(m_Url_digitalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url_digital"), m_Url_digital));
        
    }
    if(m_Is_newIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("is_new"), m_Is_new));
    }
    if(m_I18nIsSet)
    {
        if (m_I18n.get())
        {
            m_I18n->toMultipart(multipart, utility::conversions::to_string_t("i18n."));
        }
        
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
    if(m_Expires_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expires_at"), m_Expires_at));
        
    }
}

void Product::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    if(multipart->hasContent(utility::conversions::to_string_t("sku")))
    {
        setSku(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sku"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manual")))
    {
        setManual(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("manual"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url_video")))
    {
        setUrlVideo(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url_video"))));
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
    if(multipart->hasContent(utility::conversions::to_string_t("in_homepage")))
    {
        setInHomepage(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("in_homepage"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_prefered")))
    {
        setIsPrefered(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_prefered"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_digital")))
    {
        setIsDigital(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_digital"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url_digital")))
    {
        setUrlDigital(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url_digital"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("is_new")))
    {
        setIsNew(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("is_new"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("i18n")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("i18n")))
        {
            std::shared_ptr<I18nProduct> newItem(new I18nProduct());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("i18n."));
            setI18n( newItem );
        }
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
    if(multipart->hasContent(utility::conversions::to_string_t("expires_at")))
    {
        setExpiresAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expires_at"))));
    }
}

int64_t Product::getId() const
{
    return m_Id;
}


void Product::setId(int64_t value)
{
    m_Id = value;
    
}
utility::string_t Product::getSku() const
{
    return m_Sku;
}


void Product::setSku(utility::string_t value)
{
    m_Sku = value;
    m_SkuIsSet = true;
}
bool Product::skuIsSet() const
{
    return m_SkuIsSet;
}

void Product::unsetSku()
{
    m_SkuIsSet = false;
}

utility::string_t Product::getManual() const
{
    return m_Manual;
}


void Product::setManual(utility::string_t value)
{
    m_Manual = value;
    m_ManualIsSet = true;
}
bool Product::manualIsSet() const
{
    return m_ManualIsSet;
}

void Product::unsetManual()
{
    m_ManualIsSet = false;
}

utility::string_t Product::getUrlVideo() const
{
    return m_Url_video;
}


void Product::setUrlVideo(utility::string_t value)
{
    m_Url_video = value;
    m_Url_videoIsSet = true;
}
bool Product::urlVideoIsSet() const
{
    return m_Url_videoIsSet;
}

void Product::unsetUrl_video()
{
    m_Url_videoIsSet = false;
}

std::vector<utility::string_t>& Product::getVisibility()
{
    return m_Visibility;
}

void Product::setVisibility(std::vector<utility::string_t> value)
{
    m_Visibility = value;
    m_VisibilityIsSet = true;
}
bool Product::visibilityIsSet() const
{
    return m_VisibilityIsSet;
}

void Product::unsetVisibility()
{
    m_VisibilityIsSet = false;
}

bool Product::isInHomepage() const
{
    return m_In_homepage;
}


void Product::setInHomepage(bool value)
{
    m_In_homepage = value;
    m_In_homepageIsSet = true;
}
bool Product::inHomepageIsSet() const
{
    return m_In_homepageIsSet;
}

void Product::unsetIn_homepage()
{
    m_In_homepageIsSet = false;
}

bool Product::isIsPrefered() const
{
    return m_Is_prefered;
}


void Product::setIsPrefered(bool value)
{
    m_Is_prefered = value;
    m_Is_preferedIsSet = true;
}
bool Product::isPreferedIsSet() const
{
    return m_Is_preferedIsSet;
}

void Product::unsetIs_prefered()
{
    m_Is_preferedIsSet = false;
}

bool Product::isIsDigital() const
{
    return m_Is_digital;
}


void Product::setIsDigital(bool value)
{
    m_Is_digital = value;
    m_Is_digitalIsSet = true;
}
bool Product::isDigitalIsSet() const
{
    return m_Is_digitalIsSet;
}

void Product::unsetIs_digital()
{
    m_Is_digitalIsSet = false;
}

utility::string_t Product::getUrlDigital() const
{
    return m_Url_digital;
}


void Product::setUrlDigital(utility::string_t value)
{
    m_Url_digital = value;
    m_Url_digitalIsSet = true;
}
bool Product::urlDigitalIsSet() const
{
    return m_Url_digitalIsSet;
}

void Product::unsetUrl_digital()
{
    m_Url_digitalIsSet = false;
}

bool Product::isIsNew() const
{
    return m_Is_new;
}


void Product::setIsNew(bool value)
{
    m_Is_new = value;
    m_Is_newIsSet = true;
}
bool Product::isNewIsSet() const
{
    return m_Is_newIsSet;
}

void Product::unsetIs_new()
{
    m_Is_newIsSet = false;
}

std::shared_ptr<I18nProduct> Product::getI18n() const
{
    return m_I18n;
}


void Product::setI18n(std::shared_ptr<I18nProduct> value)
{
    m_I18n = value;
    m_I18nIsSet = true;
}
bool Product::i18nIsSet() const
{
    return m_I18nIsSet;
}

void Product::unsetI18n()
{
    m_I18nIsSet = false;
}

bool Product::isActive() const
{
    return m_Active;
}


void Product::setActive(bool value)
{
    m_Active = value;
    m_ActiveIsSet = true;
}
bool Product::activeIsSet() const
{
    return m_ActiveIsSet;
}

void Product::unsetActive()
{
    m_ActiveIsSet = false;
}

utility::datetime Product::getCreatedAt() const
{
    return m_Created_at;
}


void Product::setCreatedAt(utility::datetime value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Product::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Product::unsetCreated_at()
{
    m_Created_atIsSet = false;
}

utility::datetime Product::getUpdatedAt() const
{
    return m_Updated_at;
}


void Product::setUpdatedAt(utility::datetime value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Product::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void Product::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

utility::datetime Product::getExpiresAt() const
{
    return m_Expires_at;
}


void Product::setExpiresAt(utility::datetime value)
{
    m_Expires_at = value;
    m_Expires_atIsSet = true;
}
bool Product::expiresAtIsSet() const
{
    return m_Expires_atIsSet;
}

void Product::unsetExpires_at()
{
    m_Expires_atIsSet = false;
}

}
}
}
}

